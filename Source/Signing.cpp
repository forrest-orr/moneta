/*
__________________________________________________________________________________________
| _______  _____  __   _ _______ _______ _______                                         |
| |  |  | |     | | \  | |______    |    |_____|                                         |
| |  |  | |_____| |  \_| |______    |    |     |                                         |
|________________________________________________________________________________________|
| Moneta ~ Usermode memory scanner & malware hunter                                      |
|----------------------------------------------------------------------------------------|
| https://www.forrest-orr.net/post/malicious-memory-artifacts-part-ii-bypassing-scanners |
|----------------------------------------------------------------------------------------|
| Author: Forrest Orr - 2020                                                             |
|----------------------------------------------------------------------------------------|
| Contact: forrest.orr@protonmail.com                                                    |
|----------------------------------------------------------------------------------------|
| Licensed under GNU GPLv3                                                               |
|________________________________________________________________________________________|
| ## Features                                                                            |
|                                                                                        |
| ~ Query the memory attributes of any accessible process(es).                           |
| ~ Identify private, mapped and image memory.                                           |
| ~ Correlate regions of memory to their underlying file on disks.                       |
| ~ Identify PE headers and sections corresponding to image memory.                      |
| ~ Identify modified regions of mapped image memory.                                    |
| ~ Identify abnormal memory attributes indicative of malware.                           |
| ~ Create memory dumps of user-specified memory ranges                                  |
| ~ Calculate memory permission/type statistics                                          |
|________________________________________________________________________________________|

*/

#include "StdAfx.h"
#include "Signing.h"

#pragma comment (lib, "Wintrust.lib")
#pragma comment (lib, "Crypt32.lib")

bool VerifyEmbeddedSignature(const wchar_t *FilePath) {
    LONG lStatus;
    uint32_t dwLastError;
    bool bSigned = false;
    WINTRUST_FILE_INFO FileData = { 0 };
    GUID WVTPolicyGUID = WINTRUST_ACTION_GENERIC_VERIFY_V2;
    WINTRUST_DATA WinTrustData = { 0 };

    FileData.cbStruct = sizeof(WINTRUST_FILE_INFO);
    FileData.pcwszFilePath = FilePath;
    FileData.hFile = nullptr;
    FileData.pgKnownSubject = nullptr;

    WinTrustData.cbStruct = sizeof(WinTrustData);
    WinTrustData.pPolicyCallbackData = nullptr;
    WinTrustData.pSIPClientData = nullptr;
    WinTrustData.dwUIChoice = WTD_UI_NONE;
    WinTrustData.fdwRevocationChecks = WTD_REVOKE_NONE;
    WinTrustData.dwUnionChoice = WTD_CHOICE_FILE;
    WinTrustData.dwStateAction = WTD_STATEACTION_VERIFY;
    WinTrustData.hWVTStateData = nullptr;
    WinTrustData.pwszURLReference = nullptr;
    WinTrustData.dwUIContext = 0;
    WinTrustData.pFile = &FileData;

    lStatus = WinVerifyTrust(nullptr, &WVTPolicyGUID, &WinTrustData);

    switch (lStatus) {
        case ERROR_SUCCESS: {
            bSigned = true;
            break;
        }
        case TRUST_E_NOSIGNATURE: {
            dwLastError = GetLastError();
            break;
        }
        default: break;
    }

    WinTrustData.dwStateAction = WTD_STATEACTION_CLOSE;
    WinVerifyTrust(nullptr, &WVTPolicyGUID, &WinTrustData);

    return bSigned;
}

wchar_t* GetWindowsPECatalogIssuer(const wchar_t* FilePath) {
    uint32_t dwEncoding = 0, dwContentType = 0, dwFormatType = 0, dwHashSize = 0, dwSignerInfoSize, dwCertNameLength;
    HCERTSTORE hCertStore = nullptr;
    HCRYPTMSG hMsg = nullptr;
    HCATADMIN hCatalogContext = nullptr;
    HCATINFO hTargetCatalog = nullptr;
    CATALOG_INFO CatalogInfo = { 0 };
    wchar_t* CertIssuer = nullptr;
    HANDLE hFile;
    PCMSG_SIGNER_INFO pSignerInfo;
    PCCERT_CONTEXT pCertContext = nullptr;
    CERT_INFO CertInfo;

    CatalogInfo.cbStruct = sizeof(CATALOG_INFO);

    if (CryptCATAdminAcquireContext(&hCatalogContext, nullptr, 0)) {
        if ((hFile = CreateFileW(FilePath, GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 0, nullptr)) != INVALID_HANDLE_VALUE) {
            if (CryptCATAdminCalcHashFromFileHandle(hFile, reinterpret_cast<PDWORD>(&dwHashSize), nullptr, 0) && dwHashSize != 0) {
                uint8_t* pHashBuffer = new uint8_t[dwHashSize];

                if (CryptCATAdminCalcHashFromFileHandle(hFile, reinterpret_cast<PDWORD>(&dwHashSize), pHashBuffer, 0)) {
                    if ((hTargetCatalog = CryptCATAdminEnumCatalogFromHash(hCatalogContext, pHashBuffer, dwHashSize, 0, nullptr)) != nullptr) {
                        if (CryptCATCatalogInfoFromContext(hTargetCatalog, &CatalogInfo, 0)) { // Catalog file at CatalogInfo.wszCatalogFile
                            if (CryptQueryObject(CERT_QUERY_OBJECT_FILE, CatalogInfo.wszCatalogFile, CERT_QUERY_CONTENT_FLAG_PKCS7_SIGNED_EMBED, CERT_QUERY_FORMAT_FLAG_BINARY, 0, reinterpret_cast<PDWORD>(&dwEncoding), reinterpret_cast<PDWORD>(&dwContentType), reinterpret_cast<PDWORD>(&dwFormatType), &hCertStore, &hMsg, nullptr)) {
                                if (CryptMsgGetParam(hMsg, CMSG_SIGNER_INFO_PARAM, 0, nullptr, reinterpret_cast<PDWORD>(&dwSignerInfoSize)) && dwSignerInfoSize) {
                                    pSignerInfo = reinterpret_cast<PCMSG_SIGNER_INFO>(new uint8_t[dwSignerInfoSize]);

                                    if (CryptMsgGetParam(hMsg, CMSG_SIGNER_INFO_PARAM, 0, static_cast<void*>(pSignerInfo), reinterpret_cast<PDWORD>(&dwSignerInfoSize))) {
                                        CertInfo.Issuer = pSignerInfo->Issuer;
                                        CertInfo.SerialNumber = pSignerInfo->SerialNumber;

                                        if ((pCertContext = CertFindCertificateInStore(hCertStore, (X509_ASN_ENCODING | PKCS_7_ASN_ENCODING), 0, CERT_FIND_SUBJECT_CERT, static_cast<void*>(&CertInfo), nullptr)) != nullptr) {
                                            if ((dwCertNameLength = CertGetNameStringW(pCertContext, CERT_NAME_SIMPLE_DISPLAY_TYPE, CERT_NAME_ISSUER_FLAG, nullptr, nullptr, 0))) {
                                                CertIssuer = reinterpret_cast<wchar_t *>(new uint8_t[((dwCertNameLength + 1) * sizeof(wchar_t))]); // Documentation says the length returned is in characters not bytes.

                                                if (!CertGetNameStringW(pCertContext, CERT_NAME_SIMPLE_DISPLAY_TYPE, CERT_NAME_ISSUER_FLAG, nullptr, CertIssuer, dwCertNameLength)) {
                                                    CertIssuer = nullptr;
                                                }
                                            }

                                            CertFreeCertificateContext(pCertContext);
                                        }
                                    }

                                    delete pSignerInfo;
                                }

                                CryptMsgClose(hMsg);
                                CertCloseStore(hCertStore, CERT_CLOSE_STORE_CHECK_FLAG);
                            }
                        }

                        CryptCATAdminReleaseCatalogContext(hCatalogContext, hTargetCatalog, 0);
                    }
                }

                delete pHashBuffer;
            }

            CloseHandle(hFile);
        }

        CryptCATAdminReleaseContext(hCatalogContext, 0);
    }

    return CertIssuer;
}

bool IsCatalogSigned(const wchar_t* FilePath) {
    wchar_t* CertIssuer;
    bool bIsSigned = false;

    if ((CertIssuer = GetWindowsPECatalogIssuer(FilePath)) != nullptr) {
        bIsSigned = true;
        delete CertIssuer;
    }

    return bIsSigned;
}

Signing_t CheckSigning(const wchar_t* TargetFilePath) {
    if (!VerifyEmbeddedSignature(TargetFilePath)) {
        if (!IsCatalogSigned(TargetFilePath)) {
            return Signing_t::Unsigned;
        }
        else {
            return Signing_t::Catalog;
        }
    }
    else {
        return Signing_t::Embedded;
    }
}

const wchar_t* TranslateSigningLevel(uint32_t dwSigningLevel) {
    switch (dwSigningLevel) {
        case 0: return L"Unchecked";
        case 1: return L"Unsigned";
        case 4: return L"Authenticode";
        case 6: return L"Store";
        case 7: return L"Anti-malware";
        case 8: return L"Microsoft";
        case 12: return L"Windows";
        case 14: return L"Windows TCB";
        default: return L"?";
    }
}

const wchar_t* TranslateSigningType(Signing_t Type) {
    switch (Type) {
        case Signing_t::Catalog: return L"Catalog";
        case Signing_t::Embedded: return L"Embedded";
        case Signing_t::Unsigned: return L"Unsigned";
        default: return L"?";
    }
}
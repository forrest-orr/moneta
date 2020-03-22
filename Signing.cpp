#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <Softpub.h>
#include <stdint.h>
#include <mscat.h>
#include <wincrypt.h>
#include <wintrust.h>

#pragma comment (lib, "Wintrust.lib")
#pragma comment (lib, "Crypt32.lib")

bool VerifyEmbeddedSignature(LPCWSTR pwszSourceFile) {
    LONG lStatus;
    DWORD dwLastError;
    bool bSigned = false;

    // Initialize the WINTRUST_FILE_INFO structure.

    WINTRUST_FILE_INFO FileData;
    memset(&FileData, 0, sizeof(FileData));
    FileData.cbStruct = sizeof(WINTRUST_FILE_INFO);
    FileData.pcwszFilePath = pwszSourceFile;
    FileData.hFile = NULL;
    FileData.pgKnownSubject = NULL;

    /*
    WVTPolicyGUID specifies the policy to apply on the file
    WINTRUST_ACTION_GENERIC_VERIFY_V2 policy checks:

    1) The certificate used to sign the file chains up to a root
    certificate located in the trusted root certificate store. This
    implies that the identity of the publisher has been verified by
    a certification authority.

    2) In cases where user interface is displayed (which this example
    does not do), WinVerifyTrust will check for whether the
    end entity certificate is stored in the trusted publisher store,
    implying that the user trusts content from this publisher.

    3) The end entity certificate has sufficient permission to sign
    code, as indicated by the presence of a code signing EKU or no
    EKU.
    */

    GUID WVTPolicyGUID = WINTRUST_ACTION_GENERIC_VERIFY_V2;
    WINTRUST_DATA WinTrustData;

    // Initialize the WinVerifyTrust input data structure.

    // Default all fields to 0.
    memset(&WinTrustData, 0, sizeof(WinTrustData));

    WinTrustData.cbStruct = sizeof(WinTrustData);

    // Use default code signing EKU.
    WinTrustData.pPolicyCallbackData = NULL;

    // No data to pass to SIP.
    WinTrustData.pSIPClientData = NULL;

    // Disable WVT UI.
    WinTrustData.dwUIChoice = WTD_UI_NONE;

    // No revocation checking.
    WinTrustData.fdwRevocationChecks = WTD_REVOKE_NONE;

    // Verify an embedded signature on a file.
    WinTrustData.dwUnionChoice = WTD_CHOICE_FILE;

    // Verify action.
    WinTrustData.dwStateAction = WTD_STATEACTION_VERIFY;

    // Verification sets this value.
    WinTrustData.hWVTStateData = NULL;

    // Not used.
    WinTrustData.pwszURLReference = NULL;

    // This is not applicable if there is no UI because it changes 
    // the UI to accommodate running applications instead of 
    // installing applications.
    WinTrustData.dwUIContext = 0;

    // Set pFile.
    WinTrustData.pFile = &FileData;

    // WinVerifyTrust verifies signatures as specified by the GUID 
    // and Wintrust_Data.
    lStatus = WinVerifyTrust(
        NULL,
        &WVTPolicyGUID,
        &WinTrustData);

    switch (lStatus)
    {
    case ERROR_SUCCESS:
        /*
        Signed file:
            - Hash that represents the subject is trusted.

            - Trusted publisher without any verification errors.

            - UI was disabled in dwUIChoice. No publisher or
                time stamp chain errors.

            - UI was enabled in dwUIChoice and the user clicked
                "Yes" when asked to install and run the signed
                subject.
        */
        bSigned = true;
        break;

    case TRUST_E_NOSIGNATURE:
        // The file was not signed or had a signature 
        // that was not valid.

        // Get the reason for no signature.
        dwLastError = GetLastError();
        if (TRUST_E_NOSIGNATURE == dwLastError ||
            TRUST_E_SUBJECT_FORM_UNKNOWN == dwLastError ||
            TRUST_E_PROVIDER_UNKNOWN == dwLastError)
        {
            // The file was not signed.
        }
        else
        {
            // The signature was not valid or there was an error 
            // opening the file.
        }

        break;

    case TRUST_E_EXPLICIT_DISTRUST:
        // The hash that represents the subject or the publisher 
        // is not allowed by the admin or user.
        break;

    case TRUST_E_SUBJECT_NOT_TRUSTED:
        // The user clicked "No" when asked to install and run.
        break;

    case CRYPT_E_SECURITY_SETTINGS:
        /*
        The hash that represents the subject or the publisher
        was not explicitly trusted by the admin and the
        admin policy has disabled user trust. No signature,
        publisher or time stamp errors.
        */
        break;

    default:
        // The UI was disabled in dwUIChoice or the admin policy 
        // has disabled user trust. lStatus contains the 
        // publisher or time stamp chain error.
        break;
    }

    // Any hWVTStateData must be released by a call with close.
    WinTrustData.dwStateAction = WTD_STATEACTION_CLOSE;

    lStatus = WinVerifyTrust(
        NULL,
        &WVTPolicyGUID,
        &WinTrustData);

    return bSigned;
}

wchar_t* GetWindowsPECatalogIssuer(const wchar_t* TargetFilePath)
{
    uint32_t dwEncoding = 0, dwContentType = 0, dwFormatType = 0, dwHashSize = 0, dwSignerInfoSize, dwCertNameLength;
    HCERTSTORE hCertStore = NULL;
    HCRYPTMSG hMsg = NULL;
    HCATADMIN hCatalogContext = NULL;
    HCATINFO hTargetCatalog = NULL;
    CATALOG_INFO CatalogInfo = { 0 };
    wchar_t* pCerificateIssuer = NULL;
    HANDLE hFile;
    PCMSG_SIGNER_INFO pSignerInfo;
    PCCERT_CONTEXT pCertContext = NULL;
    CERT_INFO CertInfo;

    CatalogInfo.cbStruct = sizeof(CATALOG_INFO);

    if (CryptCATAdminAcquireContext(&hCatalogContext, NULL, 0))
    {
        if ((hFile = CreateFileW(TargetFilePath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL)) != INVALID_HANDLE_VALUE)
        {
            if (CryptCATAdminCalcHashFromFileHandle(hFile, (PDWORD)&dwHashSize, NULL, 0) && dwHashSize != 0)
            {
                uint8_t* pHashBuffer = new uint8_t[dwHashSize];

                if (CryptCATAdminCalcHashFromFileHandle(hFile, (PDWORD)&dwHashSize, pHashBuffer, 0))
                {
                    if ((hTargetCatalog = CryptCATAdminEnumCatalogFromHash(hCatalogContext, pHashBuffer, dwHashSize, 0, NULL)) != NULL)
                    {
                        if (CryptCATCatalogInfoFromContext(hTargetCatalog, &CatalogInfo, 0))
                        {
                           // printf("[*] Path from catalog info is %ws\r\n", CatalogInfo.wszCatalogFile);

                            if (CryptQueryObject(CERT_QUERY_OBJECT_FILE, CatalogInfo.wszCatalogFile, CERT_QUERY_CONTENT_FLAG_PKCS7_SIGNED_EMBED, CERT_QUERY_FORMAT_FLAG_BINARY, 0, (PDWORD)&dwEncoding, (PDWORD)&dwContentType, (PDWORD)&dwFormatType, &hCertStore, &hMsg, NULL))
                            {
                                if (CryptMsgGetParam(hMsg, CMSG_SIGNER_INFO_PARAM, 0, NULL, (PDWORD)&dwSignerInfoSize) && dwSignerInfoSize)
                                {
                                    pSignerInfo = (PCMSG_SIGNER_INFO)new uint8_t[dwSignerInfoSize];

                                    if (CryptMsgGetParam(hMsg, CMSG_SIGNER_INFO_PARAM, 0, (void*)pSignerInfo, (PDWORD)&dwSignerInfoSize))
                                    {
                                        CertInfo.Issuer = pSignerInfo->Issuer;
                                        CertInfo.SerialNumber = pSignerInfo->SerialNumber;

                                        if ((pCertContext = CertFindCertificateInStore(hCertStore, (X509_ASN_ENCODING | PKCS_7_ASN_ENCODING), 0, CERT_FIND_SUBJECT_CERT, (void*)&CertInfo, NULL)) != NULL)
                                        {
                                            if ((dwCertNameLength = CertGetNameStringW(pCertContext, CERT_NAME_SIMPLE_DISPLAY_TYPE, CERT_NAME_ISSUER_FLAG, NULL, NULL, 0)))
                                            {
                                                pCerificateIssuer = (wchar_t*)new uint8_t[((dwCertNameLength + 1) * sizeof(wchar_t))]; // Documentation says the length returned is in characters not bytes.

                                                if (!CertGetNameStringW(pCertContext, CERT_NAME_SIMPLE_DISPLAY_TYPE, CERT_NAME_ISSUER_FLAG, NULL, pCerificateIssuer, dwCertNameLength))
                                                {
                                                    delete pCerificateIssuer;

                                                    pCerificateIssuer = NULL;
                                                }
                                                else
                                                {
                                                   // printf("[*] The cert issuer name is \"%ws\"\r\n", pCerificateIssuer);
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

    return pCerificateIssuer;
}

BOOL IsCatalogSigned(const wchar_t* TargetFilePath)
{
    wchar_t* pCerificateIssuer;
    BOOL bIsSigned = FALSE;

    if ((pCerificateIssuer = GetWindowsPECatalogIssuer(TargetFilePath)) != NULL)
    {
        bIsSigned = TRUE;
        delete pCerificateIssuer;
    }

    return bIsSigned;
}

bool CheckSigning(const wchar_t* TargetFilePath) {
    if (!VerifyEmbeddedSignature(TargetFilePath)) {
        return IsCatalogSigned(TargetFilePath);
    }
    else {
        return true;
    }
}

/*
 0->Unchecked, 1->Unsigned, 4->Authenticode, 8->Microsoft, 12->Windows • In Windows 8.1, this was extended to differentiate against the new types of processes and their protection levels • 6->Store, 7->Anti Malware, 14->Windows TCB
*/
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
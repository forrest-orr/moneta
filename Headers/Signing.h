enum class Signing_t {
	Unsigned = 0,
	Catalog,
	Embedded
};

Signing_t CheckSigning(const wchar_t* TargetFilePath);
const wchar_t* TranslateSigningLevel(uint32_t dwSigningLevel);
const wchar_t* TranslateSigningType(Signing_t Type);
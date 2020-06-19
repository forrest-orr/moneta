class Interface {
public:
	enum class VerbosityLevel {
		Silent,
		Surface,
		Detail,
		Debug
	};

	enum class ConsoleColor {
		Turquoise = 11,
		Red = 12,
		Gold = 6,
		Yellow = 14
	};

	static void Initialize(std::wstring LogFilePath, VerbosityLevel Vlvl = Interface::VerbosityLevel::Surface);
	static void Initialize(VerbosityLevel Vlvl = Interface::VerbosityLevel::Surface);
	static void Initialize(std::vector<std::wstring> &Args);
	static bool Log(VerbosityLevel MsgVlvl, const char *LogFormat, ...);
	static bool Log(VerbosityLevel MsgVlvl, ConsoleColor Color, const char* LogFormat, ...);
	static HANDLE GetOutputHandle() { return Interface::Handle; }
	static VerbosityLevel GetVerbosity() { return Interface::VerbosityLvl; }
	static void SetVerbosity(VerbosityLevel Vlvl) { Interface::VerbosityLvl = Vlvl; }
	static void EnumColors();
	static void AlignStr(const wchar_t* pOriginalStr, wchar_t* pAlignedStr, int32_t nAlignTo);
private:
	static std::wstring LogFilePath;
	static HANDLE Handle;
	static VerbosityLevel VerbosityLvl;
	static bool IsStdout;
};
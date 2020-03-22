enum class VerbosityLevel {
	Surface = 0,
	Detail,
	Debug
};

enum class ConsoleColor {
	Turquoise = 11,
	Red = 12,
	Gold = 6
};

class Interface
{
public:
	static void Initialize(std::wstring LogFilePath2, VerbosityLevel Vlvl = VerbosityLevel::Surface);
	static void Initialize(VerbosityLevel Vlvl = VerbosityLevel::Surface);
	static void Initialize(std::vector<std::wstring> &Args);
	static bool Log(VerbosityLevel MsgVlvl, const char *pLogFormat, ...);
	static bool Log(const char *pLogFormat, ...);
	static bool Log(ConsoleColor Color, const char* pLogFormat, ...);
	static HANDLE GetOutputHandle() { return Interface::Handle; }
	static VerbosityLevel GetVerbosity() { return Interface::VerbosityLvl; }
private:
	static std::wstring LogFilePath;
	static HANDLE Handle;
	static VerbosityLevel VerbosityLvl;
	static bool IsStdout;
};
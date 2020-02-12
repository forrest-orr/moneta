class Interface
{
public:
	static void Initialize(std::wstring LogFilePath2, int32_t nVerbosityLvl = 1);
	static void Initialize(int32_t nVerbosityLvl = 1);
	static void Initialize(std::vector<std::wstring> &Args);
	static bool Log(int32_t nMsgVerbosity, const char *pLogFormat, ...);
	static bool Log(const char *pLogFormat, ...);
	static HANDLE GetOutputHandle();
	static int32_t GetVerbosity();

private:
	static std::wstring LogFilePath;
	static HANDLE Handle;
	static int32_t VerbosityLvl;
	static bool IsStdout;
};
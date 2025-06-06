#include "Main.h"

CString GetAbsolutePath(const fs::path& relativePath)
{
	std::string absoluteStr = fs::absolute(relativePath).string();
	return CString(absoluteStr.c_str());
}

CString GetFirstDllAbsolutePath(const fs::path& directory)
{
	for (const auto& entry : fs::directory_iterator(directory)) {
		if (entry.is_regular_file() && entry.path().extension() == ".dll") {
			return CString(entry.path().lexically_normal().string().c_str());
		}
	}
	return CString("");
}

DWORD FindProcess(LPCTSTR Name)
{
	HANDLE hProcess = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
	if (!hProcess)
	{
		return FALSE;
	}
	PROCESSENTRY32 info;
	info.dwSize = sizeof(PROCESSENTRY32);
	if (!Process32First(hProcess, &info))
	{
		return FALSE;
	}
	while (1)
	{
		if (_tcscmp(info.szExeFile, Name) == 0)
		{
			return info.th32ProcessID;
		}
		if (!Process32Next(hProcess, &info))
		{
			return FALSE;
		}
	}
	return FALSE;
}

BOOL Inject(LPCTSTR DllPath, DWORD ProcessID)
{
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, TRUE, ProcessID);
	if (!hProcess)
	{
		return FALSE;
	}
	SIZE_T PathSize = (_tcslen(DllPath) + 1) * sizeof(TCHAR);
	LPVOID StartAddress = VirtualAllocEx(hProcess, NULL, PathSize, MEM_COMMIT, PAGE_READWRITE);
	if (!StartAddress)
	{
		return FALSE;
	}
	if (!WriteProcessMemory(hProcess, StartAddress, DllPath, PathSize, NULL))
	{
		return FALSE;
	}
	PTHREAD_START_ROUTINE pfnStartAddress = (PTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandle(L"kernel32.dll"), "LoadLibraryW");
	if (!pfnStartAddress)
	{
		return FALSE;
	}
	HANDLE hThread = CreateRemoteThreadEx(hProcess, NULL, NULL, pfnStartAddress, StartAddress, NULL, NULL, NULL);
	if (!hThread)
	{
		return FALSE;
	}
	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);
	CloseHandle(hProcess);
	return TRUE;
}

void SetConsoleColor(WORD color)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}

int main()
{
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	std::cout << R"(
   _____   ____  __  __ ______ _______ 
  / ____| / __ \|  \/  |  ____|__   __|
 | |     | |  | | \  / | |__     | |   
 | |     | |  | | |\/| |  __|    | |   
 | |____ | |__| | |  | | |____   | |   
  \_____| \____/|_|  |_|______|  |_|   

)" << std::endl;
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	printf(" >>> Run Injector Success!\n\n");

	printf(" >>> Github : ");
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("https://github.com/LHY1339/Comet_ReadyOrNotCheat \n\n");

	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	printf(" >>> Please Run The Game With ");
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	printf("DirectX11\n\n");

	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	printf(" >>> If Your ");
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("Game Has Crashed");
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	printf(" Or ");
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("Cant Find Game Window");
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	printf(", Open The Injector ");
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	printf("Until You Reach The Main Menu\n\n");
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

	const CString DllPath = GetFirstDllAbsolutePath();
	const CString ExeName = "ReadyOrNot-Win64-Shipping.exe";

	bool was_inject = false;

	while (true)
	{
		DWORD ProcID = FindProcess(ExeName);
		HWND hwnd = FindWindow(L"UnrealWindow", NULL);
		if (!ProcID || !hwnd)
		{
			was_inject = false;
		}
		else
		{
			if (!was_inject)
			{
				was_inject = true;
				if (Inject(DllPath, ProcID))
				{
					std::cout << " > Inject Success" << std::endl;
				}
			}
		}
		Sleep(100);
	}

	return 0;
}
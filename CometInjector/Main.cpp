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

int main()
{
	CString DllPath = GetFirstDllAbsolutePath();
	CString ExeName = "ReadyOrNot-Win64-Shipping.exe";
	DWORD ProcID = FindProcess(ExeName);
	if (!Inject(DllPath, ProcID))
	{
		std::cout << "Inject Fail" << std::endl;
		Sleep(1000);
		return -1;
	}
	std::cout << "Inject Success" << std::endl;
	return 0;
}
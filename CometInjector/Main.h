#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <tchar.h>
#include <atlstr.h>
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

CString GetAbsolutePath(const fs::path& relativePath);
CString GetFirstDllAbsolutePath(const fs::path& directory = fs::current_path());
DWORD FindProcess(LPCTSTR Name);
BOOL Inject(LPCTSTR DllPath, DWORD ProcessID);
void SetConsoleColor(WORD color);
int main();
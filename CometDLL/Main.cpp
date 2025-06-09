#include "MainThread.h"
#include "Global.h"
#include <Windows.h>
#include <iostream>

#pragma warning(disable:4996)

#pragma comment(lib,"d3d11.lib")

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        //AllocConsole();
        //FILE* value = freopen("CONOUT$", "w+", stdout);
        Game::DllModule = hModule;
        CloseHandle(CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)Thread_Execute, NULL, NULL, NULL));
    }
    return TRUE;
}

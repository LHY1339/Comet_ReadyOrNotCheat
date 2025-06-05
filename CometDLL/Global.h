#pragma once
#include <Windows.h>
#include "Function.h"

#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui_impl_win32.h"

namespace SDK
{
    class UWorld;
    class APlayerController;
    class APawn;
}

namespace Game
{
	extern HWND Hwnd;
	extern DWORD64* Vtb;
    extern IDXGISwapChain* SwapChain;
    extern ID3D11Device* Device;
    extern ID3D11DeviceContext* DeviceContext;
    extern ID3D11RenderTargetView* RenderTargetView;
    extern Present DefPresent;
    extern Resize DefResize;
    extern WndProc DefWndProc;
    extern RECT WndSize;
}

namespace Menu
{
    extern bool IsOpen;
    extern ImVec2 WindowPos;
}

namespace Unreal
{
    extern SDK::UWorld* GWorld;
    extern SDK::APlayerController* GPlayerController;
    extern SDK::APawn* GPawn;
}
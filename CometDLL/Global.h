#pragma once
#include <Windows.h>
#include <string>
#include "Function.h"

#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui_impl_win32.h"

enum class ELanguage;

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
    extern bool IsLanguageOpen;
    extern ELanguage TargetLanguage;
}

namespace Unreal
{
    extern SDK::UWorld* GWorld;
    extern SDK::APlayerController* GPlayerController;
    extern SDK::APawn* GPawn;
}

namespace String
{
    namespace Menu
    {
        extern std::string Title;
        extern std::string Lable;

        extern std::string Visual;
        extern std::string Aim;
        extern std::string Player;
        extern std::string Misc;
        extern std::string Script;
        extern std::string Config;
        extern std::string Language;

        extern std::string Chinese;
        extern std::string English;
        extern std::string French;
        extern std::string Russian;
        extern std::string Japanese;
        extern std::string Korean;
    }
}

namespace Resource
{
    namespace Fonts
    {
        extern ImFont* F10;
        extern ImFont* F20;
    }
}
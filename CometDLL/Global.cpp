#include "Global.h"
#include "Language.h"
#include "Enum.h"

namespace Game
{
    HWND Hwnd = nullptr;
    DWORD64* Vtb = nullptr;
    IDXGISwapChain* SwapChain = nullptr;
    ID3D11Device* Device = nullptr;
    ID3D11DeviceContext* DeviceContext = nullptr;
    ID3D11RenderTargetView* RenderTargetView = nullptr;
    Present DefPresent = nullptr;
    Resize DefResize = nullptr;
    WndProc DefWndProc = nullptr;
    RECT WndSize = {};
}

namespace Menu
{
    bool IsOpen = true;
    ImVec2 WindowPos = ImVec2();
    bool IsLanguageOpen = false;
    ELanguage TargetLanguage = ELanguage::L_Chinese;
}

namespace Unreal
{
    SDK::UWorld* GWorld = nullptr;
    SDK::APlayerController* GPlayerController = nullptr;
    SDK::APawn* GPawn = nullptr;
}

namespace String
{
    namespace Menu
    {
        std::string Title = "";
        std::string Lable = "";

        std::string Visual = "";
        std::string Aim = "";
        std::string Player = "";
        std::string Misc = "";
        std::string Script = "";
        std::string Config = "";
        std::string Language = "Language";

        std::string Chinese = "";
        std::string English = "";
        std::string Russian = "";
        std::string Japanese = "";
        std::string Korean = "";
        std::string French = "";
    }
}

namespace Resource
{
    namespace Fonts
    {
        ImFont* F10 = nullptr;
        ImFont* F20 = nullptr;
    }
}
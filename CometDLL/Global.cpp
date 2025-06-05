#include "Global.h"
#include "SDK.hpp"

HWND Game::Hwnd = nullptr;
DWORD64* Game::Vtb = nullptr;
IDXGISwapChain* Game::SwapChain = nullptr;
ID3D11Device* Game::Device = nullptr;
ID3D11DeviceContext* Game::DeviceContext = nullptr;
ID3D11RenderTargetView* Game::RenderTargetView = nullptr;
Present Game::DefPresent = nullptr;
Resize Game::DefResize = nullptr;
WndProc Game::DefWndProc = nullptr;
RECT Game::WndSize = {};

bool Menu::IsOpen = true;
ImVec2 Menu::WindowPos = ImVec2(0.0f, 0.0f);

SDK::UWorld* Unreal::GWorld = nullptr;
SDK::APlayerController* Unreal::GPlayerController = nullptr;
SDK::APawn* Unreal::GPawn = nullptr;
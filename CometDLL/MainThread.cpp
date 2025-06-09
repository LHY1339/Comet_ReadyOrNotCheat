#include "MainThread.h"
#include "Global.h"
#include "Menu.h"
#include "UnrealStatic.h"
#include "Language.h"

#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui_impl_win32.h"

#include "resource.h"

#include <Windows.h>
#include <iostream>

void Thread_Execute()
{
    Exec_PreLaunch();
    Exec_GetWindow();
    Exec_InitD3D11();
    Exec_InitVtb();
    Exec_HookD3D11();
    Exec_HookWindow();
}

void Exec_PreLaunch()
{
    Sleep(1000);
}

void Exec_GetWindow()
{
    while (Game::Hwnd == nullptr)
    {
        Game::Hwnd = FindWindow(L"UnrealWindow", NULL);
    }
    GetClientRect(Game::Hwnd, &Game::WndSize);
    std::cout << "Hwnd = " << Game::Hwnd << std::endl;
}

void Exec_InitD3D11()
{
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = Game::Hwnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    HRESULT res = D3D11CreateDeviceAndSwapChain(
        nullptr,
        D3D_DRIVER_TYPE_HARDWARE,
        nullptr,
        createDeviceFlags,
        featureLevelArray,
        2,
        D3D11_SDK_VERSION,
        &sd,
        &Game::SwapChain,
        nullptr,
        &featureLevel,
        nullptr
    );
    if (res != S_OK)
    {
        std::cout << "SwapChain Init Faild" << std::endl;
        return;
    }
    std::cout << "SwapChain = " << Game::SwapChain << std::endl;
}

void Exec_InitVtb()
{
    Game::Vtb = *(DWORD64**)Game::SwapChain;
    DWORD Protect;
    VirtualProtect(Game::Vtb, 1, PAGE_EXECUTE_READWRITE, &Protect);
    std::cout << "Vtb = " << Game::Vtb << std::endl;
}

void Exec_HookD3D11()
{
    Game::DefPresent = (Present)Game::Vtb[8];
    Game::Vtb[8] = (DWORD64)Hook_PresentInit;
    std::cout << "Hook Present = " << Hook_PresentInit << std::endl;
    Game::DefResize = (Resize)Game::Vtb[13];
    Game::Vtb[13] = (DWORD64)Hook_Resize;
    std::cout << "Hook Resize = " << Hook_Resize << std::endl;
    Game::SwapChain->Release();
}

void Exec_HookWindow()
{
    Game::DefWndProc = (WndProc)SetWindowLongPtrA(Game::Hwnd, GWLP_WNDPROC, (LONG_PTR)Hook_WndProc);
    std::cout << "Hook WindowProc = " << Hook_WndProc << std::endl;
}

HRESULT __stdcall Hook_PresentInit(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{
    PI_D3D11(This, SyncInterval, Flags);
    PI_ImGui(This, SyncInterval, Flags);
    PI_Misc(This, SyncInterval, Flags);
    Game::Vtb[8] = (DWORD64)Hook_PresentLoop;
    return Game::DefPresent(This, SyncInterval, Flags);
}

void PI_D3D11(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{
    Game::SwapChain = This;
    Game::SwapChain->GetDevice(__uuidof(Game::Device), (void**)&Game::Device);
    Game::Device->GetImmediateContext(&Game::DeviceContext);
    ID3D11Texture2D* pBackBuffer;
    Game::SwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    if (!pBackBuffer)
    {
        return;
    }
    Game::Device->CreateRenderTargetView(pBackBuffer, nullptr, &Game::RenderTargetView);
    pBackBuffer->Release();
}

void PI_ImGui(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{
    ImGui::CreateContext();
    ImGui::StyleColorsDark();
    ImGui_ImplWin32_Init(Game::Hwnd);
    ImGui_ImplDX11_Init(Game::Device, Game::DeviceContext);

    ImGuiStyle& style = ImGui::GetStyle();
    style.Colors[ImGuiCol_WindowBg] = ImVec4(0.05f, 0.05f, 0.10f, 1.0f);
    style.Colors[ImGuiCol_Button] = ImVec4(0.2f, 0.5f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.3f, 0.6f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.4f, 0.7f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_Border] = ImVec4(0.1f, 0.3f, 0.5f, 1.0f);
    style.Colors[ImGuiCol_Separator] = ImVec4(0.2f, 0.6f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_Header] = ImVec4(0.3f, 0.7f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.4f, 0.8f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.5f, 0.9f, 1.0f, 1.0f);
    style.WindowBorderSize = 1.0f;

    QuickLoadLanguageAndFont();

    ImGui_ImplDX11_Init(Game::Device, Game::DeviceContext);
}

void PI_Misc(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{
    GetClientRect(Game::Hwnd, &Game::WndSize);
}

HRESULT __stdcall Hook_PresentLoop(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{
    PL_ImGuiFrame(This, SyncInterval, Flags);
    PL_ImGuiBase(This, SyncInterval, Flags);
    PL_ImGuiRender(This, SyncInterval, Flags);
    return Game::DefPresent(This, SyncInterval, Flags);
}

void PL_ImGuiFrame(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{
    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();
}

void PL_ImGuiBase(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{
    GetGWorld(); 
    GetGPlayerController();
    GetGPawn();

    static float delay_01 = 0.0f;
    if (delay_01 < 2.0f)
    {
        delay_01 += GetDeltaTime();
        return;
    }

    Menu_Loop();
}

void PL_ImGuiRender(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{
    ImGui::Render();
    Game::DeviceContext->OMSetRenderTargets(1, &Game::RenderTargetView, nullptr);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
}

HRESULT __stdcall Hook_Resize(IDXGISwapChain* This, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
    if (Game::Device)
    {
        Game::Device->Release();
        Game::Device = nullptr;
        Game::RenderTargetView->Release();
        Game::Vtb[8] = (DWORD64)Hook_PresentInit;
    }
    return Game::DefResize(This, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT __stdcall Hook_WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
    {
        return true;
    }
    if (Menu::IsOpen)
    {
        switch (msg)
        {
        case WM_INPUT:
        case WM_MOUSEMOVE:
        case WM_LBUTTONDOWN:
        case WM_LBUTTONUP:
        case WM_RBUTTONDOWN:
        case WM_RBUTTONUP:
        case WM_MOUSEWHEEL:
            return 0;
        }
    }
    return CallWindowProcA(Game::DefWndProc, hWnd, msg, wParam, lParam);
}

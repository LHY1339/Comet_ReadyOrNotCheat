#pragma once
#include "Function.h"

void Thread_Execute();
void Exec_GetWindow();
void Exec_InitD3D11();
void Exec_InitVtb();
void Exec_HookD3D11();
void Exec_HookWindow();

HRESULT __stdcall Hook_PresentInit(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
void PI_D3D11(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
void PI_ImGui(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
void PI_Misc(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
HRESULT __stdcall Hook_PresentLoop(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
void PL_ImGuiFrame(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
void PL_ImGuiBase(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
void PL_ImGuiRender(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
HRESULT __stdcall Hook_Resize(IDXGISwapChain* This, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
LRESULT __stdcall Hook_WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
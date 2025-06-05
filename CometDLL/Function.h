#pragma once
#include <d3d11.h>

//D3D11-Present函数，虚表[8]
typedef HRESULT(__stdcall* Present)(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
//D3D11-Resize函数，虚表[13]
typedef HRESULT(__stdcall* Resize)(IDXGISwapChain* This, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
//WindowProc函数
typedef LRESULT(__stdcall* WndProc)(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
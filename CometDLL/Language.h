#pragma once
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui_impl_win32.h"

void LoadLanguage();
void LoadFont(const char* Path);
ImVector<ImWchar> BuildFonts();
void QuickLoadLanguageAndFont();
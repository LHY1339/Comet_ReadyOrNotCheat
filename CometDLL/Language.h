#pragma once
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui_impl_win32.h"

enum class ELanguage
{
	L_Chinese,
	L_English,
	L_Russian,
	L_Japanese,
	L_Korean,
	L_French
};

void LoadLanguage();
void LoadFont(const char* Path);
ImVector<ImWchar> BuildFonts();
void QuickLoadLanguageAndFont();
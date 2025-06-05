#pragma once
#include <string>

#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui_impl_win32.h"

float GetDeltaTime();
bool GetGWorld();
bool GetGPlayerController();
bool GetGPawn();

float FLerp(float a, float b, float alpha, float hold = 0.01);
float FInterp(float a, float b, float speed, float hold = 0.01);
float FAbs(float value);

std::string ToUtf8(const std::wstring& wstr);
bool FindString(const std::string& find_in, const std::string sub_str);
bool FindStringIgnore(const std::string& find_in, const std::string sub_str);

void MainDrawText(ImVec2 pos, const std::wstring& text, ImVec4 color, ImFont* font, float fontsize, ImDrawList* draw_list);
void MainDrawText(ImVec2 pos, const std::string& text, ImVec4 color, ImFont* font, float fontsize, ImDrawList* draw_list);
void MainDrawBox(ImVec2 min, ImVec2 max, ImVec4 color, float thickness, ImDrawList* draw_list);
void MainDrawCircle(ImVec2 pos, float radius, ImVec4 color, int edge, float thickness, ImDrawList* draw_list);
void MainDrawCircle(ImVec2 pos, float radius, ImVec4 color, ImDrawList* draw_list);
void MainDrawLine(ImVec2 p1, ImVec2 p2, ImVec4 color, float thickness, ImDrawList* draw_list);
void MainDrawRect(ImVec2 p1, ImVec2 p2, ImVec4 color, ImDrawList* draw_list);
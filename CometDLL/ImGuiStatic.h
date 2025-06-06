#pragma once
#include <string>

struct ImVec2;
struct ImVec4;
struct ImFont;
struct ImDrawList;

void MainDrawText(ImVec2 pos, const std::wstring& text, ImVec4 color, ImFont* font, float fontsize, ImDrawList* draw_list);
void MainDrawText(ImVec2 pos, const std::string& text, ImVec4 color, ImFont* font, float fontsize, ImDrawList* draw_list);
void MainDrawBox(ImVec2 min, ImVec2 max, ImVec4 color, float thickness, ImDrawList* draw_list);
void MainDrawCircle(ImVec2 pos, float radius, ImVec4 color, int edge, float thickness, ImDrawList* draw_list);
void MainDrawCircle(ImVec2 pos, float radius, ImVec4 color, ImDrawList* draw_list);
void MainDrawLine(ImVec2 p1, ImVec2 p2, ImVec4 color, float thickness, ImDrawList* draw_list);
void MainDrawRect(ImVec2 p1, ImVec2 p2, ImVec4 color, ImDrawList* draw_list);

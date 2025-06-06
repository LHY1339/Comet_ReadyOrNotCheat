#include "ImGuiStatic.h"
#include "StringStatic.h"

#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui_impl_win32.h"

void MainDrawText(ImVec2 pos, const std::wstring& text, ImVec4 color, ImFont* font, float fontsize, ImDrawList* draw_list)
{
    draw_list->AddText(font, fontsize, pos, ImGui::ColorConvertFloat4ToU32(color), ToUtf8(text).c_str());
}

void MainDrawText(ImVec2 pos, const std::string& text, ImVec4 color, ImFont* font, float fontsize, ImDrawList* draw_list)
{
    if (!font)
    {
        return;
    }
    draw_list->AddText(font, fontsize, pos, ImGui::ColorConvertFloat4ToU32(color), text.c_str());
}

void MainDrawBox(ImVec2 min, ImVec2 max, ImVec4 color, float thickness, ImDrawList* draw_list)
{
    draw_list->AddRect(min, max, ImGui::ColorConvertFloat4ToU32(color), 0.0f, 0, thickness);
}

void MainDrawCircle(ImVec2 pos, float radius, ImVec4 color, int edge, float thickness, ImDrawList* draw_list)
{
    draw_list->AddCircle(pos, radius, ImGui::ColorConvertFloat4ToU32(color), edge, thickness);
}

void MainDrawCircle(ImVec2 pos, float radius, ImVec4 color, ImDrawList* draw_list)
{
    draw_list->AddCircleFilled(pos, radius, ImGui::ColorConvertFloat4ToU32(color));
}

void MainDrawLine(ImVec2 p1, ImVec2 p2, ImVec4 color, float thickness, ImDrawList* draw_list)
{
    draw_list->AddLine(p1, p2, ImGui::ColorConvertFloat4ToU32(color), thickness);
}

void MainDrawRect(ImVec2 p1, ImVec2 p2, ImVec4 color, ImDrawList* draw_list)
{
    draw_list->AddRectFilled(ImVec2(p1.x, p1.y), ImVec2(p2.x, p2.y), ImGui::ColorConvertFloat4ToU32(color));
}
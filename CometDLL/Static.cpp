#include "Static.h"
#include "Global.h"
#include "SDK.hpp"
#include <codecvt>
#include <algorithm>

#pragma warning(disable:4996)

float GetDeltaTime()
{
	return SDK::UGameplayStatics::GetWorldDeltaSeconds(Unreal::GWorld);
}

bool GetGWorld()
{
    Unreal::GWorld = SDK::UWorld::GetWorld();
    return SDK::UKismetSystemLibrary::IsValid(Unreal::GWorld);
}

bool GetGPlayerController()
{
    Unreal::GPlayerController = SDK::UGameplayStatics::GetPlayerController(Unreal::GWorld, 0);
    return SDK::UKismetSystemLibrary::IsValid(Unreal::GPlayerController);
}

bool GetGPawn()
{
    Unreal::GPawn = SDK::UGameplayStatics::GetPlayerPawn(Unreal::GWorld, 0);
    return SDK::UKismetSystemLibrary::IsValid(Unreal::GPawn);
}

float FLerp(float a, float b, float alpha, float hold)
{
    const float value = a + (b - a) * alpha;
    return FAbs(b - value) > hold ? value : b;
}

float FInterp(float a, float b, float speed, float hold)
{
    const float value = FLerp(a, b, speed * GetDeltaTime());
    return FAbs(b - value) > hold ? value : b;
}

float FAbs(float value)
{
    return value > 0.0f ? value : -value;
}

std::string ToUtf8(const std::wstring& wstr)
{
    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
    return converter.to_bytes(wstr);
}

bool FindString(const std::string& find_in, const std::string sub_str)
{
    if (find_in.find(sub_str) != std::string::npos)
    {
        return true;
    }
    return false;
}

bool FindStringIgnore(const std::string& find_in, const std::string sub_str)
{
    std::string lowerStr = find_in;
    std::string lowerSubstr = sub_str;

    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    std::transform(lowerSubstr.begin(), lowerSubstr.end(), lowerSubstr.begin(), ::tolower);

    return lowerStr.find(lowerSubstr) != std::string::npos;
}

void MainDrawText(ImVec2 pos, const std::wstring& text, ImVec4 color, ImFont* font, float fontsize, ImDrawList* draw_list)
{
    if (!font)
    {
        return;
    }
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
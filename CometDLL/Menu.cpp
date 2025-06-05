#include "Menu.h"
#include "Global.h"
#include "Static.h"

#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui_impl_win32.h"

#include <iostream>

#define MENU_W 600.0f
#define MENU_H 400.0f

float MenuAlpha = 0.0f;

void Menu_Loop()
{
	Loop_Logic();
	Loop_Render();
}

void Loop_Logic()
{
    if (ImGui::IsKeyPressed(ImGuiKey_Insert, false))
    {
        Menu::IsOpen = !Menu::IsOpen;
    }
    MenuAlpha = FInterp(MenuAlpha, Menu::IsOpen, 20.0f);
}

void Loop_Render()
{
    if (Menu::IsOpen || MenuAlpha != 0.0f)
    {
        Render_Start();
        Render_Base();
        Render_End();
    }
}

void Render_Start()
{
    ImVec2 window_size(MENU_W, MENU_H);
    ImGui::SetNextWindowSize(window_size);
    ImGui::PushStyleVar(ImGuiStyleVar_Alpha, MenuAlpha);
    ImGui::Begin("Menu", nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar);
    Menu::WindowPos = ImGui::GetWindowPos();
}

void Render_Base()
{

    //Background
    MainDrawRect(
        ImVec2(0.0f, 0.0f),
        ImVec2(Game::WndSize.right - Game::WndSize.left, Game::WndSize.bottom - Game::WndSize.top),
        ImVec4(0.0f, 0.0f, 0.0f, 0.4f * MenuAlpha),
        ImGui::GetForegroundDrawList()
    );
    //Cursor
    MainDrawCircle(ImVec2(ImGui::GetMousePos().x, ImGui::GetMousePos().y), 5.0f, ImVec4(1.0f, 1.0f, 1.0f, 0.8f * MenuAlpha), ImGui::GetForegroundDrawList());
}

void Render_End()
{
    ImGui::End();
    ImGui::PopStyleVar();
}

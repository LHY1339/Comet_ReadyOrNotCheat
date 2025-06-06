#include "Menu.h"
#include "Global.h"
#include "Static.h"
#include "Language.h"

#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui_impl_win32.h"

#include <iostream>

#define MENU_W 800.0f
#define MENU_H 400.0f

#define LEFT_W 100.0f

#define LANGUAGE_W 150.0f
#define LANGUAGE_H 300.0f

float MenuAlpha = 0.0f;
int SelectIndex = 0;
float CurrentY = 35.0f;

void Menu_Loop()
{
	Loop_Logic();
    Loop_Menu();
}

void Loop_Logic()
{
    if (ImGui::IsKeyPressed(ImGuiKey_Insert, false))
    {
        Menu::IsOpen = !Menu::IsOpen;
    }
    MenuAlpha = FInterp(MenuAlpha, Menu::IsOpen, 15.0f);
}

void Loop_Menu()
{
    if (Menu::IsOpen || MenuAlpha != 0.0f)
    {
        Menu_Start();
        Menu_Base();
        Menu_End();
        if (Menu::IsLanguageOpen)
        {
            Loop_Language();
        }
    }
    Loop_Lable();
}

void Loop_Language()
{
    Language_Start();
    Language_Base();
    Language_End();
}

void Loop_Lable()
{
    Resource::Fonts::F20->Scale = 0.8f;
    ImGui::PushFont(Resource::Fonts::F20);
    ImVec2 lable_size = ImGui::CalcTextSize(String::Menu::Lable.c_str());
    ImGui::PopFont();
    Resource::Fonts::F20->Scale = 1.0f;

    MainDrawRect(
        ImVec2(5.0f, 5.0f),
        ImVec2(lable_size.x + 13.0f, lable_size.y + 15.0f),
        ImVec4(0.0f, 0.0f, 0.0f, 0.6f),
        ImGui::GetBackgroundDrawList()
    );

    MainDrawBox(
        ImVec2(5.0f, 5.0f),
        ImVec2(lable_size.x + 13.0f, lable_size.y + 15.0f),
        ImVec4(0.1f, 0.3f, 0.5f, 0.6f),
        1.0f,
        ImGui::GetBackgroundDrawList()
    );

    MainDrawText(
        ImVec2(10.0f, 10.0f),
        String::Menu::Lable,
        ImVec4(1.0f, 1.0f, 1.0f, 0.6f),
        Resource::Fonts::F20, 16.0f,
        ImGui::GetBackgroundDrawList()
    );
}

void Menu_Start()
{
    ImVec2 window_size(MENU_W, MENU_H);
    ImGui::SetNextWindowSize(window_size);
    ImGui::PushStyleVar(ImGuiStyleVar_Alpha, MenuAlpha);
    ImGui::Begin("Menu", nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
    Menu::WindowPos = ImGui::GetWindowPos();
}

void Menu_Base()
{
    MB_Title();
    MB_Left();
    MB_Right();
    MB_Misc();
}

void Menu_End()
{
    ImGui::End();
    ImGui::PopStyleVar();
}

void MB_Title()
{
    MainDrawRect(
        ImGui::GetWindowPos(),
        ImVec2(ImGui::GetWindowPos().x + MENU_W, ImGui::GetWindowPos().y + 30.0f),
        ImVec4(1.0f, 1.0f, 1.0f, 0.1f * MenuAlpha),
        ImGui::GetWindowDrawList()
    );

    ImGui::PushFont(Resource::Fonts::F20);
    ImVec2 title_size = ImGui::CalcTextSize(String::Menu::Title.c_str());
    ImGui::PopFont();
    MainDrawText(
        ImVec2(ImGui::GetWindowPos().x + (MENU_W - title_size.x) / 2, ImGui::GetWindowPos().y + 3.0f),
        String::Menu::Title,
        ImVec4(1.0f, 1.0f, 1.0f, 0.8f * MenuAlpha),
        Resource::Fonts::F20,
        20.0f,
        ImGui::GetWindowDrawList()
    );
}

void MB_Left()
{
    MainDrawRect(
        ImVec2(ImGui::GetWindowPos().x, ImGui::GetWindowPos().y + 30.0f), 
        ImVec2(ImGui::GetWindowPos().x + LEFT_W, ImGui::GetWindowPos().y + MENU_H),
        ImVec4(1.0f, 1.0f, 1.0f, 0.05f * MenuAlpha),
        ImGui::GetWindowDrawList()
    );

    ImGui::PushFont(Resource::Fonts::F20);
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(1.0f, 1.0f, 1.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(1.0f, 1.0f, 1.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(1.0f, 1.0f, 1.0f, 0.0f));

    ImGui::SetCursorPos(ImVec2(5.0f, 35.0f));
    if (ImGui::Button(String::Menu::Visual.c_str(), ImVec2(LEFT_W - 10.0f, 30.0f)))
    {
        SelectIndex = 0;
    }

    ImGui::SetCursorPos(ImVec2(5.0f, 70));
    if (ImGui::Button(String::Menu::Aim.c_str(), ImVec2(LEFT_W - 10.0f, 30.0f)))
    {
        SelectIndex = 1;
    }

    ImGui::SetCursorPos(ImVec2(5.0f, 105));
    if (ImGui::Button(String::Menu::Player.c_str(), ImVec2(LEFT_W - 10.0f, 30.0f)))
    {
        SelectIndex = 2;
    }

    ImGui::SetCursorPos(ImVec2(5.0f, 140));
    if (ImGui::Button(String::Menu::Misc.c_str(), ImVec2(LEFT_W - 10.0f, 30.0f)))
    {
        SelectIndex = 3;
    }

    ImGui::SetCursorPos(ImVec2(5.0f, 175));
    if (ImGui::Button(String::Menu::Script.c_str(), ImVec2(LEFT_W - 10.0f, 30.0f)))
    {
        SelectIndex = 4;
    }

    ImGui::SetCursorPos(ImVec2(5.0f, 210));
    if (ImGui::Button(String::Menu::Config.c_str(), ImVec2(LEFT_W - 10.0f, 30.0f)))
    {
        SelectIndex = 5;
    }

    ImGui::PopFont();
    ImGui::PopStyleColor(3);

    Resource::Fonts::F20->Scale = 0.8f;
    ImGui::PushFont(Resource::Fonts::F20);
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 0.8f));
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(1.0f, 1.0f, 1.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(1.0f, 1.0f, 1.0f, 0.05f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(1.0f, 1.0f, 1.0f, 0.1f));

    ImGui::SetCursorPos(ImVec2(5.0f, MENU_H - 35.0f));
    if (ImGui::Button(String::Menu::Language.c_str(), ImVec2(LEFT_W - 10.0f, 30.0f)))
    {
        Menu::IsLanguageOpen = !Menu::IsLanguageOpen;
    }

    Resource::Fonts::F20->Scale = 1.0f;
    ImGui::PopFont();
    ImGui::PopStyleColor(4);

    CurrentY = FInterp(CurrentY, (SelectIndex + 1) * 35.0f, 15.0f, 0.0001f);
    MainDrawRect(
        ImVec2(ImGui::GetWindowPos().x + 5.0f, ImGui::GetWindowPos().y + CurrentY),
        ImVec2(ImGui::GetWindowPos().x + LEFT_W - 5.0f, ImGui::GetWindowPos().y + CurrentY + 30.0f),
        ImVec4(1.0f, 1.0f, 1.0f, 0.05f * MenuAlpha),
        ImGui::GetWindowDrawList()
    );
}

void MB_Right()
{
    switch (SelectIndex)
    {
    case 0:

        break;
    case 1:

        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    }
}

void MB_Misc()
{
    //Background
    MainDrawRect(
        ImVec2(0.0f, 0.0f),
        ImVec2(Game::WndSize.right - Game::WndSize.left, Game::WndSize.bottom - Game::WndSize.top),
        ImVec4(0.0f, 0.0f, 0.0f, 0.8f * MenuAlpha),
        ImGui::GetBackgroundDrawList()
    );

    //Cursor
    MainDrawCircle(
        ImVec2(ImGui::GetMousePos().x, ImGui::GetMousePos().y),
        5.0f,
        ImVec4(1.0f, 1.0f, 1.0f, 0.8f * MenuAlpha),
        ImGui::GetForegroundDrawList()
    );
}

void Language_Start()
{
    ImVec2 window_size(LANGUAGE_W, LANGUAGE_H);
    ImGui::SetNextWindowSize(window_size);
    ImGui::SetNextWindowPos(ImVec2(100.0f, 100.0f), ImGuiCond_Once);
    ImGui::PushStyleVar(ImGuiStyleVar_Alpha, MenuAlpha);
    ImGui::Begin("Language", nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
}

void Language_Base()
{
    LB_Title();
    LB_Base();
}

void Language_End()
{
    ImGui::End();
    ImGui::PopStyleVar();
}

void LB_Title()
{
    MainDrawRect(
        ImGui::GetWindowPos(),
        ImVec2(ImGui::GetWindowPos().x + LANGUAGE_W, ImGui::GetWindowPos().y + 30.0f),
        ImVec4(1.0f, 1.0f, 1.0f, 0.1f * MenuAlpha),
        ImGui::GetWindowDrawList()
    );

    ImGui::PushFont(Resource::Fonts::F20);
    ImVec2 title_size = ImGui::CalcTextSize(String::Menu::Language.c_str());
    ImGui::PopFont();
    MainDrawText(
        ImVec2(ImGui::GetWindowPos().x + (LANGUAGE_W - title_size.x) / 2, ImGui::GetWindowPos().y + 3.0f),
        String::Menu::Language,
        ImVec4(1.0f, 1.0f, 1.0f, 0.8f * MenuAlpha),
        Resource::Fonts::F20,
        20.0f,
        ImGui::GetWindowDrawList()
    );
}

void LB_Base()
{
    ImGui::PushFont(Resource::Fonts::F20);
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(1.0f, 1.0f, 1.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(1.0f, 1.0f, 1.0f, 0.05f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(1.0f, 1.0f, 1.0f, 0.1f));

    ImGui::SetCursorPos(ImVec2(5.0f, 35.0f));
    if (ImGui::Button(String::Menu::Chinese.c_str(), ImVec2(LANGUAGE_W - 10.0f, 30.0f)))
    {
        Menu::TargetLanguage = ELanguage::L_Chinese;
        LoadLanguage();
    }

    ImGui::SetCursorPos(ImVec2(5.0f, 70.0f));
    if (ImGui::Button(String::Menu::English.c_str(), ImVec2(LANGUAGE_W - 10.0f, 30.0f)))
    {
        Menu::TargetLanguage = ELanguage::L_English;
        LoadLanguage();
    }

    ImGui::SetCursorPos(ImVec2(5.0f, 105.0f));
    if (ImGui::Button(String::Menu::Russian.c_str(), ImVec2(LANGUAGE_W - 10.0f, 30.0f)))
    {
        Menu::TargetLanguage = ELanguage::L_Russian;
        LoadLanguage();
    }

    ImGui::SetCursorPos(ImVec2(5.0f, 140.0f));
    if (ImGui::Button(String::Menu::Japanese.c_str(), ImVec2(LANGUAGE_W - 10.0f, 30.0f)))
    {
        Menu::TargetLanguage = ELanguage::L_Japanese;
        LoadLanguage();
    }

    //ImGui::SetCursorPos(ImVec2(5.0f, 175.0f));
    //if (ImGui::Button(String::Menu::Korean.c_str(), ImVec2(LANGUAGE_W - 10.0f, 30.0f)))
    //{
    //    Menu::TargetLanguage = ELanguage::L_Korean;
    //    LoadLanguage();
    //}

    ImGui::SetCursorPos(ImVec2(5.0f, 175.0f));
    if (ImGui::Button(String::Menu::French.c_str(), ImVec2(LANGUAGE_W - 10.0f, 30.0f)))
    {
        Menu::TargetLanguage = ELanguage::L_French;
        LoadLanguage();
    }

    ImGui::PopFont();
    ImGui::PopStyleColor(3);
}

void Right_Visual()
{
}

void Right_Aim()
{
}

void Right_Player()
{
}

void Right_Misc()
{
}

void Right_Script()
{
}

void Right_Config()
{
}

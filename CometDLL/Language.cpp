#include "Language.h"
#include "Global.h"
#include "Static.h"

void LoadLanguage()
{
	String::Menu::Chinese = ToUtf8(L"简体中文");
	String::Menu::English = ToUtf8(L"English");
	String::Menu::Russian = ToUtf8(L"Русский");
	String::Menu::Japanese = ToUtf8(L"日本語");
	String::Menu::Korean = ToUtf8(L"한국어");
	String::Menu::French = ToUtf8(L"Français");
	switch (Menu::TargetLanguage)
	{
	case ELanguage::L_Chinese:
		String::Menu::Title = ToUtf8(L"彗星");
		String::Menu::Lable = ToUtf8(L"彗星 - 2025.6.5 - lhy1339@gmail.com\n按下 Insert 键呼出菜单");

		String::Menu::Visual = ToUtf8(L"视觉");
		String::Menu::Aim = ToUtf8(L"瞄准");
		String::Menu::Player = ToUtf8(L"玩家");
		String::Menu::Misc = ToUtf8(L"杂项");
		String::Menu::Script = ToUtf8(L"脚本");
		String::Menu::Config = ToUtf8(L"配置");
		break;
	case ELanguage::L_English:
		String::Menu::Title = ToUtf8(L"Comet");
		String::Menu::Lable = ToUtf8(L"Comet - 2025.6.5 - lhy1339@gmail.com\nPress Insert To Open Menu");

		String::Menu::Visual = ToUtf8(L"Visual");
		String::Menu::Aim = ToUtf8(L"Aimbot");
		String::Menu::Player = ToUtf8(L"Player");
		String::Menu::Misc = ToUtf8(L"Misc");
		String::Menu::Script = ToUtf8(L"Script");
		String::Menu::Config = ToUtf8(L"Config");
		break;
	case ELanguage::L_Russian:
		String::Menu::Title = ToUtf8(L"Комета");
		String::Menu::Lable = ToUtf8(L"Комета - 2025.6.5 - lhy1339@gmail.com\nНажмите клавишу Insert, чтобы открыть меню");

		String::Menu::Visual = ToUtf8(L"Визуал");
		String::Menu::Aim = ToUtf8(L"Прицел");
		String::Menu::Player = ToUtf8(L"Игрок");
		String::Menu::Misc = ToUtf8(L"Разное");
		String::Menu::Script = ToUtf8(L"Скрипт");
		String::Menu::Config = ToUtf8(L"Конфиг");
		break;
	case ELanguage::L_Japanese:
		String::Menu::Title = ToUtf8(L"彗星");
		String::Menu::Lable = ToUtf8(L"彗星 - 2025.6.5 - lhy1339@gmail.com\nInsertキーを押してメニューを開く");

		String::Menu::Visual = ToUtf8(L"視覚");
		String::Menu::Aim = ToUtf8(L"照準");
		String::Menu::Player = ToUtf8(L"プレイヤー");
		String::Menu::Misc = ToUtf8(L"雑項");
		String::Menu::Script = ToUtf8(L"スクリプト");
		String::Menu::Config = ToUtf8(L"設定");
		break;
	case ELanguage::L_Korean:
		String::Menu::Title = ToUtf8(L"혜성");
		String::Menu::Lable = ToUtf8(L"혜성 - 2025.6.5 - lhy1339@gmail.com\nInsert 키를 눌러 메뉴를 호출하세요");

		String::Menu::Visual = ToUtf8(L"시각");
		String::Menu::Aim = ToUtf8(L"조준");
		String::Menu::Player = ToUtf8(L"플레이어");
		String::Menu::Misc = ToUtf8(L"기타");
		String::Menu::Script = ToUtf8(L"스크립트");
		String::Menu::Config = ToUtf8(L"설정");
		break;
	case ELanguage::L_French:
		String::Menu::Title = ToUtf8(L"Comète");
		String::Menu::Lable = ToUtf8(L"Comète - 2025.6.5 - lhy1339@gmail.com\nAppuyez sur la touche Insert pour afficher le menu");

		String::Menu::Visual = ToUtf8(L"Visuel");
		String::Menu::Aim = ToUtf8(L"Viser");
		String::Menu::Player = ToUtf8(L"Joueur");
		String::Menu::Misc = ToUtf8(L"Divers");
		String::Menu::Script = ToUtf8(L"Script");
		String::Menu::Config = ToUtf8(L"Config");
		break;
	}
}

void LoadFont(const char* Path)
{
	ImGuiIO& io = ImGui::GetIO();
	io.Fonts->Clear();
	ImFontConfig config;
	config.MergeMode = false;
	config.PixelSnapH = true;

	ImVector<ImWchar> range = BuildFonts();

	Resource::Fonts::F10 = io.Fonts->AddFontFromFileTTF(Path, 10.0f, &config, range.Data);
	Resource::Fonts::F20 = io.Fonts->AddFontFromFileTTF(Path, 20.0f, &config, range.Data);

	ImGui_ImplDX11_InvalidateDeviceObjects();
	io.Fonts->Build();
	ImGui_ImplDX11_CreateDeviceObjects();
}

ImVector<ImWchar> BuildFonts()
{
	ImFontGlyphRangesBuilder builder;

	builder.AddRanges(ImGui::GetIO().Fonts->GetGlyphRangesDefault());
	builder.AddRanges(ImGui::GetIO().Fonts->GetGlyphRangesCyrillic());
	builder.AddRanges(ImGui::GetIO().Fonts->GetGlyphRangesJapanese());
	builder.AddRanges(ImGui::GetIO().Fonts->GetGlyphRangesChineseFull());

	ImVector<ImWchar> out_ranges;
	builder.BuildRanges(&out_ranges);
	return out_ranges;
}

void QuickLoadLanguageAndFont()
{
	LoadFont("C:\\Windows\\Fonts\\msyh.ttc");
	LoadLanguage();
}

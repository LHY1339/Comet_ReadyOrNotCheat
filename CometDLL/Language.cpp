#include "Language.h"
#include "Global.h"
#include "Static.h"

ELanguage CurrentLanguage = ELanguage::L_None;

void LoadLanguage(ELanguage NewLanguage)
{
	String::Menu::Chinese = ToUtf8(L"Chinese");
	String::Menu::English = ToUtf8(L"English");
	String::Menu::Russian = ToUtf8(L"Russian");
	String::Menu::Japanese = ToUtf8(L"Japanese");
	switch (NewLanguage)
	{
	case ELanguage::L_Chinese:
		String::Menu::Title = ToUtf8(L"åçÐÇ");
		String::Menu::Lable = ToUtf8(L"åçÐÇ - 2025.6.5 - lhy1339@gmail.com\n°´ÏÂ Insert ¼üºô³ö²Ëµ¥");

		String::Menu::Visual = ToUtf8(L"ÊÓ¾õ");
		String::Menu::Aim = ToUtf8(L"Ãé×¼");
		String::Menu::Player = ToUtf8(L"Íæ¼Ò");
		String::Menu::Misc = ToUtf8(L"ÔÓÏî");
		String::Menu::Script = ToUtf8(L"½Å±¾");
		String::Menu::Config = ToUtf8(L"ÅäÖÃ");
		break;
	case ELanguage::L_English:
		String::Menu::Title = ToUtf8(L"COMET");
		String::Menu::Lable = ToUtf8(L"Comet - 2025.6.5 - lhy1339@gmail.com\nPress Insert To Open Menu");

		String::Menu::Visual = ToUtf8(L"Visual");
		String::Menu::Aim = ToUtf8(L"Aimbot");
		String::Menu::Player = ToUtf8(L"Player");
		String::Menu::Misc = ToUtf8(L"Misc");
		String::Menu::Script = ToUtf8(L"Script");
		String::Menu::Config = ToUtf8(L"Config");
		break;
	case ELanguage::L_Russian:
		String::Menu::Title = ToUtf8(L"§¬§à§Þ§Ö§ä§Ñ");
		String::Menu::Lable = ToUtf8(L"§¬§à§Þ§Ö§ä§Ñ - 2025.6.5 - lhy1339@gmail.com\n§¯§Ñ§Ø§Þ§Ú§ä§Ö §Ü§Ý§Ñ§Ó§Ú§ê§å Insert, §é§ä§à§Ò§í §à§ä§Ü§â§í§ä§î §Þ§Ö§ß§ð");

		String::Menu::Visual = ToUtf8(L"§£§Ú§Ù§å§Ñ§Ý");
		String::Menu::Aim = ToUtf8(L"§±§â§Ú§è§Ö§Ý");
		String::Menu::Player = ToUtf8(L"§ª§Ô§â§à§Ü");
		String::Menu::Misc = ToUtf8(L"§²§Ñ§Ù§ß§à§Ö");
		String::Menu::Script = ToUtf8(L"§³§Ü§â§Ú§á§ä");
		String::Menu::Config = ToUtf8(L"§¬§à§ß§æ§Ú§Ô");
		break;
	case ELanguage::L_Japanese:
		String::Menu::Title = ToUtf8(L"åçÐÇ");
		String::Menu::Lable = ToUtf8(L"åçÐÇ - 2025.6.5 - lhy1339@gmail.com\nInsert¥­©`¤òÑº¤·¤Æ¥á¥Ë¥å©`¤òé_¤¯");

		String::Menu::Visual = ToUtf8(L"Ò•Ò™");
		String::Menu::Aim = ToUtf8(L"ÕÕœÊ");
		String::Menu::Player = ToUtf8(L"¥×¥ì¥¤¥ä©`");
		String::Menu::Misc = ToUtf8(L"ëjí—");
		String::Menu::Script = ToUtf8(L"¥¹¥¯¥ê¥×¥È");
		String::Menu::Config = ToUtf8(L"ÔO¶¨");
		break;
	}
}

void LoadFont(const char* Path, const ImWchar* Glyph)
{
	ImGuiIO& io = ImGui::GetIO();
	io.Fonts->Clear();
	ImFontConfig config;
	config.MergeMode = false;
	config.PixelSnapH = true;

	Resource::Fonts::F10 = io.Fonts->AddFontFromFileTTF(Path, 10.0f, &config, Glyph);
	Resource::Fonts::F20 = io.Fonts->AddFontFromFileTTF(Path, 20.0f, &config, Glyph);
	//Resource::Fonts::F30 = io.Fonts->AddFontFromFileTTF(Path, 30.0f, nullptr, Glyph);
	ImGui_ImplDX11_InvalidateDeviceObjects();
	io.Fonts->Build();
	ImGui_ImplDX11_CreateDeviceObjects();
}

void QuickLoadLanguageAndFont()
{
	if (CurrentLanguage == Menu::TargetLanguage)
	{
		return;
	}
	CurrentLanguage = Menu::TargetLanguage;
	LoadLanguage(CurrentLanguage);
	switch (CurrentLanguage)
	{
	case ELanguage::L_Chinese:
		LoadFont("C:/Windows/Fonts/msyh.ttc", ImGui::GetIO().Fonts->GetGlyphRangesChineseFull());
		break;
	case ELanguage::L_English:
		LoadFont("C:/Windows/Fonts/msyh.ttc", ImGui::GetIO().Fonts->GetGlyphRangesDefault());
		break;
	case ELanguage::L_Russian:
		LoadFont("C:/Windows/Fonts/msyh.ttc", ImGui::GetIO().Fonts->GetGlyphRangesCyrillic());
		break;
	case ELanguage::L_Japanese:
		LoadFont("C:/Windows/Fonts/msyh.ttc", ImGui::GetIO().Fonts->GetGlyphRangesJapanese());
		break;
	}
}

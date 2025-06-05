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
		String::Menu::Title = ToUtf8(L"����");
		String::Menu::Lable = ToUtf8(L"���� - 2025.6.5 - lhy1339@gmail.com\n���� Insert �������˵�");

		String::Menu::Visual = ToUtf8(L"�Ӿ�");
		String::Menu::Aim = ToUtf8(L"��׼");
		String::Menu::Player = ToUtf8(L"���");
		String::Menu::Misc = ToUtf8(L"����");
		String::Menu::Script = ToUtf8(L"�ű�");
		String::Menu::Config = ToUtf8(L"����");
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
		String::Menu::Title = ToUtf8(L"����ާ֧��");
		String::Menu::Lable = ToUtf8(L"����ާ֧�� - 2025.6.5 - lhy1339@gmail.com\n���ѧاާڧ�� �ܧݧѧӧڧ�� Insert, ����ҧ� ���ܧ���� �ާ֧ߧ�");

		String::Menu::Visual = ToUtf8(L"���ڧ٧�ѧ�");
		String::Menu::Aim = ToUtf8(L"����ڧ�֧�");
		String::Menu::Player = ToUtf8(L"���ԧ���");
		String::Menu::Misc = ToUtf8(L"���ѧ٧ߧ��");
		String::Menu::Script = ToUtf8(L"���ܧ�ڧ��");
		String::Menu::Config = ToUtf8(L"����ߧ�ڧ�");
		break;
	case ELanguage::L_Japanese:
		String::Menu::Title = ToUtf8(L"����");
		String::Menu::Lable = ToUtf8(L"���� - 2025.6.5 - lhy1339@gmail.com\nInsert���`��Ѻ���ƥ�˥�`���_��");

		String::Menu::Visual = ToUtf8(L"ҕҙ");
		String::Menu::Aim = ToUtf8(L"�՜�");
		String::Menu::Player = ToUtf8(L"�ץ쥤��`");
		String::Menu::Misc = ToUtf8(L"�j�");
		String::Menu::Script = ToUtf8(L"������ץ�");
		String::Menu::Config = ToUtf8(L"�O��");
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

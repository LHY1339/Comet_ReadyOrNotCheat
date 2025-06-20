﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_SMM_Page_Settings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPW_SMM_Page_Settings.BPW_SMM_Page_Settings_C
// 0x0048 (0x0308 - 0x02C0)
class UBPW_SMM_Page_Settings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             ScrollBox_PageList;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_SettingPageContainers;              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBPW_SMM_TabSetting_C*>          SettingPageTabs;                                   // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UBPW_SMM_TabSetting_C*                  SelectedTabWidget;                                 // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   SelectedTabKey;                                    // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SMM_UI_C>         SMM_UI;                                            // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPW_SMM_Page_Settings(int32 EntryPoint);
	void InitilizeSettingPageTab(const struct FBPS_SMM_SettingPageInfo& SettingPageInfo);
	void LogUpdated();
	void ModMenuPostInit(const TScriptInterface<class IBPI_SMM_UI_C> SMM_UI_0);
	void OnRetrievedSG(const class FString& ModName, const class FString& SlotName, class USMM_SaveGame_Base_C* SMM_SaveGame_Config);
	void OnSavedSG(const class FString& ModName, const class FString& SlotName, class USMM_SaveGame_Base_C* SMM_SaveGame);
	void PageClosed();
	void PageOpened();
	void PostInitTabs();
	void SendTabButton(class UButton* Button);
	void SetNavigationFocus(class UWidget** Widget);
	void TabSelected(class UBPW_SMM_TabSetting_C* SettingTabWidget, bool Keyboard);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPW_SMM_Page_Settings_C">();
	}
	static class UBPW_SMM_Page_Settings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPW_SMM_Page_Settings_C>();
	}
};
static_assert(alignof(UBPW_SMM_Page_Settings_C) == 0x000008, "Wrong alignment on UBPW_SMM_Page_Settings_C");
static_assert(sizeof(UBPW_SMM_Page_Settings_C) == 0x000308, "Wrong size on UBPW_SMM_Page_Settings_C");
static_assert(offsetof(UBPW_SMM_Page_Settings_C, UberGraphFrame) == 0x0002C0, "Member 'UBPW_SMM_Page_Settings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPW_SMM_Page_Settings_C, ScrollBox_PageList) == 0x0002C8, "Member 'UBPW_SMM_Page_Settings_C::ScrollBox_PageList' has a wrong offset!");
static_assert(offsetof(UBPW_SMM_Page_Settings_C, WidgetSwitcher_SettingPageContainers) == 0x0002D0, "Member 'UBPW_SMM_Page_Settings_C::WidgetSwitcher_SettingPageContainers' has a wrong offset!");
static_assert(offsetof(UBPW_SMM_Page_Settings_C, SettingPageTabs) == 0x0002D8, "Member 'UBPW_SMM_Page_Settings_C::SettingPageTabs' has a wrong offset!");
static_assert(offsetof(UBPW_SMM_Page_Settings_C, SelectedTabWidget) == 0x0002E8, "Member 'UBPW_SMM_Page_Settings_C::SelectedTabWidget' has a wrong offset!");
static_assert(offsetof(UBPW_SMM_Page_Settings_C, SelectedTabKey) == 0x0002F0, "Member 'UBPW_SMM_Page_Settings_C::SelectedTabKey' has a wrong offset!");
static_assert(offsetof(UBPW_SMM_Page_Settings_C, SMM_UI) == 0x0002F8, "Member 'UBPW_SMM_Page_Settings_C::SMM_UI' has a wrong offset!");

}


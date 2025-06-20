﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PauseMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "ReadyOrNot_classes.hpp"
#include "AdvancedSessions_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PauseMenu.W_PauseMenu_C
// 0x00C0 (0x04D0 - 0x0410)
class UW_PauseMenu_C final : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                AdminPasswordBox;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BackgroundCanvas;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Admin;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Bug;                                           // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_ConfirmAdminPassword;                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Invite;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Lobby;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_LobbyManager;                                  // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Options;                                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Quit;                                          // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Replay;                                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Resume;                                        // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Vote;                                          // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonDescription;                                 // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          EditableText_0;                                    // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               EscapeMenu;                                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ObjectivesBox;                                     // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PublicLobbyWarning;                                // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_Version;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Objectives_C*               W_Briefing_Objectives;                             // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          WasShowingMouse;                                   // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4B9[0x7];                                      // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                SettingsMenu;                                      // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallVoteMenu;                                      // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__btn_Admin_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Bug_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_ConfirmAdminPassword_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Invite_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Options_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Resume_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Vote_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PauseMenu_btn_Lobby_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PauseMenu_btn_LobbyManager_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature();
	void BndEvt__W_PauseMenu_btn_Replay_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_W_PauseMenu(int32 EntryPoint);
	ESlateVisibility Get_btn_Invite_Visibility_0();
	ESlateVisibility Get_btn_Lobby_Visibility_0();
	ESlateVisibility Get_HorizontalBox_25_Visibility_0();
	class FText Get_Version_Text_0();
	bool GetCallVoteEnabled();
	ESlateVisibility GetMissionBoxVisibility();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void PreConstruct(bool IsDesignTime);
	void Resume();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PauseMenu_C">();
	}
	static class UW_PauseMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PauseMenu_C>();
	}
};
static_assert(alignof(UW_PauseMenu_C) == 0x000008, "Wrong alignment on UW_PauseMenu_C");
static_assert(sizeof(UW_PauseMenu_C) == 0x0004D0, "Wrong size on UW_PauseMenu_C");
static_assert(offsetof(UW_PauseMenu_C, UberGraphFrame) == 0x000410, "Member 'UW_PauseMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, AdminPasswordBox) == 0x000418, "Member 'UW_PauseMenu_C::AdminPasswordBox' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, BackgroundCanvas) == 0x000420, "Member 'UW_PauseMenu_C::BackgroundCanvas' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Admin) == 0x000428, "Member 'UW_PauseMenu_C::btn_Admin' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Bug) == 0x000430, "Member 'UW_PauseMenu_C::btn_Bug' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_ConfirmAdminPassword) == 0x000438, "Member 'UW_PauseMenu_C::btn_ConfirmAdminPassword' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Invite) == 0x000440, "Member 'UW_PauseMenu_C::btn_Invite' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Lobby) == 0x000448, "Member 'UW_PauseMenu_C::btn_Lobby' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_LobbyManager) == 0x000450, "Member 'UW_PauseMenu_C::btn_LobbyManager' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Options) == 0x000458, "Member 'UW_PauseMenu_C::btn_Options' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Quit) == 0x000460, "Member 'UW_PauseMenu_C::btn_Quit' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Replay) == 0x000468, "Member 'UW_PauseMenu_C::btn_Replay' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Resume) == 0x000470, "Member 'UW_PauseMenu_C::btn_Resume' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Vote) == 0x000478, "Member 'UW_PauseMenu_C::btn_Vote' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, ButtonDescription) == 0x000480, "Member 'UW_PauseMenu_C::ButtonDescription' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, EditableText_0) == 0x000488, "Member 'UW_PauseMenu_C::EditableText_0' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, EscapeMenu) == 0x000490, "Member 'UW_PauseMenu_C::EscapeMenu' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, ObjectivesBox) == 0x000498, "Member 'UW_PauseMenu_C::ObjectivesBox' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, PublicLobbyWarning) == 0x0004A0, "Member 'UW_PauseMenu_C::PublicLobbyWarning' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, txt_Version) == 0x0004A8, "Member 'UW_PauseMenu_C::txt_Version' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, W_Briefing_Objectives) == 0x0004B0, "Member 'UW_PauseMenu_C::W_Briefing_Objectives' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, WasShowingMouse) == 0x0004B8, "Member 'UW_PauseMenu_C::WasShowingMouse' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, SettingsMenu) == 0x0004C0, "Member 'UW_PauseMenu_C::SettingsMenu' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, CallVoteMenu) == 0x0004C8, "Member 'UW_PauseMenu_C::CallVoteMenu' has a wrong offset!");

}


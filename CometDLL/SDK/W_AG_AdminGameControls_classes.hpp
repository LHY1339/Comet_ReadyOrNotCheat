﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_AG_AdminGameControls

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_AG_AdminGameControls.W_AG_AdminGameControls_C
// 0x0058 (0x0318 - 0x02C0)
class UW_AG_AdminGameControls_C final : public UAdminGameControls
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_PageWrapper_C*                       PageWrapper;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             PlayerList;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_AG_PlayerList_C*                     W_AG_PlayerList;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            OpenedFrom;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bHasPlayerStateInList;                             // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasWidgetForRemovedPlayerStateInList;             // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EA[0x6];                                      // 0x02EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           KickingPlayerState;                                // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   KickReason;                                        // 0x02F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         IdxMinusOne;                                       // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__W_AG_AdminGameControls_PageWrapper_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	void Construct();
	void ExecuteUbergraph_W_AG_AdminGameControls(int32 EntryPoint);
	void HasPlayerInList(class APlayerState* PlayerState, bool* Exists);
	void UpdatePlayerList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_AG_AdminGameControls_C">();
	}
	static class UW_AG_AdminGameControls_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_AG_AdminGameControls_C>();
	}
};
static_assert(alignof(UW_AG_AdminGameControls_C) == 0x000008, "Wrong alignment on UW_AG_AdminGameControls_C");
static_assert(sizeof(UW_AG_AdminGameControls_C) == 0x000318, "Wrong size on UW_AG_AdminGameControls_C");
static_assert(offsetof(UW_AG_AdminGameControls_C, UberGraphFrame) == 0x0002C0, "Member 'UW_AG_AdminGameControls_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_AG_AdminGameControls_C, PageWrapper) == 0x0002C8, "Member 'UW_AG_AdminGameControls_C::PageWrapper' has a wrong offset!");
static_assert(offsetof(UW_AG_AdminGameControls_C, PlayerList) == 0x0002D0, "Member 'UW_AG_AdminGameControls_C::PlayerList' has a wrong offset!");
static_assert(offsetof(UW_AG_AdminGameControls_C, W_AG_PlayerList) == 0x0002D8, "Member 'UW_AG_AdminGameControls_C::W_AG_PlayerList' has a wrong offset!");
static_assert(offsetof(UW_AG_AdminGameControls_C, OpenedFrom) == 0x0002E0, "Member 'UW_AG_AdminGameControls_C::OpenedFrom' has a wrong offset!");
static_assert(offsetof(UW_AG_AdminGameControls_C, bHasPlayerStateInList) == 0x0002E8, "Member 'UW_AG_AdminGameControls_C::bHasPlayerStateInList' has a wrong offset!");
static_assert(offsetof(UW_AG_AdminGameControls_C, bHasWidgetForRemovedPlayerStateInList) == 0x0002E9, "Member 'UW_AG_AdminGameControls_C::bHasWidgetForRemovedPlayerStateInList' has a wrong offset!");
static_assert(offsetof(UW_AG_AdminGameControls_C, KickingPlayerState) == 0x0002F0, "Member 'UW_AG_AdminGameControls_C::KickingPlayerState' has a wrong offset!");
static_assert(offsetof(UW_AG_AdminGameControls_C, KickReason) == 0x0002F8, "Member 'UW_AG_AdminGameControls_C::KickReason' has a wrong offset!");
static_assert(offsetof(UW_AG_AdminGameControls_C, IdxMinusOne) == 0x000310, "Member 'UW_AG_AdminGameControls_C::IdxMinusOne' has a wrong offset!");

}


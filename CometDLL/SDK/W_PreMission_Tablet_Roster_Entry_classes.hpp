﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_Roster_Entry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Roster_Entry.W_PreMission_Tablet_Roster_Entry_C
// 0x0028 (0x02E8 - 0x02C0)
class UW_PreMission_Tablet_Roster_Entry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Text_C*                              txt_PlayerName;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OfficerMarker_C*                     W_OfficerMarker;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                 PlayerState;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_PreMission_Tablet_Roster_Entry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PreMission_Tablet_Roster_Entry_C">();
	}
	static class UW_PreMission_Tablet_Roster_Entry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PreMission_Tablet_Roster_Entry_C>();
	}
};
static_assert(alignof(UW_PreMission_Tablet_Roster_Entry_C) == 0x000008, "Wrong alignment on UW_PreMission_Tablet_Roster_Entry_C");
static_assert(sizeof(UW_PreMission_Tablet_Roster_Entry_C) == 0x0002E8, "Wrong size on UW_PreMission_Tablet_Roster_Entry_C");
static_assert(offsetof(UW_PreMission_Tablet_Roster_Entry_C, UberGraphFrame) == 0x0002C0, "Member 'UW_PreMission_Tablet_Roster_Entry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Roster_Entry_C, txt_PlayerName) == 0x0002C8, "Member 'UW_PreMission_Tablet_Roster_Entry_C::txt_PlayerName' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Roster_Entry_C, W_Button) == 0x0002D0, "Member 'UW_PreMission_Tablet_Roster_Entry_C::W_Button' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Roster_Entry_C, W_OfficerMarker) == 0x0002D8, "Member 'UW_PreMission_Tablet_Roster_Entry_C::W_OfficerMarker' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Roster_Entry_C, PlayerState) == 0x0002E0, "Member 'UW_PreMission_Tablet_Roster_Entry_C::PlayerState' has a wrong offset!");

}


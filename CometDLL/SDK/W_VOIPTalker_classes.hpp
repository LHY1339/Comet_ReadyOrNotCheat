﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VOIPTalker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_VOIPTalker.W_VOIPTalker_C
// 0x0018 (0x02D8 - 0x02C0)
class UW_VOIPTalker_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           TalkersList;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*            PlayerController;                                  // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void CustomEvent_0();
	void ExecuteUbergraph_W_VOIPTalker(int32 EntryPoint);
	void OnPreClientTravel_Event_0();
	void Refresh_Player_States_If_Not_Exists();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_VOIPTalker_C">();
	}
	static class UW_VOIPTalker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_VOIPTalker_C>();
	}
};
static_assert(alignof(UW_VOIPTalker_C) == 0x000008, "Wrong alignment on UW_VOIPTalker_C");
static_assert(sizeof(UW_VOIPTalker_C) == 0x0002D8, "Wrong size on UW_VOIPTalker_C");
static_assert(offsetof(UW_VOIPTalker_C, UberGraphFrame) == 0x0002C0, "Member 'UW_VOIPTalker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_VOIPTalker_C, TalkersList) == 0x0002C8, "Member 'UW_VOIPTalker_C::TalkersList' has a wrong offset!");
static_assert(offsetof(UW_VOIPTalker_C, PlayerController) == 0x0002D0, "Member 'UW_VOIPTalker_C::PlayerController' has a wrong offset!");

}


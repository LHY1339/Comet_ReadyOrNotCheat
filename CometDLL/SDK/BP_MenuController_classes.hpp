﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MenuController.BP_MenuController_C
// 0x0018 (0x0D48 - 0x0D30)
class ABP_MenuController_C final : public AReadyOrNotPlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                UI_PartyPanel;                                     // 0x0D38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            ReplaySystemWidget;                                // 0x0D40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MenuController(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MenuController_C">();
	}
	static class ABP_MenuController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MenuController_C>();
	}
};
static_assert(alignof(ABP_MenuController_C) == 0x000008, "Wrong alignment on ABP_MenuController_C");
static_assert(sizeof(ABP_MenuController_C) == 0x000D48, "Wrong size on ABP_MenuController_C");
static_assert(offsetof(ABP_MenuController_C, UberGraphFrame) == 0x000D30, "Member 'ABP_MenuController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MenuController_C, UI_PartyPanel) == 0x000D38, "Member 'ABP_MenuController_C::UI_PartyPanel' has a wrong offset!");
static_assert(offsetof(ABP_MenuController_C, ReplaySystemWidget) == 0x000D40, "Member 'ABP_MenuController_C::ReplaySystemWidget' has a wrong offset!");

}


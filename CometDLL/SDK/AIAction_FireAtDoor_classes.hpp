﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_FireAtDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIAction_FireAtDoor.AIAction_FireAtDoor_C
// 0x0008 (0x0060 - 0x0058)
class UAIAction_FireAtDoor_C final : public UAIAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BeginAction_Blueprint();
	void ExecuteUbergraph_AIAction_FireAtDoor(int32 EntryPoint);

	bool ShouldPerformAction() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIAction_FireAtDoor_C">();
	}
	static class UAIAction_FireAtDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIAction_FireAtDoor_C>();
	}
};
static_assert(alignof(UAIAction_FireAtDoor_C) == 0x000008, "Wrong alignment on UAIAction_FireAtDoor_C");
static_assert(sizeof(UAIAction_FireAtDoor_C) == 0x000060, "Wrong size on UAIAction_FireAtDoor_C");
static_assert(offsetof(UAIAction_FireAtDoor_C, UberGraphFrame) == 0x000058, "Member 'UAIAction_FireAtDoor_C::UberGraphFrame' has a wrong offset!");

}


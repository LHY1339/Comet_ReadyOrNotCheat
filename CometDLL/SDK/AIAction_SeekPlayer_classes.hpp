﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_SeekPlayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIAction_SeekPlayer.AIAction_SeekPlayer_C
// 0x0010 (0x0068 - 0x0058)
class UAIAction_SeekPlayer_C final : public UAIAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USeekPlayerCombatMove_C*                SeekPlayerCombatMove;                              // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BeginAction_Blueprint();
	void ExecuteUbergraph_AIAction_SeekPlayer(int32 EntryPoint);
	void OnCreate_Blueprint(class ACyberneticController* Controller);

	bool ShouldPerformAction() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIAction_SeekPlayer_C">();
	}
	static class UAIAction_SeekPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIAction_SeekPlayer_C>();
	}
};
static_assert(alignof(UAIAction_SeekPlayer_C) == 0x000008, "Wrong alignment on UAIAction_SeekPlayer_C");
static_assert(sizeof(UAIAction_SeekPlayer_C) == 0x000068, "Wrong size on UAIAction_SeekPlayer_C");
static_assert(offsetof(UAIAction_SeekPlayer_C, UberGraphFrame) == 0x000058, "Member 'UAIAction_SeekPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAIAction_SeekPlayer_C, SeekPlayerCombatMove) == 0x000060, "Member 'UAIAction_SeekPlayer_C::SeekPlayerCombatMove' has a wrong offset!");

}


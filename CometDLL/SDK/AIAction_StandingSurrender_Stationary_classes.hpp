﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_StandingSurrender_Stationary

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIAction_StandingSurrender_Stationary.AIAction_StandingSurrender_Stationary_C
// 0x0030 (0x0088 - 0x0058)
class UAIAction_StandingSurrender_Stationary_C final : public UAIAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           TimerHandle;                                       // 0x0060(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseOtherVoiceLine;                                // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SwatLocation;                                      // 0x0070(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BeginAction_Blueprint();
	void EndAction_Blueprint();
	void ExecuteUbergraph_AIAction_StandingSurrender_Stationary(int32 EntryPoint);
	void GetComplianceVoiceOver(bool bUseAlternate, class FString* NewParam);
	void PlayComplianceVO();
	void Tick_Blueprint(float DeltaTime);

	class FName GetMoveStyleOverride() const;
	bool ShouldPerformAction() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIAction_StandingSurrender_Stationary_C">();
	}
	static class UAIAction_StandingSurrender_Stationary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIAction_StandingSurrender_Stationary_C>();
	}
};
static_assert(alignof(UAIAction_StandingSurrender_Stationary_C) == 0x000008, "Wrong alignment on UAIAction_StandingSurrender_Stationary_C");
static_assert(sizeof(UAIAction_StandingSurrender_Stationary_C) == 0x000088, "Wrong size on UAIAction_StandingSurrender_Stationary_C");
static_assert(offsetof(UAIAction_StandingSurrender_Stationary_C, UberGraphFrame) == 0x000058, "Member 'UAIAction_StandingSurrender_Stationary_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAIAction_StandingSurrender_Stationary_C, TimerHandle) == 0x000060, "Member 'UAIAction_StandingSurrender_Stationary_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UAIAction_StandingSurrender_Stationary_C, bUseOtherVoiceLine) == 0x000068, "Member 'UAIAction_StandingSurrender_Stationary_C::bUseOtherVoiceLine' has a wrong offset!");
static_assert(offsetof(UAIAction_StandingSurrender_Stationary_C, SwatLocation) == 0x000070, "Member 'UAIAction_StandingSurrender_Stationary_C::SwatLocation' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_TargetStunRemainingTime

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AC_TargetStunRemainingTime.AC_TargetStunRemainingTime_C
// 0x0008 (0x00E0 - 0x00D8)
class UAC_TargetStunRemainingTime_C final : public UAIActionConsideration
{
public:
	bool                                          bAllowLastTrackedTarget;                           // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	float Score(const struct FAIActionDecisionContext& Context, bool* bSuccess) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AC_TargetStunRemainingTime_C">();
	}
	static class UAC_TargetStunRemainingTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAC_TargetStunRemainingTime_C>();
	}
};
static_assert(alignof(UAC_TargetStunRemainingTime_C) == 0x000008, "Wrong alignment on UAC_TargetStunRemainingTime_C");
static_assert(sizeof(UAC_TargetStunRemainingTime_C) == 0x0000E0, "Wrong size on UAC_TargetStunRemainingTime_C");
static_assert(offsetof(UAC_TargetStunRemainingTime_C, bAllowLastTrackedTarget) == 0x0000D8, "Member 'UAC_TargetStunRemainingTime_C::bAllowLastTrackedTarget' has a wrong offset!");

}


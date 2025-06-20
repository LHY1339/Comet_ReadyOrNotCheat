﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AG_TimeInCurrentAwarenessState

#include "Basic.hpp"

#include "AdvancedSessions_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AG_TimeInCurrentAwarenessState.AG_TimeInCurrentAwarenessState_C
// 0x0010 (0x0038 - 0x0028)
class UAG_TimeInCurrentAwarenessState_C final : public UAIActionGate
{
public:
	double                                        Time;                                              // 0x0028(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EOnlineComparisonOpRedux                      ComparisonType;                                    // 0x0030(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	bool CanOpen(const struct FAIActionDecisionContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AG_TimeInCurrentAwarenessState_C">();
	}
	static class UAG_TimeInCurrentAwarenessState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAG_TimeInCurrentAwarenessState_C>();
	}
};
static_assert(alignof(UAG_TimeInCurrentAwarenessState_C) == 0x000008, "Wrong alignment on UAG_TimeInCurrentAwarenessState_C");
static_assert(sizeof(UAG_TimeInCurrentAwarenessState_C) == 0x000038, "Wrong size on UAG_TimeInCurrentAwarenessState_C");
static_assert(offsetof(UAG_TimeInCurrentAwarenessState_C, Time) == 0x000028, "Member 'UAG_TimeInCurrentAwarenessState_C::Time' has a wrong offset!");
static_assert(offsetof(UAG_TimeInCurrentAwarenessState_C, ComparisonType) == 0x000030, "Member 'UAG_TimeInCurrentAwarenessState_C::ComparisonType' has a wrong offset!");

}


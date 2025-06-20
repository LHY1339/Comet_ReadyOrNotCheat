﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AG_SquadmateCount

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AG_SquadmateCount.AG_SquadmateCount_C
// 0x0008 (0x0030 - 0x0028)
class UAG_SquadmateCount_C final : public UAIActionGate
{
public:
	int32                                         Number_of_Squadmates;                              // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CanOpen(const struct FAIActionDecisionContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AG_SquadmateCount_C">();
	}
	static class UAG_SquadmateCount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAG_SquadmateCount_C>();
	}
};
static_assert(alignof(UAG_SquadmateCount_C) == 0x000008, "Wrong alignment on UAG_SquadmateCount_C");
static_assert(sizeof(UAG_SquadmateCount_C) == 0x000030, "Wrong size on UAG_SquadmateCount_C");
static_assert(offsetof(UAG_SquadmateCount_C, Number_of_Squadmates) == 0x000028, "Member 'UAG_SquadmateCount_C::Number_of_Squadmates' has a wrong offset!");

}


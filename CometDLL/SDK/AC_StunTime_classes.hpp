﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_StunTime

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AC_StunTime.AC_StunTime_C
// 0x0000 (0x00D8 - 0x00D8)
class UAC_StunTime_C final : public UAIActionConsideration
{
public:
	float Score(const struct FAIActionDecisionContext& Context, bool* bSuccess) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AC_StunTime_C">();
	}
	static class UAC_StunTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAC_StunTime_C>();
	}
};
static_assert(alignof(UAC_StunTime_C) == 0x000008, "Wrong alignment on UAC_StunTime_C");
static_assert(sizeof(UAC_StunTime_C) == 0x0000D8, "Wrong size on UAC_StunTime_C");

}


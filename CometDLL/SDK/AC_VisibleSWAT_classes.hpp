﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_VisibleSWAT

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AC_VisibleSWAT.AC_VisibleSWAT_C
// 0x0000 (0x00D8 - 0x00D8)
class UAC_VisibleSWAT_C final : public UAIActionConsideration
{
public:
	float Score(const struct FAIActionDecisionContext& Context, bool* bSuccess) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AC_VisibleSWAT_C">();
	}
	static class UAC_VisibleSWAT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAC_VisibleSWAT_C>();
	}
};
static_assert(alignof(UAC_VisibleSWAT_C) == 0x000008, "Wrong alignment on UAC_VisibleSWAT_C");
static_assert(sizeof(UAC_VisibleSWAT_C) == 0x0000D8, "Wrong size on UAC_VisibleSWAT_C");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AG_InvestigationIsOnCooldown

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AG_InvestigationIsOnCooldown.AG_InvestigationIsOnCooldown_C
// 0x0000 (0x0028 - 0x0028)
class UAG_InvestigationIsOnCooldown_C final : public UAIActionGate
{
public:
	bool CanOpen(const struct FAIActionDecisionContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AG_InvestigationIsOnCooldown_C">();
	}
	static class UAG_InvestigationIsOnCooldown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAG_InvestigationIsOnCooldown_C>();
	}
};
static_assert(alignof(UAG_InvestigationIsOnCooldown_C) == 0x000008, "Wrong alignment on UAG_InvestigationIsOnCooldown_C");
static_assert(sizeof(UAG_InvestigationIsOnCooldown_C) == 0x000028, "Wrong size on UAG_InvestigationIsOnCooldown_C");

}


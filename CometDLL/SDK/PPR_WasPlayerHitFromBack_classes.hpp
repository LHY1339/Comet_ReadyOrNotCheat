﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PPR_WasPlayerHitFromBack

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PPR_WasPlayerHitFromBack.PPR_WasPlayerHitFromBack_C
// 0x0000 (0x0038 - 0x0038)
class UPPR_WasPlayerHitFromBack_C final : public UPostProcessRequirement
{
public:
	bool EnablePostProcessEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PPR_WasPlayerHitFromBack_C">();
	}
	static class UPPR_WasPlayerHitFromBack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPPR_WasPlayerHitFromBack_C>();
	}
};
static_assert(alignof(UPPR_WasPlayerHitFromBack_C) == 0x000008, "Wrong alignment on UPPR_WasPlayerHitFromBack_C");
static_assert(sizeof(UPPR_WasPlayerHitFromBack_C) == 0x000038, "Wrong size on UPPR_WasPlayerHitFromBack_C");

}


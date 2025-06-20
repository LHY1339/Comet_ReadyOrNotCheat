﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PPR_IsNotCurrentlyPeppersprayed

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PPR_IsNotCurrentlyPeppersprayed.PPR_IsNotCurrentlyPeppersprayed_C
// 0x0000 (0x0038 - 0x0038)
class UPPR_IsNotCurrentlyPeppersprayed_C final : public UPostProcessRequirement
{
public:
	bool EnablePostProcessEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PPR_IsNotCurrentlyPeppersprayed_C">();
	}
	static class UPPR_IsNotCurrentlyPeppersprayed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPPR_IsNotCurrentlyPeppersprayed_C>();
	}
};
static_assert(alignof(UPPR_IsNotCurrentlyPeppersprayed_C) == 0x000008, "Wrong alignment on UPPR_IsNotCurrentlyPeppersprayed_C");
static_assert(sizeof(UPPR_IsNotCurrentlyPeppersprayed_C) == 0x000038, "Wrong size on UPPR_IsNotCurrentlyPeppersprayed_C");

}


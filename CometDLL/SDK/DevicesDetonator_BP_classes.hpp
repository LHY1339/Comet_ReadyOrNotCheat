﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DevicesDetonator_BP

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DevicesDetonator_BP.DevicesDetonator_BP_C
// 0x0000 (0x0BD0 - 0x0BD0)
class ADevicesDetonator_BP_C final : public ADetonator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DevicesDetonator_BP_C">();
	}
	static class ADevicesDetonator_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADevicesDetonator_BP_C>();
	}
};
static_assert(alignof(ADevicesDetonator_BP_C) == 0x000010, "Wrong alignment on ADevicesDetonator_BP_C");
static_assert(sizeof(ADevicesDetonator_BP_C) == 0x000BD0, "Wrong size on ADevicesDetonator_BP_C");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Secondary_M92A3

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Secondary_M92A3.Secondary_M92A3_C
// 0x0000 (0x1740 - 0x1740)
class ASecondary_M92A3_C final : public ABaseMagazineWeapon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Secondary_M92A3_C">();
	}
	static class ASecondary_M92A3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASecondary_M92A3_C>();
	}
};
static_assert(alignof(ASecondary_M92A3_C) == 0x000010, "Wrong alignment on ASecondary_M92A3_C");
static_assert(sizeof(ASecondary_M92A3_C) == 0x001740, "Wrong size on ASecondary_M92A3_C");

}


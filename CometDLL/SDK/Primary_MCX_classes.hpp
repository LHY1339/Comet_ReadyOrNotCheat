﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Primary_MCX

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Primary_MCX.Primary_MCX_C
// 0x0000 (0x1740 - 0x1740)
class APrimary_MCX_C final : public ABaseMagazineWeapon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Primary_MCX_C">();
	}
	static class APrimary_MCX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrimary_MCX_C>();
	}
};
static_assert(alignof(APrimary_MCX_C) == 0x000010, "Wrong alignment on APrimary_MCX_C");
static_assert(sizeof(APrimary_MCX_C) == 0x001740, "Wrong size on APrimary_MCX_C");

}


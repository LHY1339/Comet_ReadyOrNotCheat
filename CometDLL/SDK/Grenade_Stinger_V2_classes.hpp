﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Grenade_Stinger_V2

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Grenade_Stinger_V2.Grenade_Stinger_V2_C
// 0x0000 (0x11A0 - 0x11A0)
class AGrenade_Stinger_V2_C final : public ABaseGrenade
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Grenade_Stinger_V2_C">();
	}
	static class AGrenade_Stinger_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGrenade_Stinger_V2_C>();
	}
};
static_assert(alignof(AGrenade_Stinger_V2_C) == 0x000010, "Wrong alignment on AGrenade_Stinger_V2_C");
static_assert(sizeof(AGrenade_Stinger_V2_C) == 0x0011A0, "Wrong size on AGrenade_Stinger_V2_C");

}


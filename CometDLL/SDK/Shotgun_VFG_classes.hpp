﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shotgun_VFG

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Shotgun_VFG.Shotgun_VFG_C
// 0x0000 (0x10D0 - 0x10D0)
class UShotgun_VFG_C final : public UWeaponAttachment
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Shotgun_VFG_C">();
	}
	static class UShotgun_VFG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShotgun_VFG_C>();
	}
};
static_assert(alignof(UShotgun_VFG_C) == 0x000010, "Wrong alignment on UShotgun_VFG_C");
static_assert(sizeof(UShotgun_VFG_C) == 0x0010D0, "Wrong size on UShotgun_VFG_C");

}


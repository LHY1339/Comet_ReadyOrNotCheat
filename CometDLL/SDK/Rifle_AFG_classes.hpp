﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rifle_AFG

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Rifle_AFG.Rifle_AFG_C
// 0x0000 (0x10D0 - 0x10D0)
class URifle_AFG_C final : public UWeaponAttachment
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Rifle_AFG_C">();
	}
	static class URifle_AFG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URifle_AFG_C>();
	}
};
static_assert(alignof(URifle_AFG_C) == 0x000010, "Wrong alignment on URifle_AFG_C");
static_assert(sizeof(URifle_AFG_C) == 0x0010D0, "Wrong size on URifle_AFG_C");

}


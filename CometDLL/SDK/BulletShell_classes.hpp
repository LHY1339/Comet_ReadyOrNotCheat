﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BulletShell

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BulletShell.BulletShell_C
// 0x0000 (0x0318 - 0x0318)
class ABulletShell_C final : public ABaseShell
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BulletShell_C">();
	}
	static class ABulletShell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABulletShell_C>();
	}
};
static_assert(alignof(ABulletShell_C) == 0x000008, "Wrong alignment on ABulletShell_C");
static_assert(sizeof(ABulletShell_C) == 0x000318, "Wrong size on ABulletShell_C");

}


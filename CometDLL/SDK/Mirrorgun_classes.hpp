﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mirrorgun

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Mirrorgun.Mirrorgun_C
// 0x0000 (0x0CE0 - 0x0CE0)
class AMirrorgun_C final : public Aoptiwand
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mirrorgun_C">();
	}
	static class AMirrorgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMirrorgun_C>();
	}
};
static_assert(alignof(AMirrorgun_C) == 0x000010, "Wrong alignment on AMirrorgun_C");
static_assert(sizeof(AMirrorgun_C) == 0x000CE0, "Wrong size on AMirrorgun_C");

}


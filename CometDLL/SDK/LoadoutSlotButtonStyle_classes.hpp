﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadoutSlotButtonStyle

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LoadoutSlotButtonStyle.LoadoutSlotButtonStyle_C
// 0x0000 (0x07C0 - 0x07C0)
class ULoadoutSlotButtonStyle_C : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadoutSlotButtonStyle_C">();
	}
	static class ULoadoutSlotButtonStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadoutSlotButtonStyle_C>();
	}
};
static_assert(alignof(ULoadoutSlotButtonStyle_C) == 0x000010, "Wrong alignment on ULoadoutSlotButtonStyle_C");
static_assert(sizeof(ULoadoutSlotButtonStyle_C) == 0x0007C0, "Wrong size on ULoadoutSlotButtonStyle_C");

}


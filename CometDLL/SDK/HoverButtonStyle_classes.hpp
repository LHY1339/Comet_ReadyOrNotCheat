﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HoverButtonStyle

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HoverButtonStyle.HoverButtonStyle_C
// 0x0000 (0x07C0 - 0x07C0)
class UHoverButtonStyle_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HoverButtonStyle_C">();
	}
	static class UHoverButtonStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHoverButtonStyle_C>();
	}
};
static_assert(alignof(UHoverButtonStyle_C) == 0x000010, "Wrong alignment on UHoverButtonStyle_C");
static_assert(sizeof(UHoverButtonStyle_C) == 0x0007C0, "Wrong size on UHoverButtonStyle_C");

}


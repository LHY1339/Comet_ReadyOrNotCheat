﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_Stress

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AC_Stress.AC_Stress_C
// 0x0000 (0x00D8 - 0x00D8)
class UAC_Stress_C final : public UAC_Stress
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AC_Stress_C">();
	}
	static class UAC_Stress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAC_Stress_C>();
	}
};
static_assert(alignof(UAC_Stress_C) == 0x000008, "Wrong alignment on UAC_Stress_C");
static_assert(sizeof(UAC_Stress_C) == 0x0000D8, "Wrong size on UAC_Stress_C");

}


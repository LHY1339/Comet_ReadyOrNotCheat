﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: C_Ninebang_Explode

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass C_Ninebang_Explode.C_Ninebang_Explode_C
// 0x0000 (0x01F0 - 0x01F0)
class UC_Ninebang_Explode_C final : public ULegacyCameraShake
{
public:
	void NewFunction_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"C_Ninebang_Explode_C">();
	}
	static class UC_Ninebang_Explode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UC_Ninebang_Explode_C>();
	}
};
static_assert(alignof(UC_Ninebang_Explode_C) == 0x000010, "Wrong alignment on UC_Ninebang_Explode_C");
static_assert(sizeof(UC_Ninebang_Explode_C) == 0x0001F0, "Wrong size on UC_Ninebang_Explode_C");

}


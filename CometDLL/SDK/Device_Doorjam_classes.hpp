﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Device_Doorjam

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Device_Doorjam.Device_Doorjam_C
// 0x0000 (0x0C00 - 0x0C00)
class ADevice_Doorjam_C final : public ADoorJam
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Device_Doorjam_C">();
	}
	static class ADevice_Doorjam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADevice_Doorjam_C>();
	}
};
static_assert(alignof(ADevice_Doorjam_C) == 0x000010, "Wrong alignment on ADevice_Doorjam_C");
static_assert(sizeof(ADevice_Doorjam_C) == 0x000C00, "Wrong size on ADevice_Doorjam_C");

}


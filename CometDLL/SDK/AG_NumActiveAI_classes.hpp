﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AG_NumActiveAI

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AG_NumActiveAI.AG_NumActiveAI_C
// 0x0000 (0x0030 - 0x0030)
class UAG_NumActiveAI_C final : public UAGNumActiveAI
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AG_NumActiveAI_C">();
	}
	static class UAG_NumActiveAI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAG_NumActiveAI_C>();
	}
};
static_assert(alignof(UAG_NumActiveAI_C) == 0x000008, "Wrong alignment on UAG_NumActiveAI_C");
static_assert(sizeof(UAG_NumActiveAI_C) == 0x000030, "Wrong size on UAG_NumActiveAI_C");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PPR_IsNotWearingFlashGoggles

#include "Basic.hpp"


namespace SDK::Params
{

// Function PPR_IsNotWearingFlashGoggles.PPR_IsNotWearingFlashGoggles_C.EnablePostProcessEffect
// 0x0003 (0x0003 - 0x0000)
struct PPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWearingAntiFlashGoggles_ReturnValue;    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect) == 0x000001, "Wrong alignment on PPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect");
static_assert(sizeof(PPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect) == 0x000003, "Wrong size on PPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect");
static_assert(offsetof(PPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect, ReturnValue) == 0x000000, "Member 'PPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect::ReturnValue' has a wrong offset!");
static_assert(offsetof(PPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect, CallFunc_IsWearingAntiFlashGoggles_ReturnValue) == 0x000001, "Member 'PPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect::CallFunc_IsWearingAntiFlashGoggles_ReturnValue' has a wrong offset!");
static_assert(offsetof(PPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'PPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Primary_AK104

#include "Basic.hpp"


namespace SDK::Params
{

// Function Primary_AK104.Primary_AK104_C.ExecuteUbergraph_Primary_AK104
// 0x0008 (0x0008 - 0x0000)
struct Primary_AK104_C_ExecuteUbergraph_Primary_AK104 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Primary_AK104_C_ExecuteUbergraph_Primary_AK104) == 0x000004, "Wrong alignment on Primary_AK104_C_ExecuteUbergraph_Primary_AK104");
static_assert(sizeof(Primary_AK104_C_ExecuteUbergraph_Primary_AK104) == 0x000008, "Wrong size on Primary_AK104_C_ExecuteUbergraph_Primary_AK104");
static_assert(offsetof(Primary_AK104_C_ExecuteUbergraph_Primary_AK104, EntryPoint) == 0x000000, "Member 'Primary_AK104_C_ExecuteUbergraph_Primary_AK104::EntryPoint' has a wrong offset!");
static_assert(offsetof(Primary_AK104_C_ExecuteUbergraph_Primary_AK104, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Primary_AK104_C_ExecuteUbergraph_Primary_AK104::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function Primary_AK104.Primary_AK104_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Primary_AK104_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Primary_AK104_C_ReceiveTick) == 0x000004, "Wrong alignment on Primary_AK104_C_ReceiveTick");
static_assert(sizeof(Primary_AK104_C_ReceiveTick) == 0x000004, "Wrong size on Primary_AK104_C_ReceiveTick");
static_assert(offsetof(Primary_AK104_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Primary_AK104_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AICompliantAction_StationaryFake

#include "Basic.hpp"


namespace SDK::Params
{

// Function AICompliantAction_StationaryFake.AICompliantAction_StationaryFake_C.ExecuteUbergraph_AICompliantAction_StationaryFake
// 0x0010 (0x0010 - 0x0000)
struct AICompliantAction_StationaryFake_C_ExecuteUbergraph_AICompliantAction_StationaryFake final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACyberneticCharacter*                   CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AICompliantAction_StationaryFake_C_ExecuteUbergraph_AICompliantAction_StationaryFake) == 0x000008, "Wrong alignment on AICompliantAction_StationaryFake_C_ExecuteUbergraph_AICompliantAction_StationaryFake");
static_assert(sizeof(AICompliantAction_StationaryFake_C_ExecuteUbergraph_AICompliantAction_StationaryFake) == 0x000010, "Wrong size on AICompliantAction_StationaryFake_C_ExecuteUbergraph_AICompliantAction_StationaryFake");
static_assert(offsetof(AICompliantAction_StationaryFake_C_ExecuteUbergraph_AICompliantAction_StationaryFake, EntryPoint) == 0x000000, "Member 'AICompliantAction_StationaryFake_C_ExecuteUbergraph_AICompliantAction_StationaryFake::EntryPoint' has a wrong offset!");
static_assert(offsetof(AICompliantAction_StationaryFake_C_ExecuteUbergraph_AICompliantAction_StationaryFake, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'AICompliantAction_StationaryFake_C_ExecuteUbergraph_AICompliantAction_StationaryFake::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");

}


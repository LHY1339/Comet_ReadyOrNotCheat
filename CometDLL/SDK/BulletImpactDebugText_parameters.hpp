﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BulletImpactDebugText

#include "Basic.hpp"


namespace SDK::Params
{

// Function BulletImpactDebugText.BulletImpactDebugText_C.SetData
// 0x0020 (0x0020 - 0x0000)
struct BulletImpactDebugText_C_SetData final
{
public:
	int32                                         ID_0;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text_0;                                            // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BulletImpactDebugText_C_SetData) == 0x000008, "Wrong alignment on BulletImpactDebugText_C_SetData");
static_assert(sizeof(BulletImpactDebugText_C_SetData) == 0x000020, "Wrong size on BulletImpactDebugText_C_SetData");
static_assert(offsetof(BulletImpactDebugText_C_SetData, ID_0) == 0x000000, "Member 'BulletImpactDebugText_C_SetData::ID_0' has a wrong offset!");
static_assert(offsetof(BulletImpactDebugText_C_SetData, Text_0) == 0x000008, "Member 'BulletImpactDebugText_C_SetData::Text_0' has a wrong offset!");

}


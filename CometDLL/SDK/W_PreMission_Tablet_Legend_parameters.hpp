﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_Legend

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.ExecuteUbergraph_W_PreMission_Tablet_Legend
// 0x0018 (0x0018 - 0x0000)
struct W_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend) == 0x000008, "Wrong alignment on W_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend");
static_assert(sizeof(W_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend) == 0x000018, "Wrong size on W_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend");
static_assert(offsetof(W_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend, EntryPoint) == 0x000000, "Member 'W_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'W_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'W_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.Toggle
// 0x0001 (0x0001 - 0x0000)
struct W_PreMission_Tablet_Legend_C_Toggle final
{
public:
	bool                                          IsOpen_0;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_Tablet_Legend_C_Toggle) == 0x000001, "Wrong alignment on W_PreMission_Tablet_Legend_C_Toggle");
static_assert(sizeof(W_PreMission_Tablet_Legend_C_Toggle) == 0x000001, "Wrong size on W_PreMission_Tablet_Legend_C_Toggle");
static_assert(offsetof(W_PreMission_Tablet_Legend_C_Toggle, IsOpen_0) == 0x000000, "Member 'W_PreMission_Tablet_Legend_C_Toggle::IsOpen_0' has a wrong offset!");

}


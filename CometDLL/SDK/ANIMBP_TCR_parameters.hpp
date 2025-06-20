﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_TCR

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ANIMBP_TCR.ANIMBP_TCR_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ANIMBP_TCR_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ANIMBP_TCR_C_AnimGraph) == 0x000008, "Wrong alignment on ANIMBP_TCR_C_AnimGraph");
static_assert(sizeof(ANIMBP_TCR_C_AnimGraph) == 0x000010, "Wrong size on ANIMBP_TCR_C_AnimGraph");
static_assert(offsetof(ANIMBP_TCR_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ANIMBP_TCR_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ANIMBP_TCR.ANIMBP_TCR_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ANIMBP_TCR_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_TCR_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ANIMBP_TCR_C_BlueprintUpdateAnimation");
static_assert(sizeof(ANIMBP_TCR_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ANIMBP_TCR_C_BlueprintUpdateAnimation");
static_assert(offsetof(ANIMBP_TCR_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ANIMBP_TCR_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ANIMBP_TCR.ANIMBP_TCR_C.ExecuteUbergraph_ANIMBP_TCR
// 0x0020 (0x0020 - 0x0000)
struct ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABaseMagazineWeapon*                    K2Node_DynamicCast_AsBase_Magazine_Weapon;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR) == 0x000008, "Wrong alignment on ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR");
static_assert(sizeof(ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR) == 0x000020, "Wrong size on ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR");
static_assert(offsetof(ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR, EntryPoint) == 0x000000, "Member 'ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR::EntryPoint' has a wrong offset!");
static_assert(offsetof(ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR, K2Node_DynamicCast_AsBase_Magazine_Weapon) == 0x000010, "Member 'ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR::K2Node_DynamicCast_AsBase_Magazine_Weapon' has a wrong offset!");
static_assert(offsetof(ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'ANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_G19G5

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ANIMBP_G19G5.ANIMBP_G19G5_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ANIMBP_G19G5_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ANIMBP_G19G5_C_AnimGraph) == 0x000008, "Wrong alignment on ANIMBP_G19G5_C_AnimGraph");
static_assert(sizeof(ANIMBP_G19G5_C_AnimGraph) == 0x000010, "Wrong size on ANIMBP_G19G5_C_AnimGraph");
static_assert(offsetof(ANIMBP_G19G5_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ANIMBP_G19G5_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ANIMBP_G19G5.ANIMBP_G19G5_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ANIMBP_G19G5_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_G19G5_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ANIMBP_G19G5_C_BlueprintUpdateAnimation");
static_assert(sizeof(ANIMBP_G19G5_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ANIMBP_G19G5_C_BlueprintUpdateAnimation");
static_assert(offsetof(ANIMBP_G19G5_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ANIMBP_G19G5_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ANIMBP_G19G5.ANIMBP_G19G5_C.ExecuteUbergraph_ANIMBP_G19G5
// 0x0030 (0x0030 - 0x0000)
struct ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABaseMagazineWeapon*                    K2Node_DynamicCast_AsBase_Magazine_Weapon;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Round_ReturnValue;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Round_A_ImplicitCast;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5) == 0x000008, "Wrong alignment on ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5");
static_assert(sizeof(ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5) == 0x000030, "Wrong size on ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5");
static_assert(offsetof(ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5, EntryPoint) == 0x000000, "Member 'ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5::EntryPoint' has a wrong offset!");
static_assert(offsetof(ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5, K2Node_DynamicCast_AsBase_Magazine_Weapon) == 0x000010, "Member 'ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5::K2Node_DynamicCast_AsBase_Magazine_Weapon' has a wrong offset!");
static_assert(offsetof(ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5, CallFunc_Round_ReturnValue) == 0x00001C, "Member 'ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5, K2Node_Event_DeltaTimeX) == 0x000024, "Member 'ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5, CallFunc_Round_A_ImplicitCast) == 0x000028, "Member 'ANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5::CallFunc_Round_A_ImplicitCast' has a wrong offset!");

}


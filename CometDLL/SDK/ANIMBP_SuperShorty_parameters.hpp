﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_SuperShorty

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ANIMBP_SuperShorty.ANIMBP_SuperShorty_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ANIMBP_SuperShorty_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ANIMBP_SuperShorty_C_AnimGraph) == 0x000008, "Wrong alignment on ANIMBP_SuperShorty_C_AnimGraph");
static_assert(sizeof(ANIMBP_SuperShorty_C_AnimGraph) == 0x000010, "Wrong size on ANIMBP_SuperShorty_C_AnimGraph");
static_assert(offsetof(ANIMBP_SuperShorty_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ANIMBP_SuperShorty_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ANIMBP_SuperShorty.ANIMBP_SuperShorty_C.ExecuteUbergraph_ANIMBP_SuperShorty
// 0x0050 (0x0050 - 0x0000)
struct ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AShotgun*                               K2Node_DynamicCast_AsShotgun;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AShotgun*                               K2Node_DynamicCast_AsShotgun_1;                    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetItemMesh_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShellRackShellComponent*               CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty) == 0x000008, "Wrong alignment on ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty");
static_assert(sizeof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty) == 0x000050, "Wrong size on ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty");
static_assert(offsetof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty, EntryPoint) == 0x000000, "Member 'ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty::EntryPoint' has a wrong offset!");
static_assert(offsetof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty, K2Node_DynamicCast_AsShotgun) == 0x000010, "Member 'ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty::K2Node_DynamicCast_AsShotgun' has a wrong offset!");
static_assert(offsetof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty, K2Node_DynamicCast_AsShotgun_1) == 0x000020, "Member 'ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty::K2Node_DynamicCast_AsShotgun_1' has a wrong offset!");
static_assert(offsetof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty, CallFunc_GetItemMesh_ReturnValue) == 0x000030, "Member 'ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty::CallFunc_GetItemMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty, CallFunc_Array_Get_Item) == 0x000040, "Member 'ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000048, "Member 'ANIMBP_SuperShorty_C_ExecuteUbergraph_ANIMBP_SuperShorty::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

}


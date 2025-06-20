﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_SawnOff

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ANIMBP_SawnOff.ANIMBP_SawnOff_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ANIMBP_SawnOff_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ANIMBP_SawnOff_C_AnimGraph) == 0x000008, "Wrong alignment on ANIMBP_SawnOff_C_AnimGraph");
static_assert(sizeof(ANIMBP_SawnOff_C_AnimGraph) == 0x000010, "Wrong size on ANIMBP_SawnOff_C_AnimGraph");
static_assert(offsetof(ANIMBP_SawnOff_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ANIMBP_SawnOff_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ANIMBP_SawnOff.ANIMBP_SawnOff_C.ExecuteUbergraph_ANIMBP_SawnOff
// 0x0004 (0x0004 - 0x0000)
struct ANIMBP_SawnOff_C_ExecuteUbergraph_ANIMBP_SawnOff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_SawnOff_C_ExecuteUbergraph_ANIMBP_SawnOff) == 0x000004, "Wrong alignment on ANIMBP_SawnOff_C_ExecuteUbergraph_ANIMBP_SawnOff");
static_assert(sizeof(ANIMBP_SawnOff_C_ExecuteUbergraph_ANIMBP_SawnOff) == 0x000004, "Wrong size on ANIMBP_SawnOff_C_ExecuteUbergraph_ANIMBP_SawnOff");
static_assert(offsetof(ANIMBP_SawnOff_C_ExecuteUbergraph_ANIMBP_SawnOff, EntryPoint) == 0x000000, "Member 'ANIMBP_SawnOff_C_ExecuteUbergraph_ANIMBP_SawnOff::EntryPoint' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_Pepperspray

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_Pepperspray.ANIMBP_Pepperspray_C
// 0x00D0 (0x0420 - 0x0350)
class UANIMBP_Pepperspray_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0388(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x03D0(0x0048)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_ANIMBP_Pepperspray(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_Pepperspray_C">();
	}
	static class UANIMBP_Pepperspray_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_Pepperspray_C>();
	}
};
static_assert(alignof(UANIMBP_Pepperspray_C) == 0x000010, "Wrong alignment on UANIMBP_Pepperspray_C");
static_assert(sizeof(UANIMBP_Pepperspray_C) == 0x000420, "Wrong size on UANIMBP_Pepperspray_C");
static_assert(offsetof(UANIMBP_Pepperspray_C, UberGraphFrame) == 0x000350, "Member 'UANIMBP_Pepperspray_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_Pepperspray_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UANIMBP_Pepperspray_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UANIMBP_Pepperspray_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UANIMBP_Pepperspray_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UANIMBP_Pepperspray_C, AnimGraphNode_Root) == 0x000368, "Member 'UANIMBP_Pepperspray_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_Pepperspray_C, AnimGraphNode_Slot) == 0x000388, "Member 'UANIMBP_Pepperspray_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_Pepperspray_C, AnimGraphNode_SequencePlayer) == 0x0003D0, "Member 'UANIMBP_Pepperspray_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}


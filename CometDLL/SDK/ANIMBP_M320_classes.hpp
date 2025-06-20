﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_M320

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ANIMBP_M320_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_M320.ANIMBP_M320_C
// 0x02D0 (0x0640 - 0x0370)
class UANIMBP_M320_C final : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ANIMBP_M320::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                  // 0x0378(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_37A[0x6];                                      // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0380(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0388(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0390(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x03B0(0x0048)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x03F8(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0520(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0540(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0560(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x05A8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x05F0(0x0048)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M320_AnimGraphNode_ModifyBone_EDE7589748607C162DE04CB3782BCD3A();
	void ExecuteUbergraph_ANIMBP_M320(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_M320_C">();
	}
	static class UANIMBP_M320_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_M320_C>();
	}
};
static_assert(alignof(UANIMBP_M320_C) == 0x000010, "Wrong alignment on UANIMBP_M320_C");
static_assert(sizeof(UANIMBP_M320_C) == 0x000640, "Wrong size on UANIMBP_M320_C");
static_assert(offsetof(UANIMBP_M320_C, UberGraphFrame) == 0x000370, "Member 'UANIMBP_M320_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_M320_C, __AnimBlueprintMutables) == 0x000378, "Member 'UANIMBP_M320_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UANIMBP_M320_C, AnimBlueprintExtension_PropertyAccess) == 0x000380, "Member 'UANIMBP_M320_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UANIMBP_M320_C, AnimBlueprintExtension_Base) == 0x000388, "Member 'UANIMBP_M320_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UANIMBP_M320_C, AnimGraphNode_Root) == 0x000390, "Member 'UANIMBP_M320_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_M320_C, AnimGraphNode_Slot) == 0x0003B0, "Member 'UANIMBP_M320_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_M320_C, AnimGraphNode_ModifyBone) == 0x0003F8, "Member 'UANIMBP_M320_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UANIMBP_M320_C, AnimGraphNode_LocalToComponentSpace) == 0x000520, "Member 'UANIMBP_M320_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_M320_C, AnimGraphNode_ComponentToLocalSpace) == 0x000540, "Member 'UANIMBP_M320_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_M320_C, AnimGraphNode_SequencePlayer_1) == 0x000560, "Member 'UANIMBP_M320_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_M320_C, AnimGraphNode_SequencePlayer) == 0x0005A8, "Member 'UANIMBP_M320_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UANIMBP_M320_C, AnimGraphNode_BlendListByBool) == 0x0005F0, "Member 'UANIMBP_M320_C::AnimGraphNode_BlendListByBool' has a wrong offset!");

}


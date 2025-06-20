﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_B1301

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"
#include "ANIMBP_B1301_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_B1301.ANIMBP_B1301_C
// 0x03B0 (0x0720 - 0x0370)
class UANIMBP_B1301_C final : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ANIMBP_B1301::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                 // 0x0378(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_37A[0x6];                                      // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0380(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0388(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0390(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x03B0(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x03F8(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0478(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x04C0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0508(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0550(0x0020)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0570(0x00F0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0660(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x06A8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x06D0(0x0028)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x06F8(0x0020)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_B1301_AnimGraphNode_BlendListByBool_0E18469B4C827EBA3EDEBB91DA3B0B1E();
	void ExecuteUbergraph_ANIMBP_B1301(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_B1301_C">();
	}
	static class UANIMBP_B1301_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_B1301_C>();
	}
};
static_assert(alignof(UANIMBP_B1301_C) == 0x000010, "Wrong alignment on UANIMBP_B1301_C");
static_assert(sizeof(UANIMBP_B1301_C) == 0x000720, "Wrong size on UANIMBP_B1301_C");
static_assert(offsetof(UANIMBP_B1301_C, UberGraphFrame) == 0x000370, "Member 'UANIMBP_B1301_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, __AnimBlueprintMutables) == 0x000378, "Member 'UANIMBP_B1301_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimBlueprintExtension_PropertyAccess) == 0x000380, "Member 'UANIMBP_B1301_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimBlueprintExtension_Base) == 0x000388, "Member 'UANIMBP_B1301_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_Root) == 0x000390, "Member 'UANIMBP_B1301_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_Slot_1) == 0x0003B0, "Member 'UANIMBP_B1301_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_SaveCachedPose) == 0x0003F8, "Member 'UANIMBP_B1301_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_BlendListByBool) == 0x000478, "Member 'UANIMBP_B1301_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_SequencePlayer_1) == 0x0004C0, "Member 'UANIMBP_B1301_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_SequencePlayer) == 0x000508, "Member 'UANIMBP_B1301_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_LocalToComponentSpace) == 0x000550, "Member 'UANIMBP_B1301_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_LayeredBoneBlend) == 0x000570, "Member 'UANIMBP_B1301_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_Slot) == 0x000660, "Member 'UANIMBP_B1301_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_UseCachedPose_1) == 0x0006A8, "Member 'UANIMBP_B1301_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_UseCachedPose) == 0x0006D0, "Member 'UANIMBP_B1301_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_B1301_C, AnimGraphNode_ComponentToLocalSpace) == 0x0006F8, "Member 'UANIMBP_B1301_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");

}


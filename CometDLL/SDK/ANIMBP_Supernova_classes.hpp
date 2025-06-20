﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_Supernova

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ANIMBP_Supernova_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_Supernova.ANIMBP_Supernova_C
// 0x0380 (0x06D0 - 0x0350)
class UANIMBP_Supernova_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ANIMBP_Supernova::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;             // 0x0358(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_35A[0x6];                                      // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0370(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0390(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x03D8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0420(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0468(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x04E8(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0510(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0638(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0658(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0678(0x0028)()
	double                                        Hide_Shell_Alpha;                                  // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldHideShell;                                  // 0x06A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A9[0x7];                                      // 0x06A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Ammo_Remaining;                                    // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HideShellAlpha;                                    // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AmmoRemaining;                                     // 0x06C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_ToggleBullet();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_Supernova(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_Supernova_C">();
	}
	static class UANIMBP_Supernova_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_Supernova_C>();
	}
};
static_assert(alignof(UANIMBP_Supernova_C) == 0x000010, "Wrong alignment on UANIMBP_Supernova_C");
static_assert(sizeof(UANIMBP_Supernova_C) == 0x0006D0, "Wrong size on UANIMBP_Supernova_C");
static_assert(offsetof(UANIMBP_Supernova_C, UberGraphFrame) == 0x000350, "Member 'UANIMBP_Supernova_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, __AnimBlueprintMutables) == 0x000358, "Member 'UANIMBP_Supernova_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'UANIMBP_Supernova_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'UANIMBP_Supernova_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimGraphNode_Root) == 0x000370, "Member 'UANIMBP_Supernova_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimGraphNode_Slot) == 0x000390, "Member 'UANIMBP_Supernova_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimGraphNode_SequencePlayer) == 0x0003D8, "Member 'UANIMBP_Supernova_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimGraphNode_BlendListByBool) == 0x000420, "Member 'UANIMBP_Supernova_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimGraphNode_SaveCachedPose) == 0x000468, "Member 'UANIMBP_Supernova_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimGraphNode_UseCachedPose_1) == 0x0004E8, "Member 'UANIMBP_Supernova_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimGraphNode_ModifyBone) == 0x000510, "Member 'UANIMBP_Supernova_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimGraphNode_LocalToComponentSpace) == 0x000638, "Member 'UANIMBP_Supernova_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimGraphNode_ComponentToLocalSpace) == 0x000658, "Member 'UANIMBP_Supernova_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AnimGraphNode_UseCachedPose) == 0x000678, "Member 'UANIMBP_Supernova_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, Hide_Shell_Alpha) == 0x0006A0, "Member 'UANIMBP_Supernova_C::Hide_Shell_Alpha' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, bShouldHideShell) == 0x0006A8, "Member 'UANIMBP_Supernova_C::bShouldHideShell' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, Ammo_Remaining) == 0x0006B0, "Member 'UANIMBP_Supernova_C::Ammo_Remaining' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, HideShellAlpha) == 0x0006B8, "Member 'UANIMBP_Supernova_C::HideShellAlpha' has a wrong offset!");
static_assert(offsetof(UANIMBP_Supernova_C, AmmoRemaining) == 0x0006C0, "Member 'UANIMBP_Supernova_C::AmmoRemaining' has a wrong offset!");

}


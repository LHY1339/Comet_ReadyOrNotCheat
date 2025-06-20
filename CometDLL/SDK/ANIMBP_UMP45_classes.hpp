﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_UMP45

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ANIMBP_UMP45_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_UMP45.ANIMBP_UMP45_C
// 0x0C20 (0x0F90 - 0x0370)
class UANIMBP_UMP45_C final : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ANIMBP_UMP45::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                 // 0x0378(0x0020)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0398(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03A0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03A8(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x03C8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0410(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0458(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x04A0(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x04E8(0x0080)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0568(0x00F0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0658(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x06A0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x06C8(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x06F0(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0710(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x0838(0x0020)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0858(0x00F0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0948(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x0A70(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x0A90(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0AB0(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x0BD8(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x0BF8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0C18(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0D40(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0D60(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_3;                      // 0x0D80(0x0010)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_2;                      // 0x0D90(0x0010)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_1;                      // 0x0DA0(0x0010)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0DB0(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0ED8(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0EF8(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0F18(0x0010)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0F28(0x0048)()
	double                                        Mag01Alpha;                                        // 0x0F70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CurrentFireMode;                                   // 0x0F78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSemi;                                           // 0x0F79(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F7A[0x6];                                      // 0x0F7A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FoldedStockAlpha;                                  // 0x0F80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FireSwitchBlendTime;                               // 0x0F88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_UMP45_AnimGraphNode_BlendListByBool_5DF726DD49E321544F42A5A05D4AB5CA();
	void ExecuteUbergraph_ANIMBP_UMP45(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_UMP45_C">();
	}
	static class UANIMBP_UMP45_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_UMP45_C>();
	}
};
static_assert(alignof(UANIMBP_UMP45_C) == 0x000010, "Wrong alignment on UANIMBP_UMP45_C");
static_assert(sizeof(UANIMBP_UMP45_C) == 0x000F90, "Wrong size on UANIMBP_UMP45_C");
static_assert(offsetof(UANIMBP_UMP45_C, UberGraphFrame) == 0x000370, "Member 'UANIMBP_UMP45_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, __AnimBlueprintMutables) == 0x000378, "Member 'UANIMBP_UMP45_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimBlueprintExtension_PropertyAccess) == 0x000398, "Member 'UANIMBP_UMP45_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimBlueprintExtension_Base) == 0x0003A0, "Member 'UANIMBP_UMP45_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_Root) == 0x0003A8, "Member 'UANIMBP_UMP45_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_Slot_1) == 0x0003C8, "Member 'UANIMBP_UMP45_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_BlendListByBool) == 0x000410, "Member 'UANIMBP_UMP45_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_SequencePlayer_1) == 0x000458, "Member 'UANIMBP_UMP45_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_SequencePlayer) == 0x0004A0, "Member 'UANIMBP_UMP45_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_SaveCachedPose) == 0x0004E8, "Member 'UANIMBP_UMP45_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000568, "Member 'UANIMBP_UMP45_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_Slot) == 0x000658, "Member 'UANIMBP_UMP45_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_UseCachedPose_1) == 0x0006A0, "Member 'UANIMBP_UMP45_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_UseCachedPose) == 0x0006C8, "Member 'UANIMBP_UMP45_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_LocalToComponentSpace_4) == 0x0006F0, "Member 'UANIMBP_UMP45_C::AnimGraphNode_LocalToComponentSpace_4' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_ModifyBone_4) == 0x000710, "Member 'UANIMBP_UMP45_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_ComponentToLocalSpace_4) == 0x000838, "Member 'UANIMBP_UMP45_C::AnimGraphNode_ComponentToLocalSpace_4' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_LayeredBoneBlend) == 0x000858, "Member 'UANIMBP_UMP45_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_ModifyBone_3) == 0x000948, "Member 'UANIMBP_UMP45_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_ComponentToLocalSpace_3) == 0x000A70, "Member 'UANIMBP_UMP45_C::AnimGraphNode_ComponentToLocalSpace_3' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_LocalToComponentSpace_3) == 0x000A90, "Member 'UANIMBP_UMP45_C::AnimGraphNode_LocalToComponentSpace_3' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_ModifyBone_2) == 0x000AB0, "Member 'UANIMBP_UMP45_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x000BD8, "Member 'UANIMBP_UMP45_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_LocalToComponentSpace_2) == 0x000BF8, "Member 'UANIMBP_UMP45_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_ModifyBone_1) == 0x000C18, "Member 'UANIMBP_UMP45_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000D40, "Member 'UANIMBP_UMP45_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000D60, "Member 'UANIMBP_UMP45_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_LocalRefPose_3) == 0x000D80, "Member 'UANIMBP_UMP45_C::AnimGraphNode_LocalRefPose_3' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_LocalRefPose_2) == 0x000D90, "Member 'UANIMBP_UMP45_C::AnimGraphNode_LocalRefPose_2' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_LocalRefPose_1) == 0x000DA0, "Member 'UANIMBP_UMP45_C::AnimGraphNode_LocalRefPose_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_ModifyBone) == 0x000DB0, "Member 'UANIMBP_UMP45_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_ComponentToLocalSpace) == 0x000ED8, "Member 'UANIMBP_UMP45_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_LocalToComponentSpace) == 0x000EF8, "Member 'UANIMBP_UMP45_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_LocalRefPose) == 0x000F18, "Member 'UANIMBP_UMP45_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, AnimGraphNode_BlendListByEnum) == 0x000F28, "Member 'UANIMBP_UMP45_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, Mag01Alpha) == 0x000F70, "Member 'UANIMBP_UMP45_C::Mag01Alpha' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, CurrentFireMode) == 0x000F78, "Member 'UANIMBP_UMP45_C::CurrentFireMode' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, bIsSemi) == 0x000F79, "Member 'UANIMBP_UMP45_C::bIsSemi' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, FoldedStockAlpha) == 0x000F80, "Member 'UANIMBP_UMP45_C::FoldedStockAlpha' has a wrong offset!");
static_assert(offsetof(UANIMBP_UMP45_C, FireSwitchBlendTime) == 0x000F88, "Member 'UANIMBP_UMP45_C::FireSwitchBlendTime' has a wrong offset!");

}


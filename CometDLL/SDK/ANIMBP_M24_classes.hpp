﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_M24

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_M24.ANIMBP_M24_C
// 0x06B0 (0x0A20 - 0x0370)
class UANIMBP_M24_C final : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x03A8(0x0048)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x03F0(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0518(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0538(0x0020)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_1;                        // 0x0558(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver;                          // 0x06F8(0x01A0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0898(0x0128)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x09C0(0x0048)()
	struct FRotator                               TestRot;                                           // 0x0A08(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_ANIMBP_M24(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_M24_C">();
	}
	static class UANIMBP_M24_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_M24_C>();
	}
};
static_assert(alignof(UANIMBP_M24_C) == 0x000010, "Wrong alignment on UANIMBP_M24_C");
static_assert(sizeof(UANIMBP_M24_C) == 0x000A20, "Wrong size on UANIMBP_M24_C");
static_assert(offsetof(UANIMBP_M24_C, UberGraphFrame) == 0x000370, "Member 'UANIMBP_M24_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, AnimBlueprintExtension_PropertyAccess) == 0x000378, "Member 'UANIMBP_M24_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, AnimBlueprintExtension_Base) == 0x000380, "Member 'UANIMBP_M24_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, AnimGraphNode_Root) == 0x000388, "Member 'UANIMBP_M24_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, AnimGraphNode_SequencePlayer) == 0x0003A8, "Member 'UANIMBP_M24_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, AnimGraphNode_ModifyBone_1) == 0x0003F0, "Member 'UANIMBP_M24_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, AnimGraphNode_LocalToComponentSpace) == 0x000518, "Member 'UANIMBP_M24_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, AnimGraphNode_ComponentToLocalSpace) == 0x000538, "Member 'UANIMBP_M24_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, AnimGraphNode_PoseDriver_1) == 0x000558, "Member 'UANIMBP_M24_C::AnimGraphNode_PoseDriver_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, AnimGraphNode_PoseDriver) == 0x0006F8, "Member 'UANIMBP_M24_C::AnimGraphNode_PoseDriver' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, AnimGraphNode_ModifyBone) == 0x000898, "Member 'UANIMBP_M24_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, AnimGraphNode_Slot) == 0x0009C0, "Member 'UANIMBP_M24_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_M24_C, TestRot) == 0x000A08, "Member 'UANIMBP_M24_C::TestRot' has a wrong offset!");

}


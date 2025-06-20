﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_W870LL

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ANIMBP_W870LL.ANIMBP_W870LL_C.AnimBlueprintGeneratedConstantData
// 0x012F (0x0130 - 0x0001)
struct ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_32;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_33;                                 // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_34;                                // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_35;                               // 0x0014(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_36;                                // 0x0040(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_37;                                 // 0x0044(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_38;                                 // 0x0045(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46[0x2];                                       // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_39;                                 // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                          __BlendProfile_40;                                 // 0x0050(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_41;                                   // 0x0058(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_42;                                 // 0x0060(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_43;                                 // 0x0061(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_44;                                 // 0x0062(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63[0x5];                                       // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_45;                                // 0x0068(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                   __StructProperty_46;                               // 0x0078(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0098(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0118(0x0018)()
};
static_assert(alignof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData) == 0x000130, "Wrong size on ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __NameProperty_32) == 0x000004, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__NameProperty_32' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __BoolProperty_33) == 0x00000C, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__BoolProperty_33' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __FloatProperty_34) == 0x000010, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__FloatProperty_34' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __StructProperty_35) == 0x000014, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__StructProperty_35' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __FloatProperty_36) == 0x000040, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__FloatProperty_36' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __EnumProperty_37) == 0x000044, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__EnumProperty_37' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __ByteProperty_38) == 0x000045, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__ByteProperty_38' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __NameProperty_39) == 0x000048, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__NameProperty_39' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __BlendProfile_40) == 0x000050, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__BlendProfile_40' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __CurveFloat_41) == 0x000058, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__CurveFloat_41' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __BoolProperty_42) == 0x000060, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__BoolProperty_42' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __EnumProperty_43) == 0x000061, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__EnumProperty_43' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __EnumProperty_44) == 0x000062, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__EnumProperty_44' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __ArrayProperty_45) == 0x000068, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__ArrayProperty_45' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, __StructProperty_46) == 0x000078, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::__StructProperty_46' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000098, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000118, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ANIMBP_W870LL.ANIMBP_W870LL_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct ANIMBP_W870LL::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_W870LL::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on ANIMBP_W870LL::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ANIMBP_W870LL::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on ANIMBP_W870LL::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ANIMBP_W870LL::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ANIMBP_W870LL::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}


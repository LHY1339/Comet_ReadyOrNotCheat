﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_Fiveseven

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ANIMBP_Fiveseven.ANIMBP_Fiveseven_C.AnimBlueprintGeneratedConstantData
// 0x0137 (0x0138 - 0x0001)
struct ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_89;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_90;                                 // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_91;                                   // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_92;                                 // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_93;                                 // 0x0021(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_94;                                // 0x0028(0x0010)(BlueprintVisible, EditFixedSize)
	bool                                          __BoolProperty_95;                                 // 0x0038(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_96;                                // 0x003C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_97;                               // 0x0040(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_98;                                // 0x006C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_99;                                 // 0x0070(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_100;                                // 0x0071(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_101;                                // 0x0072(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73[0x1];                                       // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_102;                                // 0x0074(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_103;                              // 0x0080(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00A0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0120(0x0018)()
};
static_assert(alignof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData) == 0x000138, "Wrong size on ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __NameProperty_89) == 0x000004, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__NameProperty_89' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __BlendProfile_90) == 0x000010, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__BlendProfile_90' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __CurveFloat_91) == 0x000018, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__CurveFloat_91' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __EnumProperty_92) == 0x000020, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__EnumProperty_92' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __EnumProperty_93) == 0x000021, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__EnumProperty_93' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __ArrayProperty_94) == 0x000028, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__ArrayProperty_94' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __BoolProperty_95) == 0x000038, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__BoolProperty_95' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __FloatProperty_96) == 0x00003C, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__FloatProperty_96' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __StructProperty_97) == 0x000040, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__StructProperty_97' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __FloatProperty_98) == 0x00006C, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__FloatProperty_98' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __BoolProperty_99) == 0x000070, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__BoolProperty_99' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __EnumProperty_100) == 0x000071, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__EnumProperty_100' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __ByteProperty_101) == 0x000072, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__ByteProperty_101' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __NameProperty_102) == 0x000074, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__NameProperty_102' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, __StructProperty_103) == 0x000080, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::__StructProperty_103' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000A0, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000120, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ANIMBP_Fiveseven.ANIMBP_Fiveseven_C.AnimBlueprintGeneratedMutableData
// 0x0002 (0x0003 - 0x0001)
struct ANIMBP_Fiveseven::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on ANIMBP_Fiveseven::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedMutableData) == 0x000003, "Wrong size on ANIMBP_Fiveseven::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(ANIMBP_Fiveseven::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000002, "Member 'ANIMBP_Fiveseven::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");

}


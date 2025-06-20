﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_Preview_Char_Body

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ANIMBP_Preview_Char_Body.ANIMBP_Preview_Char_Body_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

// ScriptStruct ANIMBP_Preview_Char_Body.ANIMBP_Preview_Char_Body_C.AnimBlueprintGeneratedConstantData
// 0x012F (0x0130 - 0x0001)
struct ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	bool                                          __BoolProperty_44;                                 // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_45;                                // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_46;                               // 0x0008(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_47;                                // 0x0034(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_48;                                 // 0x0038(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_49;                                 // 0x0039(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_50;                                 // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_51;                                 // 0x0044(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_52;                               // 0x0050(0x0020)(BlueprintVisible, NoDestructor)
	class UBlendProfile*                          __BlendProfile_53;                                 // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_54;                                   // 0x0078(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_55;                                 // 0x0080(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_56;                                 // 0x0081(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_57;                                 // 0x0082(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83[0x5];                                       // 0x0083(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_58;                                // 0x0088(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0098(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0118(0x0018)()
};
static_assert(alignof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData) == 0x000130, "Wrong size on ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __BoolProperty_44) == 0x000001, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__BoolProperty_44' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __FloatProperty_45) == 0x000004, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__FloatProperty_45' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __StructProperty_46) == 0x000008, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__StructProperty_46' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __FloatProperty_47) == 0x000034, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__FloatProperty_47' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __EnumProperty_48) == 0x000038, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__EnumProperty_48' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __ByteProperty_49) == 0x000039, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__ByteProperty_49' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __NameProperty_50) == 0x00003C, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__NameProperty_50' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __NameProperty_51) == 0x000044, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__NameProperty_51' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __StructProperty_52) == 0x000050, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__StructProperty_52' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __BlendProfile_53) == 0x000070, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__BlendProfile_53' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __CurveFloat_54) == 0x000078, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__CurveFloat_54' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __BoolProperty_55) == 0x000080, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__BoolProperty_55' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __EnumProperty_56) == 0x000081, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__EnumProperty_56' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __EnumProperty_57) == 0x000082, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__EnumProperty_57' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, __ArrayProperty_58) == 0x000088, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::__ArrayProperty_58' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000098, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000118, "Member 'ANIMBP_Preview_Char_Body::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}


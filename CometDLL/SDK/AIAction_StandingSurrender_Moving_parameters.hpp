﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_StandingSurrender_Moving

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AIAction_StandingSurrender_Moving.AIAction_StandingSurrender_Moving_C.ExecuteUbergraph_AIAction_StandingSurrender_Moving
// 0x0118 (0x0118 - 0x0000)
struct AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Vector_IsNearlyZero_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticController*                  K2Node_Event_Controller;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                   CallFunc_GetCharacter_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                   CallFunc_GetCharacter_ReturnValue_1;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_HasRecentlySeenSwat_OutLocation;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasRecentlySeenSwat_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACyberneticCharacter*                   CallFunc_GetCharacter_ReturnValue_2;               // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                   CallFunc_GetCharacter_ReturnValue_3;               // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACyberneticCharacter*                   CallFunc_GetCharacter_ReturnValue_4;               // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayRawVO_ReturnValue;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACyberneticCharacter*                   CallFunc_GetCharacter_ReturnValue_5;               // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsArrestedOrSurrendered_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x6];                                       // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACyberneticCharacter*                   CallFunc_GetCharacter_ReturnValue_6;               // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x00D0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EB[0x5];                                       // 0x00EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetImmediateMoveDestination_ReturnValue;  // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue_1;            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving) == 0x000008, "Wrong alignment on AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving");
static_assert(sizeof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving) == 0x000118, "Wrong size on AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, EntryPoint) == 0x000000, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::EntryPoint' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, Temp_string_Variable) == 0x000008, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_Vector_IsNearlyZero_ReturnValue) == 0x000018, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_Vector_IsNearlyZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, K2Node_Event_DeltaTime) == 0x00001C, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, K2Node_Event_Controller) == 0x000020, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::K2Node_Event_Controller' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_GetCharacter_ReturnValue) == 0x000028, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_GetCharacter_ReturnValue_1) == 0x000030, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_GetCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_HasRecentlySeenSwat_OutLocation) == 0x000038, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_HasRecentlySeenSwat_OutLocation' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_HasRecentlySeenSwat_ReturnValue) == 0x000050, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_HasRecentlySeenSwat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_GetCharacter_ReturnValue_2) == 0x000058, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_GetCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_GetCharacter_ReturnValue_3) == 0x000060, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_GetCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_Array_Add_ReturnValue) == 0x000068, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_GetCharacter_ReturnValue_4) == 0x000070, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_GetCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_PlayRawVO_ReturnValue) == 0x000078, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_PlayRawVO_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_GetCharacter_ReturnValue_5) == 0x000080, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_GetCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, K2Node_CreateDelegate_OutputDelegate) == 0x00008C, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000A0, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_IsArrestedOrSurrendered_ReturnValue) == 0x0000A8, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_IsArrestedOrSurrendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000A9, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_GetCharacter_ReturnValue_6) == 0x0000B0, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_GetCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B8, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, Temp_string_Variable_1) == 0x0000D0, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_Vector_Distance_ReturnValue) == 0x0000E0, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000E9, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_BooleanAND_ReturnValue) == 0x0000EA, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_GetImmediateMoveDestination_ReturnValue) == 0x0000F0, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_GetImmediateMoveDestination_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_Vector_Distance_ReturnValue_1) == 0x000108, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_Vector_Distance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000110, "Member 'AIAction_StandingSurrender_Moving_C_ExecuteUbergraph_AIAction_StandingSurrender_Moving::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");

// Function AIAction_StandingSurrender_Moving.AIAction_StandingSurrender_Moving_C.GetComplianceVoiceOver
// 0x0028 (0x0028 - 0x0000)
struct AIAction_StandingSurrender_Moving_C_GetComplianceVoiceOver final
{
public:
	bool                                          bUseAlternate;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NewParam;                                          // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AIAction_StandingSurrender_Moving_C_GetComplianceVoiceOver) == 0x000008, "Wrong alignment on AIAction_StandingSurrender_Moving_C_GetComplianceVoiceOver");
static_assert(sizeof(AIAction_StandingSurrender_Moving_C_GetComplianceVoiceOver) == 0x000028, "Wrong size on AIAction_StandingSurrender_Moving_C_GetComplianceVoiceOver");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_GetComplianceVoiceOver, bUseAlternate) == 0x000000, "Member 'AIAction_StandingSurrender_Moving_C_GetComplianceVoiceOver::bUseAlternate' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_GetComplianceVoiceOver, NewParam) == 0x000008, "Member 'AIAction_StandingSurrender_Moving_C_GetComplianceVoiceOver::NewParam' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_GetComplianceVoiceOver, CallFunc_SelectString_ReturnValue) == 0x000018, "Member 'AIAction_StandingSurrender_Moving_C_GetComplianceVoiceOver::CallFunc_SelectString_ReturnValue' has a wrong offset!");

// Function AIAction_StandingSurrender_Moving.AIAction_StandingSurrender_Moving_C.InitAction_Blueprint
// 0x0008 (0x0008 - 0x0000)
struct AIAction_StandingSurrender_Moving_C_InitAction_Blueprint final
{
public:
	class ACyberneticController*                  Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIAction_StandingSurrender_Moving_C_InitAction_Blueprint) == 0x000008, "Wrong alignment on AIAction_StandingSurrender_Moving_C_InitAction_Blueprint");
static_assert(sizeof(AIAction_StandingSurrender_Moving_C_InitAction_Blueprint) == 0x000008, "Wrong size on AIAction_StandingSurrender_Moving_C_InitAction_Blueprint");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_InitAction_Blueprint, Controller) == 0x000000, "Member 'AIAction_StandingSurrender_Moving_C_InitAction_Blueprint::Controller' has a wrong offset!");

// Function AIAction_StandingSurrender_Moving.AIAction_StandingSurrender_Moving_C.Tick_Blueprint
// 0x0004 (0x0004 - 0x0000)
struct AIAction_StandingSurrender_Moving_C_Tick_Blueprint final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIAction_StandingSurrender_Moving_C_Tick_Blueprint) == 0x000004, "Wrong alignment on AIAction_StandingSurrender_Moving_C_Tick_Blueprint");
static_assert(sizeof(AIAction_StandingSurrender_Moving_C_Tick_Blueprint) == 0x000004, "Wrong size on AIAction_StandingSurrender_Moving_C_Tick_Blueprint");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_Tick_Blueprint, DeltaTime) == 0x000000, "Member 'AIAction_StandingSurrender_Moving_C_Tick_Blueprint::DeltaTime' has a wrong offset!");

// Function AIAction_StandingSurrender_Moving.AIAction_StandingSurrender_Moving_C.GetMoveStyleOverride
// 0x0010 (0x0010 - 0x0000)
struct AIAction_StandingSurrender_Moving_C_GetMoveStyleOverride final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIAction_StandingSurrender_Moving_C_GetMoveStyleOverride) == 0x000004, "Wrong alignment on AIAction_StandingSurrender_Moving_C_GetMoveStyleOverride");
static_assert(sizeof(AIAction_StandingSurrender_Moving_C_GetMoveStyleOverride) == 0x000010, "Wrong size on AIAction_StandingSurrender_Moving_C_GetMoveStyleOverride");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_GetMoveStyleOverride, ReturnValue) == 0x000000, "Member 'AIAction_StandingSurrender_Moving_C_GetMoveStyleOverride::ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_GetMoveStyleOverride, CallFunc_MakeLiteralName_ReturnValue) == 0x000008, "Member 'AIAction_StandingSurrender_Moving_C_GetMoveStyleOverride::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");

// Function AIAction_StandingSurrender_Moving.AIAction_StandingSurrender_Moving_C.ShouldPerformAction
// 0x0001 (0x0001 - 0x0000)
struct AIAction_StandingSurrender_Moving_C_ShouldPerformAction final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIAction_StandingSurrender_Moving_C_ShouldPerformAction) == 0x000001, "Wrong alignment on AIAction_StandingSurrender_Moving_C_ShouldPerformAction");
static_assert(sizeof(AIAction_StandingSurrender_Moving_C_ShouldPerformAction) == 0x000001, "Wrong size on AIAction_StandingSurrender_Moving_C_ShouldPerformAction");
static_assert(offsetof(AIAction_StandingSurrender_Moving_C_ShouldPerformAction, ReturnValue) == 0x000000, "Member 'AIAction_StandingSurrender_Moving_C_ShouldPerformAction::ReturnValue' has a wrong offset!");

}


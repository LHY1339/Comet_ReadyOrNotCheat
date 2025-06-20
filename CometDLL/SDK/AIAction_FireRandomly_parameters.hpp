﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_FireRandomly

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AIAction_FireRandomly.AIAction_FireRandomly_C.ExecuteUbergraph_AIAction_FireRandomly
// 0x00E8 (0x00E8 - 0x0000)
struct AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBaseCombatActivity*                    CallFunc_GetCombatActivity_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UReadyOrNotAIConfig*                    CallFunc_Get_ReturnValue;                          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBaseCombatActivity*                    CallFunc_GetCombatActivity_ReturnValue_1;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetVector2D_ReturnValue;                  // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                   CallFunc_GetCharacter_ReturnValue;                 // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ScriptedFireAtLocation_InTime_ImplicitCast; // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly) == 0x000008, "Wrong alignment on AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly");
static_assert(sizeof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly) == 0x0000E8, "Wrong size on AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, EntryPoint) == 0x000000, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::EntryPoint' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_GetCombatActivity_ReturnValue) == 0x000008, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_GetCombatActivity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_Get_ReturnValue) == 0x000010, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_GetCombatActivity_ReturnValue_1) == 0x000018, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_GetCombatActivity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_MakeVector2D_ReturnValue) == 0x000020, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_RandomUnitVector_ReturnValue) == 0x000030, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_GetVector2D_ReturnValue) == 0x000048, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_GetVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000058, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_BreakVector2D_X) == 0x000070, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_BreakVector2D_Y) == 0x000078, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000080, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_RandomFloatInRange_ReturnValue) == 0x000098, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_GetCharacter_ReturnValue) == 0x0000A0, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_FClamp_ReturnValue) == 0x0000A8, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B0, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_Add_VectorVector_ReturnValue) == 0x0000C8, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly, CallFunc_ScriptedFireAtLocation_InTime_ImplicitCast) == 0x0000E0, "Member 'AIAction_FireRandomly_C_ExecuteUbergraph_AIAction_FireRandomly::CallFunc_ScriptedFireAtLocation_InTime_ImplicitCast' has a wrong offset!");

// Function AIAction_FireRandomly.AIAction_FireRandomly_C.ShouldPerformAction
// 0x0001 (0x0001 - 0x0000)
struct AIAction_FireRandomly_C_ShouldPerformAction final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIAction_FireRandomly_C_ShouldPerformAction) == 0x000001, "Wrong alignment on AIAction_FireRandomly_C_ShouldPerformAction");
static_assert(sizeof(AIAction_FireRandomly_C_ShouldPerformAction) == 0x000001, "Wrong size on AIAction_FireRandomly_C_ShouldPerformAction");
static_assert(offsetof(AIAction_FireRandomly_C_ShouldPerformAction, ReturnValue) == 0x000000, "Member 'AIAction_FireRandomly_C_ShouldPerformAction::ReturnValue' has a wrong offset!");

}


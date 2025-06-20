﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_TimePerformingCombatMove

#include "Basic.hpp"

#include "ReadyOrNot_structs.hpp"


namespace SDK::Params
{

// Function AC_TimePerformingCombatMove.AC_TimePerformingCombatMove_C.Score
// 0x0060 (0x0060 - 0x0000)
struct AC_TimePerformingCombatMove_C_Score final
{
public:
	struct FAIActionDecisionContext               Context;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bSuccess;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReturnValue;                                       // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseCombatActivity*                    CallFunc_GetCombatActivity_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBaseCombatMoveActivity*                CallFunc_GetCombatMoveActivity_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_InRangeB_ImplicitCast;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_InRangeA_ImplicitCast;    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_TimePerformingCombatMove_C_Score) == 0x000008, "Wrong alignment on AC_TimePerformingCombatMove_C_Score");
static_assert(sizeof(AC_TimePerformingCombatMove_C_Score) == 0x000060, "Wrong size on AC_TimePerformingCombatMove_C_Score");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, Context) == 0x000000, "Member 'AC_TimePerformingCombatMove_C_Score::Context' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, bSuccess) == 0x000010, "Member 'AC_TimePerformingCombatMove_C_Score::bSuccess' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, ReturnValue) == 0x000014, "Member 'AC_TimePerformingCombatMove_C_Score::ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, CallFunc_GetCombatActivity_ReturnValue) == 0x000018, "Member 'AC_TimePerformingCombatMove_C_Score::CallFunc_GetCombatActivity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, CallFunc_GetCombatMoveActivity_ReturnValue) == 0x000020, "Member 'AC_TimePerformingCombatMove_C_Score::CallFunc_GetCombatMoveActivity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, CallFunc_MapRangeClamped_ReturnValue) == 0x000028, "Member 'AC_TimePerformingCombatMove_C_Score::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'AC_TimePerformingCombatMove_C_Score::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, CallFunc_GetObjectClass_ReturnValue) == 0x000038, "Member 'AC_TimePerformingCombatMove_C_Score::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, CallFunc_ClassIsChildOf_ReturnValue) == 0x000040, "Member 'AC_TimePerformingCombatMove_C_Score::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000044, "Member 'AC_TimePerformingCombatMove_C_Score::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, CallFunc_MapRangeClamped_InRangeB_ImplicitCast) == 0x000048, "Member 'AC_TimePerformingCombatMove_C_Score::CallFunc_MapRangeClamped_InRangeB_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, CallFunc_MapRangeClamped_InRangeA_ImplicitCast) == 0x000050, "Member 'AC_TimePerformingCombatMove_C_Score::CallFunc_MapRangeClamped_InRangeA_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AC_TimePerformingCombatMove_C_Score, CallFunc_MapRangeClamped_Value_ImplicitCast) == 0x000058, "Member 'AC_TimePerformingCombatMove_C_Score::CallFunc_MapRangeClamped_Value_ImplicitCast' has a wrong offset!");

}


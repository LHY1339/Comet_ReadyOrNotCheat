﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_TargetBleed

#include "Basic.hpp"

#include "ReadyOrNot_structs.hpp"


namespace SDK::Params
{

// Function AC_TargetBleed.AC_TargetBleed_C.Score
// 0x0088 (0x0088 - 0x0000)
struct AC_TargetBleed_C_Score final
{
public:
	struct FAIActionDecisionContext               Context;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bSuccess;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReturnValue;                                       // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       Target;                                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBleedTime_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AReadyOrNotCharacter*                   CallFunc_GetLastTrackedTarget_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBleeding_ReturnValue;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_DynamicCast_AsPlayer_Character;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AReadyOrNotCharacter*                   CallFunc_GetTrackedTarget_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       K2Node_DynamicCast_AsPlayer_Character_1;           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_InRangeB_ImplicitCast;    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_InRangeA_ImplicitCast;    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_TargetBleed_C_Score) == 0x000008, "Wrong alignment on AC_TargetBleed_C_Score");
static_assert(sizeof(AC_TargetBleed_C_Score) == 0x000088, "Wrong size on AC_TargetBleed_C_Score");
static_assert(offsetof(AC_TargetBleed_C_Score, Context) == 0x000000, "Member 'AC_TargetBleed_C_Score::Context' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, bSuccess) == 0x000010, "Member 'AC_TargetBleed_C_Score::bSuccess' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, ReturnValue) == 0x000014, "Member 'AC_TargetBleed_C_Score::ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, Target) == 0x000018, "Member 'AC_TargetBleed_C_Score::Target' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, CallFunc_GetBleedTime_ReturnValue) == 0x000020, "Member 'AC_TargetBleed_C_Score::CallFunc_GetBleedTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, CallFunc_GetLastTrackedTarget_ReturnValue) == 0x000028, "Member 'AC_TargetBleed_C_Score::CallFunc_GetLastTrackedTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, CallFunc_IsBleeding_ReturnValue) == 0x000030, "Member 'AC_TargetBleed_C_Score::CallFunc_IsBleeding_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, K2Node_DynamicCast_AsPlayer_Character) == 0x000038, "Member 'AC_TargetBleed_C_Score::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'AC_TargetBleed_C_Score::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, CallFunc_GetTrackedTarget_ReturnValue) == 0x000048, "Member 'AC_TargetBleed_C_Score::CallFunc_GetTrackedTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, K2Node_DynamicCast_AsPlayer_Character_1) == 0x000050, "Member 'AC_TargetBleed_C_Score::K2Node_DynamicCast_AsPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'AC_TargetBleed_C_Score::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, CallFunc_MapRangeClamped_ReturnValue) == 0x000060, "Member 'AC_TargetBleed_C_Score::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000068, "Member 'AC_TargetBleed_C_Score::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, CallFunc_MapRangeClamped_Value_ImplicitCast) == 0x000070, "Member 'AC_TargetBleed_C_Score::CallFunc_MapRangeClamped_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, CallFunc_MapRangeClamped_InRangeB_ImplicitCast) == 0x000078, "Member 'AC_TargetBleed_C_Score::CallFunc_MapRangeClamped_InRangeB_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AC_TargetBleed_C_Score, CallFunc_MapRangeClamped_InRangeA_ImplicitCast) == 0x000080, "Member 'AC_TargetBleed_C_Score::CallFunc_MapRangeClamped_InRangeA_ImplicitCast' has a wrong offset!");

}


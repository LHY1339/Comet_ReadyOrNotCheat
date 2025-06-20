﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_QuakeColorCodes

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_QuakeColorCodes.BP_QuakeColorCodes_C.Quake_ConvertColorCodes
// 0x0088 (0x0088 - 0x0000)
struct BP_QuakeColorCodes_C_Quake_ConvertColorCodes final
{
public:
	class FString                                 StrIn;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 StrOut;                                            // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 WorkStr;                                           // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue_1;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue_2;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue_3;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue_4;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue_5;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue_6;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue_7;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue_8;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue_9;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue_10;             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes) == 0x000008, "Wrong alignment on BP_QuakeColorCodes_C_Quake_ConvertColorCodes");
static_assert(sizeof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes) == 0x000088, "Wrong size on BP_QuakeColorCodes_C_Quake_ConvertColorCodes");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, StrIn) == 0x000000, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::StrIn' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, __WorldContext) == 0x000010, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, StrOut) == 0x000018, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::StrOut' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, WorkStr) == 0x000028, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::WorkStr' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_ReplaceInline_ReturnValue) == 0x000048, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_ReplaceInline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000050, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_ReplaceInline_ReturnValue_1) == 0x000060, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_ReplaceInline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_ReplaceInline_ReturnValue_2) == 0x000064, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_ReplaceInline_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_ReplaceInline_ReturnValue_3) == 0x000068, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_ReplaceInline_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_ReplaceInline_ReturnValue_4) == 0x00006C, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_ReplaceInline_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_ReplaceInline_ReturnValue_5) == 0x000070, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_ReplaceInline_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_ReplaceInline_ReturnValue_6) == 0x000074, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_ReplaceInline_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_ReplaceInline_ReturnValue_7) == 0x000078, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_ReplaceInline_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_ReplaceInline_ReturnValue_8) == 0x00007C, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_ReplaceInline_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_ReplaceInline_ReturnValue_9) == 0x000080, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_ReplaceInline_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_QuakeColorCodes_C_Quake_ConvertColorCodes, CallFunc_ReplaceInline_ReturnValue_10) == 0x000084, "Member 'BP_QuakeColorCodes_C_Quake_ConvertColorCodes::CallFunc_ReplaceInline_ReturnValue_10' has a wrong offset!");

}


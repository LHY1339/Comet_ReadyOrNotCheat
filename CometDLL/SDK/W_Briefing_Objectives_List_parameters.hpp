﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_Objectives_List

#include "Basic.hpp"

#include "ST_SubObjective_Entry_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.ExecuteUbergraph_W_Briefing_Objectives_List
// 0x01B0 (0x01B0 - 0x0000)
struct W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable_1;                              // 0x0028(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Objective_C*                         CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AObjective*>                     K2Node_CustomEvent_Objectives;                     // 0x0050(0x0010)(ConstParm, ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AObjective*                             CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x0070(0x0018)()
	bool                                          CallFunc_IsObjectiveCompleted_ReturnValue;         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FST_SubObjective_Entry>         K2Node_CustomEvent_Challenges;                     // 0x00A0(0x0010)(ConstParm, ReferenceParm)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00E0(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0130(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0190(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List) == 0x000008, "Wrong alignment on W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List");
static_assert(sizeof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List) == 0x0001B0, "Wrong size on W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, EntryPoint) == 0x000000, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, Temp_text_Variable) == 0x000008, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, Temp_int_Array_Index_Variable) == 0x000020, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, Temp_int_Variable) == 0x000024, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, Temp_text_Variable_1) == 0x000028, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, K2Node_Event_IsDesignTime) == 0x000040, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_Create_ReturnValue) == 0x000048, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, K2Node_CustomEvent_Objectives) == 0x000050, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::K2Node_CustomEvent_Objectives' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, Temp_bool_Variable) == 0x000060, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_Array_Get_Item) == 0x000068, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, K2Node_Select_Default) == 0x000070, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_IsObjectiveCompleted_ReturnValue) == 0x000088, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_IsObjectiveCompleted_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_GetObjectClass_ReturnValue) == 0x000090, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, K2Node_CustomEvent_Challenges) == 0x0000A0, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::K2Node_CustomEvent_Challenges' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0000B0, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, Temp_int_Variable_1) == 0x0000B8, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, Temp_int_Loop_Counter_Variable) == 0x0000BC, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_Add_IntInt_ReturnValue) == 0x0000C0, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C8, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_Conv_IntToInt64_ReturnValue) == 0x0000D0, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000D8, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, K2Node_MakeStruct_FormatArgumentData) == 0x0000E0, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, K2Node_MakeStruct_FormatArgumentData_1) == 0x000130, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, K2Node_MakeArray_Array) == 0x000180, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_Format_ReturnValue) == 0x000190, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001A8, "Member 'W_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitChallenges
// 0x0010 (0x0010 - 0x0000)
struct W_Briefing_Objectives_List_C_InitChallenges final
{
public:
	TArray<struct FST_SubObjective_Entry>         Challenges;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_Briefing_Objectives_List_C_InitChallenges) == 0x000008, "Wrong alignment on W_Briefing_Objectives_List_C_InitChallenges");
static_assert(sizeof(W_Briefing_Objectives_List_C_InitChallenges) == 0x000010, "Wrong size on W_Briefing_Objectives_List_C_InitChallenges");
static_assert(offsetof(W_Briefing_Objectives_List_C_InitChallenges, Challenges) == 0x000000, "Member 'W_Briefing_Objectives_List_C_InitChallenges::Challenges' has a wrong offset!");

// Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitObjectives
// 0x0010 (0x0010 - 0x0000)
struct W_Briefing_Objectives_List_C_InitObjectives final
{
public:
	TArray<class AObjective*>                     Objectives_0;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_Briefing_Objectives_List_C_InitObjectives) == 0x000008, "Wrong alignment on W_Briefing_Objectives_List_C_InitObjectives");
static_assert(sizeof(W_Briefing_Objectives_List_C_InitObjectives) == 0x000010, "Wrong size on W_Briefing_Objectives_List_C_InitObjectives");
static_assert(offsetof(W_Briefing_Objectives_List_C_InitObjectives, Objectives_0) == 0x000000, "Member 'W_Briefing_Objectives_List_C_InitObjectives::Objectives_0' has a wrong offset!");

// Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Briefing_Objectives_List_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Objectives_List_C_PreConstruct) == 0x000001, "Wrong alignment on W_Briefing_Objectives_List_C_PreConstruct");
static_assert(sizeof(W_Briefing_Objectives_List_C_PreConstruct) == 0x000001, "Wrong size on W_Briefing_Objectives_List_C_PreConstruct");
static_assert(offsetof(W_Briefing_Objectives_List_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Briefing_Objectives_List_C_PreConstruct::IsDesignTime' has a wrong offset!");

}


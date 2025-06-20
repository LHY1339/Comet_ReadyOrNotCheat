﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BulletImpactDebug

#include "Basic.hpp"


namespace SDK::Params
{

// Function BulletImpactDebug.BulletImpactDebug_C.AddDebugText
// 0x0048 (0x0048 - 0x0000)
struct BulletImpactDebug_C_AddDebugText final
{
public:
	class FString                                 NewText;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBulletImpactDebugText_C*               CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BulletImpactDebug_C_AddDebugText) == 0x000008, "Wrong alignment on BulletImpactDebug_C_AddDebugText");
static_assert(sizeof(BulletImpactDebug_C_AddDebugText) == 0x000048, "Wrong size on BulletImpactDebug_C_AddDebugText");
static_assert(offsetof(BulletImpactDebug_C_AddDebugText, NewText) == 0x000000, "Member 'BulletImpactDebug_C_AddDebugText::NewText' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_AddDebugText, ReturnValue) == 0x000010, "Member 'BulletImpactDebug_C_AddDebugText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_AddDebugText, CallFunc_Create_ReturnValue) == 0x000018, "Member 'BulletImpactDebug_C_AddDebugText::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_AddDebugText, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'BulletImpactDebug_C_AddDebugText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_AddDebugText, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000038, "Member 'BulletImpactDebug_C_AddDebugText::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_AddDebugText, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BulletImpactDebug_C_AddDebugText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BulletImpactDebug.BulletImpactDebug_C.ExecuteUbergraph_BulletImpactDebug
// 0x0090 (0x0090 - 0x0000)
struct BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_NewTitle;                             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	int32                                         K2Node_Event_ID;                                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_NewText;                              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0050(0x0018)()
	TArray<class UBulletImpactDebugText_C*>       CallFunc_WidgetGetChildrenOfClass_ChildWidgets;    // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBulletImpactDebugText_C*               CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug) == 0x000008, "Wrong alignment on BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug");
static_assert(sizeof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug) == 0x000090, "Wrong size on BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, EntryPoint) == 0x000000, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::EntryPoint' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, K2Node_Event_NewTitle) == 0x000010, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::K2Node_Event_NewTitle' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, K2Node_Event_ID) == 0x000038, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::K2Node_Event_ID' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, K2Node_Event_NewText) == 0x000040, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::K2Node_Event_NewText' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000050, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, CallFunc_WidgetGetChildrenOfClass_ChildWidgets) == 0x000068, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::CallFunc_WidgetGetChildrenOfClass_ChildWidgets' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, CallFunc_Array_Get_Item) == 0x000080, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, CallFunc_Less_IntInt_ReturnValue) == 0x000088, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000089, "Member 'BulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BulletImpactDebug.BulletImpactDebug_C.SetDebugText
// 0x0018 (0x0018 - 0x0000)
struct BulletImpactDebug_C_SetDebugText final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NewText;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BulletImpactDebug_C_SetDebugText) == 0x000008, "Wrong alignment on BulletImpactDebug_C_SetDebugText");
static_assert(sizeof(BulletImpactDebug_C_SetDebugText) == 0x000018, "Wrong size on BulletImpactDebug_C_SetDebugText");
static_assert(offsetof(BulletImpactDebug_C_SetDebugText, ID) == 0x000000, "Member 'BulletImpactDebug_C_SetDebugText::ID' has a wrong offset!");
static_assert(offsetof(BulletImpactDebug_C_SetDebugText, NewText) == 0x000008, "Member 'BulletImpactDebug_C_SetDebugText::NewText' has a wrong offset!");

// Function BulletImpactDebug.BulletImpactDebug_C.SetDebugTitle
// 0x0010 (0x0010 - 0x0000)
struct BulletImpactDebug_C_SetDebugTitle final
{
public:
	class FString                                 NewTitle;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BulletImpactDebug_C_SetDebugTitle) == 0x000008, "Wrong alignment on BulletImpactDebug_C_SetDebugTitle");
static_assert(sizeof(BulletImpactDebug_C_SetDebugTitle) == 0x000010, "Wrong size on BulletImpactDebug_C_SetDebugTitle");
static_assert(offsetof(BulletImpactDebug_C_SetDebugTitle, NewTitle) == 0x000000, "Member 'BulletImpactDebug_C_SetDebugTitle::NewTitle' has a wrong offset!");

}


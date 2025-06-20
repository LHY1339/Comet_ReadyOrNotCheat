﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TabListWidget

#include "Basic.hpp"

#include "ST_TabListEntry_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_TabListWidget.W_TabListWidget_C.AddTab
// 0x0188 (0x0188 - 0x0000)
struct W_TabListWidget_C_AddTab final
{
public:
	class UW_Button_C*                            Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UW_Button_C* Button)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_IDForButton_Name;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RegisterTab_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0050)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TabListEntry                       K2Node_MakeStruct_ST_TabListEntry;                 // 0x00A8(0x0018)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*            CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00E8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0100(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0150(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0160(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabListWidget_C_AddTab) == 0x000008, "Wrong alignment on W_TabListWidget_C_AddTab");
static_assert(sizeof(W_TabListWidget_C_AddTab) == 0x000188, "Wrong size on W_TabListWidget_C_AddTab");
static_assert(offsetof(W_TabListWidget_C_AddTab, Button) == 0x000000, "Member 'W_TabListWidget_C_AddTab::Button' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'W_TabListWidget_C_AddTab::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_IDForButton_Name) == 0x000018, "Member 'W_TabListWidget_C_AddTab::CallFunc_IDForButton_Name' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_RegisterTab_ReturnValue) == 0x000020, "Member 'W_TabListWidget_C_AddTab::CallFunc_RegisterTab_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_Conv_NameToString_ReturnValue) == 0x000028, "Member 'W_TabListWidget_C_AddTab::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'W_TabListWidget_C_AddTab::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'W_TabListWidget_C_AddTab::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_Array_Add_ReturnValue) == 0x0000A0, "Member 'W_TabListWidget_C_AddTab::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, K2Node_MakeStruct_ST_TabListEntry) == 0x0000A8, "Member 'W_TabListWidget_C_AddTab::K2Node_MakeStruct_ST_TabListEntry' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_GetReadyOrNotPlayerController_ReturnValue) == 0x0000C0, "Member 'W_TabListWidget_C_AddTab::CallFunc_GetReadyOrNotPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x0000C8, "Member 'W_TabListWidget_C_AddTab::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_GetCurrentInputType_ReturnValue) == 0x0000D0, "Member 'W_TabListWidget_C_AddTab::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_GetDisplayName_ReturnValue) == 0x0000D8, "Member 'W_TabListWidget_C_AddTab::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000E8, "Member 'W_TabListWidget_C_AddTab::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, K2Node_MakeStruct_FormatArgumentData_1) == 0x000100, "Member 'W_TabListWidget_C_AddTab::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, K2Node_MakeArray_Array) == 0x000150, "Member 'W_TabListWidget_C_AddTab::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_Format_ReturnValue) == 0x000160, "Member 'W_TabListWidget_C_AddTab::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_AddTab, CallFunc_Conv_TextToString_ReturnValue) == 0x000178, "Member 'W_TabListWidget_C_AddTab::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function W_TabListWidget.W_TabListWidget_C.ClearTabs
// 0x0018 (0x0018 - 0x0000)
struct W_TabListWidget_C_ClearTabs final
{
public:
	class AReadyOrNotPlayerController*            CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabListWidget_C_ClearTabs) == 0x000008, "Wrong alignment on W_TabListWidget_C_ClearTabs");
static_assert(sizeof(W_TabListWidget_C_ClearTabs) == 0x000018, "Wrong size on W_TabListWidget_C_ClearTabs");
static_assert(offsetof(W_TabListWidget_C_ClearTabs, CallFunc_GetReadyOrNotPlayerController_ReturnValue) == 0x000000, "Member 'W_TabListWidget_C_ClearTabs::CallFunc_GetReadyOrNotPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ClearTabs, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000008, "Member 'W_TabListWidget_C_ClearTabs::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ClearTabs, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'W_TabListWidget_C_ClearTabs::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");

// Function W_TabListWidget.W_TabListWidget_C.ExecuteUbergraph_W_TabListWidget
// 0x0108 (0x0108 - 0x0000)
struct W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButtonBase* Button, bool Selected)> K2Node_CreateDelegate_OutputDelegate; // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_CustomEvent_Button;                         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Selected;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_TabNameID;                            // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_Event_TabButton;                            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_FindIDForButton_ID;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_TabNameID_1;                          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_Event_TabButton_1;                          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AReadyOrNotPlayerController*            CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TabListEntry                       CallFunc_Map_Find_Value;                           // 0x0070(0x0018)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;          // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TabListEntry                       CallFunc_Map_Find_Value_1;                         // 0x00A0(0x0018)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FST_TabListEntry                       K2Node_SetFieldsInStruct_StructOut;                // 0x00C8(0x0018)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue_1;        // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TabListEntry                       CallFunc_Map_Find_Value_2;                         // 0x00E8(0x0018)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget) == 0x000008, "Wrong alignment on W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget");
static_assert(sizeof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget) == 0x000108, "Wrong size on W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, EntryPoint) == 0x000000, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, K2Node_CustomEvent_Button) == 0x000018, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, K2Node_CustomEvent_Selected) == 0x000020, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, K2Node_Event_TabNameID) == 0x000024, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::K2Node_Event_TabNameID' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, K2Node_Event_TabButton) == 0x000030, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::K2Node_Event_TabButton' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_FindIDForButton_ID) == 0x000038, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_FindIDForButton_ID' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, K2Node_Event_TabNameID_1) == 0x000040, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::K2Node_Event_TabNameID_1' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, K2Node_Event_TabButton_1) == 0x000048, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::K2Node_Event_TabButton_1' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, K2Node_CustomEvent_bNewInputType) == 0x000050, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_GetReadyOrNotPlayerController_ReturnValue) == 0x000058, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_GetReadyOrNotPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000060, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_GetCurrentInputType_ReturnValue) == 0x000068, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_Map_Find_Value) == 0x000070, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_Map_Find_ReturnValue) == 0x000088, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_Map_Remove_ReturnValue) == 0x000089, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x00008C, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_Map_Find_Value_1) == 0x0000A0, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_Map_Find_ReturnValue_1) == 0x0000B8, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0000C0, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, K2Node_SetFieldsInStruct_StructOut) == 0x0000C8, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_GetCurrentInputType_ReturnValue_1) == 0x0000E0, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_GetCurrentInputType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_Map_Find_Value_2) == 0x0000E8, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget, CallFunc_Map_Find_ReturnValue_2) == 0x000100, "Member 'W_TabListWidget_C_ExecuteUbergraph_W_TabListWidget::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");

// Function W_TabListWidget.W_TabListWidget_C.FindIDForButton
// 0x0050 (0x0050 - 0x0000)
struct W_TabListWidget_C_FindIDForButton final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   ID;                                                // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TabListEntry                       CallFunc_Map_Find_Value;                           // 0x0030(0x0018)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabListWidget_C_FindIDForButton) == 0x000008, "Wrong alignment on W_TabListWidget_C_FindIDForButton");
static_assert(sizeof(W_TabListWidget_C_FindIDForButton) == 0x000050, "Wrong size on W_TabListWidget_C_FindIDForButton");
static_assert(offsetof(W_TabListWidget_C_FindIDForButton, Button) == 0x000000, "Member 'W_TabListWidget_C_FindIDForButton::Button' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_FindIDForButton, ID) == 0x000008, "Member 'W_TabListWidget_C_FindIDForButton::ID' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_FindIDForButton, Temp_int_Array_Index_Variable) == 0x000010, "Member 'W_TabListWidget_C_FindIDForButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_FindIDForButton, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'W_TabListWidget_C_FindIDForButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_FindIDForButton, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'W_TabListWidget_C_FindIDForButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_FindIDForButton, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'W_TabListWidget_C_FindIDForButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_FindIDForButton, CallFunc_Array_Get_Item) == 0x000020, "Member 'W_TabListWidget_C_FindIDForButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_FindIDForButton, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'W_TabListWidget_C_FindIDForButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_FindIDForButton, CallFunc_Map_Find_Value) == 0x000030, "Member 'W_TabListWidget_C_FindIDForButton::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_FindIDForButton, CallFunc_Map_Find_ReturnValue) == 0x000048, "Member 'W_TabListWidget_C_FindIDForButton::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_FindIDForButton, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000049, "Member 'W_TabListWidget_C_FindIDForButton::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function W_TabListWidget.W_TabListWidget_C.HandleTabCreation
// 0x0010 (0x0010 - 0x0000)
struct W_TabListWidget_C_HandleTabCreation final
{
public:
	class FName                                   TabNameID;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      TabButton;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabListWidget_C_HandleTabCreation) == 0x000008, "Wrong alignment on W_TabListWidget_C_HandleTabCreation");
static_assert(sizeof(W_TabListWidget_C_HandleTabCreation) == 0x000010, "Wrong size on W_TabListWidget_C_HandleTabCreation");
static_assert(offsetof(W_TabListWidget_C_HandleTabCreation, TabNameID) == 0x000000, "Member 'W_TabListWidget_C_HandleTabCreation::TabNameID' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_HandleTabCreation, TabButton) == 0x000008, "Member 'W_TabListWidget_C_HandleTabCreation::TabButton' has a wrong offset!");

// Function W_TabListWidget.W_TabListWidget_C.HandleTabRemoval
// 0x0010 (0x0010 - 0x0000)
struct W_TabListWidget_C_HandleTabRemoval final
{
public:
	class FName                                   TabNameID;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      TabButton;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabListWidget_C_HandleTabRemoval) == 0x000008, "Wrong alignment on W_TabListWidget_C_HandleTabRemoval");
static_assert(sizeof(W_TabListWidget_C_HandleTabRemoval) == 0x000010, "Wrong size on W_TabListWidget_C_HandleTabRemoval");
static_assert(offsetof(W_TabListWidget_C_HandleTabRemoval, TabNameID) == 0x000000, "Member 'W_TabListWidget_C_HandleTabRemoval::TabNameID' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_HandleTabRemoval, TabButton) == 0x000008, "Member 'W_TabListWidget_C_HandleTabRemoval::TabButton' has a wrong offset!");

// Function W_TabListWidget.W_TabListWidget_C.IDForButton
// 0x0028 (0x0028 - 0x0000)
struct W_TabListWidget_C_IDForButton final
{
public:
	class UW_Button_C*                            Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   Name_0;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabListWidget_C_IDForButton) == 0x000008, "Wrong alignment on W_TabListWidget_C_IDForButton");
static_assert(sizeof(W_TabListWidget_C_IDForButton) == 0x000028, "Wrong size on W_TabListWidget_C_IDForButton");
static_assert(offsetof(W_TabListWidget_C_IDForButton, Button) == 0x000000, "Member 'W_TabListWidget_C_IDForButton::Button' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_IDForButton, Name_0) == 0x000008, "Member 'W_TabListWidget_C_IDForButton::Name_0' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_IDForButton, CallFunc_Conv_TextToString_ReturnValue) == 0x000010, "Member 'W_TabListWidget_C_IDForButton::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_IDForButton, CallFunc_Conv_StringToName_ReturnValue) == 0x000020, "Member 'W_TabListWidget_C_IDForButton::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function W_TabListWidget.W_TabListWidget_C.InputMethodChanged
// 0x0010 (0x0010 - 0x0000)
struct W_TabListWidget_C_InputMethodChanged final
{
public:
	ECommonInputType                              InputType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabListWidget_C_InputMethodChanged) == 0x000004, "Wrong alignment on W_TabListWidget_C_InputMethodChanged");
static_assert(sizeof(W_TabListWidget_C_InputMethodChanged) == 0x000010, "Wrong size on W_TabListWidget_C_InputMethodChanged");
static_assert(offsetof(W_TabListWidget_C_InputMethodChanged, InputType) == 0x000000, "Member 'W_TabListWidget_C_InputMethodChanged::InputType' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_InputMethodChanged, Temp_byte_Variable) == 0x000001, "Member 'W_TabListWidget_C_InputMethodChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_InputMethodChanged, Temp_byte_Variable_1) == 0x000002, "Member 'W_TabListWidget_C_InputMethodChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_InputMethodChanged, Temp_byte_Variable_2) == 0x000003, "Member 'W_TabListWidget_C_InputMethodChanged::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_InputMethodChanged, Temp_byte_Variable_3) == 0x000004, "Member 'W_TabListWidget_C_InputMethodChanged::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_InputMethodChanged, Temp_byte_Variable_4) == 0x000005, "Member 'W_TabListWidget_C_InputMethodChanged::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_InputMethodChanged, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'W_TabListWidget_C_InputMethodChanged::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_InputMethodChanged, K2Node_Select_Default) == 0x00000C, "Member 'W_TabListWidget_C_InputMethodChanged::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_InputMethodChanged, CallFunc_Greater_IntInt_ReturnValue) == 0x00000D, "Member 'W_TabListWidget_C_InputMethodChanged::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function W_TabListWidget.W_TabListWidget_C.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct W_TabListWidget_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabListWidget_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on W_TabListWidget_C_OnInputMethodChanged");
static_assert(sizeof(W_TabListWidget_C_OnInputMethodChanged) == 0x000001, "Wrong size on W_TabListWidget_C_OnInputMethodChanged");
static_assert(offsetof(W_TabListWidget_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'W_TabListWidget_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");

// Function W_TabListWidget.W_TabListWidget_C.Select Tab
// 0x0018 (0x0018 - 0x0000)
struct W_TabListWidget_C_Select_Tab final
{
public:
	class UW_Button_C*                            Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_IDForButton_Name;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectTabByID_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabListWidget_C_Select_Tab) == 0x000008, "Wrong alignment on W_TabListWidget_C_Select_Tab");
static_assert(sizeof(W_TabListWidget_C_Select_Tab) == 0x000018, "Wrong size on W_TabListWidget_C_Select_Tab");
static_assert(offsetof(W_TabListWidget_C_Select_Tab, Button) == 0x000000, "Member 'W_TabListWidget_C_Select_Tab::Button' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_Select_Tab, CallFunc_IDForButton_Name) == 0x000008, "Member 'W_TabListWidget_C_Select_Tab::CallFunc_IDForButton_Name' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_Select_Tab, CallFunc_SelectTabByID_ReturnValue) == 0x000010, "Member 'W_TabListWidget_C_Select_Tab::CallFunc_SelectTabByID_ReturnValue' has a wrong offset!");

// Function W_TabListWidget.W_TabListWidget_C.TabSelected
// 0x0010 (0x0010 - 0x0000)
struct W_TabListWidget_C_TabSelected final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabListWidget_C_TabSelected) == 0x000008, "Wrong alignment on W_TabListWidget_C_TabSelected");
static_assert(sizeof(W_TabListWidget_C_TabSelected) == 0x000010, "Wrong size on W_TabListWidget_C_TabSelected");
static_assert(offsetof(W_TabListWidget_C_TabSelected, Button) == 0x000000, "Member 'W_TabListWidget_C_TabSelected::Button' has a wrong offset!");
static_assert(offsetof(W_TabListWidget_C_TabSelected, Selected) == 0x000008, "Member 'W_TabListWidget_C_TabSelected::Selected' has a wrong offset!");

}


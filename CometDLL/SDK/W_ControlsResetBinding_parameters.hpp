﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ControlsResetBinding

#include "Basic.hpp"

#include "InputRemapping_structs.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK::Params
{

// Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Action
// 0x0098 (0x0098 - 0x0000)
struct W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action final
{
public:
	bool                                          IsNoneKeyAssigned;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EActionMappingFilter>                  K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	struct FActionMappingStruct                   K2Node_MakeStruct_ActionMappingStruct;             // 0x0020(0x0028)()
	bool                                          CallFunc_GetAllActionMappings_ReturnValue;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActionMappingStruct>           CallFunc_GetAllActionMappings_ActionMappings;      // 0x0050(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionMappingStruct                   CallFunc_Array_Get_Item;                           // 0x0068(0x0028)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action) == 0x000008, "Wrong alignment on W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action");
static_assert(sizeof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action) == 0x000098, "Wrong size on W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, IsNoneKeyAssigned) == 0x000000, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::IsNoneKeyAssigned' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, Temp_int_Array_Index_Variable) == 0x000004, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, K2Node_MakeArray_Array) == 0x000010, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, K2Node_MakeStruct_ActionMappingStruct) == 0x000020, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::K2Node_MakeStruct_ActionMappingStruct' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, CallFunc_GetAllActionMappings_ReturnValue) == 0x000048, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::CallFunc_GetAllActionMappings_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, CallFunc_GetAllActionMappings_ActionMappings) == 0x000050, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::CallFunc_GetAllActionMappings_ActionMappings' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, CallFunc_Array_Get_Item) == 0x000068, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000091, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

// Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Axis
// 0x0098 (0x0098 - 0x0000)
struct W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis final
{
public:
	bool                                          IsNoneKeyAssigned;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EAxisMappingFilter>                    K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	struct FAxisMappingStruct                     K2Node_MakeStruct_AxisMappingStruct;               // 0x0020(0x0028)()
	bool                                          CallFunc_GetAllAxisMappings_ReturnValue;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAxisMappingStruct>             CallFunc_GetAllAxisMappings_AxisMappings;          // 0x0050(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAxisMappingStruct                     CallFunc_Array_Get_Item;                           // 0x0068(0x0028)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis) == 0x000008, "Wrong alignment on W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis");
static_assert(sizeof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis) == 0x000098, "Wrong size on W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, IsNoneKeyAssigned) == 0x000000, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::IsNoneKeyAssigned' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, Temp_int_Array_Index_Variable) == 0x000004, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, K2Node_MakeArray_Array) == 0x000010, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, K2Node_MakeStruct_AxisMappingStruct) == 0x000020, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::K2Node_MakeStruct_AxisMappingStruct' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, CallFunc_GetAllAxisMappings_ReturnValue) == 0x000048, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::CallFunc_GetAllAxisMappings_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, CallFunc_GetAllAxisMappings_AxisMappings) == 0x000050, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::CallFunc_GetAllAxisMappings_AxisMappings' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, CallFunc_Array_Get_Item) == 0x000068, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000091, "Member 'W_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

// Function W_ControlsResetBinding.W_ControlsResetBinding_C.ExecuteUbergraph_W_ControlsResetBinding
// 0x0030 (0x0030 - 0x0000)
struct W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UW_ControlsBind_C*                      CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_1;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding) == 0x000008, "Wrong alignment on W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding");
static_assert(sizeof(W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding) == 0x000030, "Wrong size on W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding");
static_assert(offsetof(W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding, EntryPoint) == 0x000000, "Member 'W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding, Temp_int_Array_Index_Variable) == 0x000008, "Member 'W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding, CallFunc_PlayEvent2D_ReturnValue) == 0x000010, "Member 'W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding, CallFunc_Array_Get_Item) == 0x000018, "Member 'W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding, CallFunc_PlayEvent2D_ReturnValue_1) == 0x000020, "Member 'W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding::CallFunc_PlayEvent2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'W_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function W_ControlsResetBinding.W_ControlsResetBinding_C.Remove Key Bind
// 0x0018 (0x0018 - 0x0000)
struct W_ControlsResetBinding_C_Remove_Key_Bind final
{
public:
	class UW_ControlsBind_C*                      Control_Bind;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                      TempControlsBind;                                  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveActionMapping_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveAxisMapping_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ControlsResetBinding_C_Remove_Key_Bind) == 0x000008, "Wrong alignment on W_ControlsResetBinding_C_Remove_Key_Bind");
static_assert(sizeof(W_ControlsResetBinding_C_Remove_Key_Bind) == 0x000018, "Wrong size on W_ControlsResetBinding_C_Remove_Key_Bind");
static_assert(offsetof(W_ControlsResetBinding_C_Remove_Key_Bind, Control_Bind) == 0x000000, "Member 'W_ControlsResetBinding_C_Remove_Key_Bind::Control_Bind' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Remove_Key_Bind, TempControlsBind) == 0x000008, "Member 'W_ControlsResetBinding_C_Remove_Key_Bind::TempControlsBind' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Remove_Key_Bind, CallFunc_RemoveActionMapping_ReturnValue) == 0x000010, "Member 'W_ControlsResetBinding_C_Remove_Key_Bind::CallFunc_RemoveActionMapping_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Remove_Key_Bind, CallFunc_RemoveAxisMapping_ReturnValue) == 0x000011, "Member 'W_ControlsResetBinding_C_Remove_Key_Bind::CallFunc_RemoveAxisMapping_ReturnValue' has a wrong offset!");

// Function W_ControlsResetBinding.W_ControlsResetBinding_C.SetDisabled
// 0x0002 (0x0002 - 0x0000)
struct W_ControlsResetBinding_C_SetDisabled final
{
public:
	bool                                          Disabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ControlsResetBinding_C_SetDisabled) == 0x000001, "Wrong alignment on W_ControlsResetBinding_C_SetDisabled");
static_assert(sizeof(W_ControlsResetBinding_C_SetDisabled) == 0x000002, "Wrong size on W_ControlsResetBinding_C_SetDisabled");
static_assert(offsetof(W_ControlsResetBinding_C_SetDisabled, Disabled) == 0x000000, "Member 'W_ControlsResetBinding_C_SetDisabled::Disabled' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_SetDisabled, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'W_ControlsResetBinding_C_SetDisabled::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function W_ControlsResetBinding.W_ControlsResetBinding_C.Update Input Mappings
// 0x0038 (0x0038 - 0x0000)
struct W_ControlsResetBinding_C_Update_Input_Mappings final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveActionMapping_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveAxisMapping_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ControlsResetBinding_C_Update_Input_Mappings) == 0x000004, "Wrong alignment on W_ControlsResetBinding_C_Update_Input_Mappings");
static_assert(sizeof(W_ControlsResetBinding_C_Update_Input_Mappings) == 0x000038, "Wrong size on W_ControlsResetBinding_C_Update_Input_Mappings");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, Temp_int_Array_Index_Variable) == 0x000008, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_Array_Length_ReturnValue_1) == 0x000014, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000019, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_RemoveActionMapping_ReturnValue) == 0x00001A, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_RemoveActionMapping_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, Temp_int_Loop_Counter_Variable_1) == 0x00001C, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_Array_Length_ReturnValue_2) == 0x000020, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_RemoveAxisMapping_ReturnValue) == 0x00002C, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_RemoveAxisMapping_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_Array_Length_ReturnValue_3) == 0x000030, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_ControlsResetBinding_C_Update_Input_Mappings, CallFunc_Less_IntInt_ReturnValue_1) == 0x000034, "Member 'W_ControlsResetBinding_C_Update_Input_Mappings::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}


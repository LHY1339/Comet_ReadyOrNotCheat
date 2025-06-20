﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Roster_OfficerEvents

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_Roster_OfficerEvents.W_Roster_OfficerEvents_C.UpdateEvents
// 0x00E0 (0x00E0 - 0x0000)
struct W_Roster_OfficerEvents_C_UpdateEvents final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0058(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	bool                                          CallFunc_TextIsNotEmpty_NotEmpty;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Roster_OfficerEvents_C_UpdateEvents) == 0x000008, "Wrong alignment on W_Roster_OfficerEvents_C_UpdateEvents");
static_assert(sizeof(W_Roster_OfficerEvents_C_UpdateEvents) == 0x0000E0, "Wrong size on W_Roster_OfficerEvents_C_UpdateEvents");
static_assert(offsetof(W_Roster_OfficerEvents_C_UpdateEvents, Temp_bool_Variable) == 0x000000, "Member 'W_Roster_OfficerEvents_C_UpdateEvents::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Roster_OfficerEvents_C_UpdateEvents, Temp_byte_Variable) == 0x000001, "Member 'W_Roster_OfficerEvents_C_UpdateEvents::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_Roster_OfficerEvents_C_UpdateEvents, Temp_byte_Variable_1) == 0x000002, "Member 'W_Roster_OfficerEvents_C_UpdateEvents::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Roster_OfficerEvents_C_UpdateEvents, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'W_Roster_OfficerEvents_C_UpdateEvents::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_Roster_OfficerEvents_C_UpdateEvents, K2Node_MakeStruct_FormatArgumentData_1) == 0x000058, "Member 'W_Roster_OfficerEvents_C_UpdateEvents::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(W_Roster_OfficerEvents_C_UpdateEvents, K2Node_MakeArray_Array) == 0x0000A8, "Member 'W_Roster_OfficerEvents_C_UpdateEvents::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_Roster_OfficerEvents_C_UpdateEvents, CallFunc_TextIsNotEmpty_NotEmpty) == 0x0000B8, "Member 'W_Roster_OfficerEvents_C_UpdateEvents::CallFunc_TextIsNotEmpty_NotEmpty' has a wrong offset!");
static_assert(offsetof(W_Roster_OfficerEvents_C_UpdateEvents, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'W_Roster_OfficerEvents_C_UpdateEvents::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Roster_OfficerEvents_C_UpdateEvents, K2Node_Select_Default) == 0x0000D8, "Member 'W_Roster_OfficerEvents_C_UpdateEvents::K2Node_Select_Default' has a wrong offset!");

}


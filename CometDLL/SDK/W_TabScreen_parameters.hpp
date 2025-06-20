﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TabScreen

#include "Basic.hpp"

#include "ReadyOrNot_structs.hpp"


namespace SDK::Params
{

// Function W_TabScreen.W_TabScreen_C.ExecuteUbergraph_W_TabScreen
// 0x0098 (0x0098 - 0x0000)
struct W_TabScreen_C_ExecuteUbergraph_W_TabScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeamType                                     Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AReadyOrNotPlayerState*>         CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	class AReadyOrNotPlayerState*                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetCompressedPing_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayCameraPawn*                      K2Node_DynamicCast_AsReplay_Camera_Pawn;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSquadLeader_ReturnValue;                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ETeamType                                     K2Node_Select_Default;                             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_ScoreboardEntry_C*                   CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen) == 0x000008, "Wrong alignment on W_TabScreen_C_ExecuteUbergraph_W_TabScreen");
static_assert(sizeof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen) == 0x000098, "Wrong size on W_TabScreen_C_ExecuteUbergraph_W_TabScreen");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, EntryPoint) == 0x000000, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, Temp_bool_Variable) == 0x000004, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, Temp_byte_Variable) == 0x000005, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, Temp_int_Array_Index_Variable) == 0x000008, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, K2Node_Event_IsDesignTime) == 0x000014, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_Array_Get_Item) == 0x000028, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_GetCompressedPing_ReturnValue) == 0x000034, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_GetCompressedPing_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_Less_IntInt_ReturnValue) == 0x000035, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000038, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_Multiply_IntInt_ReturnValue) == 0x00003C, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, K2Node_DynamicCast_AsReplay_Camera_Pawn) == 0x000040, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::K2Node_DynamicCast_AsReplay_Camera_Pawn' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_IsSquadLeader_ReturnValue) == 0x000049, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_IsSquadLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_GetPlayerName_ReturnValue) == 0x000050, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, K2Node_Select_Default) == 0x000060, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_GetPlayerController_ReturnValue) == 0x000080, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_Create_ReturnValue) == 0x000088, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TabScreen_C_ExecuteUbergraph_W_TabScreen, CallFunc_AddChild_ReturnValue) == 0x000090, "Member 'W_TabScreen_C_ExecuteUbergraph_W_TabScreen::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function W_TabScreen.W_TabScreen_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_TabScreen_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TabScreen_C_PreConstruct) == 0x000001, "Wrong alignment on W_TabScreen_C_PreConstruct");
static_assert(sizeof(W_TabScreen_C_PreConstruct) == 0x000001, "Wrong size on W_TabScreen_C_PreConstruct");
static_assert(offsetof(W_TabScreen_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_TabScreen_C_PreConstruct::IsDesignTime' has a wrong offset!");

}


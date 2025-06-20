﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatMessage_Entry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ChatMessage_Entry.ChatMessage_Entry_C.ExecuteUbergraph_ChatMessage_Entry
// 0x0148 (0x0148 - 0x0000)
struct ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0014)()
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00C8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00E0(0x0018)()
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                   K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0130(0x0018)()
};
static_assert(alignof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry) == 0x000008, "Wrong alignment on ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry");
static_assert(sizeof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry) == 0x000148, "Wrong size on ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, EntryPoint) == 0x000000, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, K2Node_SwitchEnum_CmpSuccess) == 0x000060, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000068, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000078, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000088, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000098, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Concat_StrStr_ReturnValue_5) == 0x0000A8, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Concat_StrStr_ReturnValue_6) == 0x0000B8, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000C8, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000E0, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_GetGameState_ReturnValue) == 0x0000F8, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, K2Node_DynamicCast_AsReady_or_Not_Game_State) == 0x000100, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::K2Node_DynamicCast_AsReady_or_Not_Game_State' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000110, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Concat_StrStr_ReturnValue_8) == 0x000120, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000130, "Member 'ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");

// Function ChatMessage_Entry.ChatMessage_Entry_C.Get_ChatType_Text_0
// 0x0020 (0x0020 - 0x0000)
struct ChatMessage_Entry_C_Get_ChatType_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatMessage_Entry_C_Get_ChatType_Text_0) == 0x000008, "Wrong alignment on ChatMessage_Entry_C_Get_ChatType_Text_0");
static_assert(sizeof(ChatMessage_Entry_C_Get_ChatType_Text_0) == 0x000020, "Wrong size on ChatMessage_Entry_C_Get_ChatType_Text_0");
static_assert(offsetof(ChatMessage_Entry_C_Get_ChatType_Text_0, ReturnValue) == 0x000000, "Member 'ChatMessage_Entry_C_Get_ChatType_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatMessage_Entry_C_Get_ChatType_Text_0, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'ChatMessage_Entry_C_Get_ChatType_Text_0::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}


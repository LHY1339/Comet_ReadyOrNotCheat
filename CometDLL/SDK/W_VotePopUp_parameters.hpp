﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VotePopUp

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function W_VotePopUp.W_VotePopUp_C.ExecuteUbergraph_W_VotePopUp
// 0x0040 (0x0040 - 0x0000)
struct W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_VoteReason;                     // 0x0008(0x0018)()
	class FText                                   K2Node_CustomEvent_VoteQuestion;                   // 0x0020(0x0018)()
	bool                                          K2Node_CustomEvent_bCanVoteNo;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp) == 0x000008, "Wrong alignment on W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp");
static_assert(sizeof(W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp) == 0x000040, "Wrong size on W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp");
static_assert(offsetof(W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp, EntryPoint) == 0x000000, "Member 'W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp, Temp_bool_Variable) == 0x000004, "Member 'W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp, Temp_byte_Variable) == 0x000005, "Member 'W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp, Temp_byte_Variable_1) == 0x000006, "Member 'W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp, K2Node_CustomEvent_VoteReason) == 0x000008, "Member 'W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp::K2Node_CustomEvent_VoteReason' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp, K2Node_CustomEvent_VoteQuestion) == 0x000020, "Member 'W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp::K2Node_CustomEvent_VoteQuestion' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp, K2Node_CustomEvent_bCanVoteNo) == 0x000038, "Member 'W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp::K2Node_CustomEvent_bCanVoteNo' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp, K2Node_Select_Default) == 0x000039, "Member 'W_VotePopUp_C_ExecuteUbergraph_W_VotePopUp::K2Node_Select_Default' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.GetbIsEnabled_0
// 0x0001 (0x0001 - 0x0000)
struct W_VotePopUp_C_GetbIsEnabled_0 final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VotePopUp_C_GetbIsEnabled_0) == 0x000001, "Wrong alignment on W_VotePopUp_C_GetbIsEnabled_0");
static_assert(sizeof(W_VotePopUp_C_GetbIsEnabled_0) == 0x000001, "Wrong size on W_VotePopUp_C_GetbIsEnabled_0");
static_assert(offsetof(W_VotePopUp_C_GetbIsEnabled_0, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_GetbIsEnabled_0::ReturnValue' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.GetText_1
// 0x0038 (0x0038 - 0x0000)
struct W_VotePopUp_C_GetText_1 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseController_C*                   K2Node_DynamicCast_AsBP_Base_Controller;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VotePopUp_C_GetText_1) == 0x000008, "Wrong alignment on W_VotePopUp_C_GetText_1");
static_assert(sizeof(W_VotePopUp_C_GetText_1) == 0x000038, "Wrong size on W_VotePopUp_C_GetText_1");
static_assert(offsetof(W_VotePopUp_C_GetText_1, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_GetText_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetText_1, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'W_VotePopUp_C_GetText_1::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetText_1, K2Node_DynamicCast_AsBP_Base_Controller) == 0x000020, "Member 'W_VotePopUp_C_GetText_1::K2Node_DynamicCast_AsBP_Base_Controller' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetText_1, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'W_VotePopUp_C_GetText_1::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetText_1, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'W_VotePopUp_C_GetText_1::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetText_1, K2Node_SwitchInteger_CmpSuccess) == 0x000030, "Member 'W_VotePopUp_C_GetText_1::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.GetText_4
// 0x0048 (0x0048 - 0x0000)
struct W_VotePopUp_C_GetText_4 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACoopGS*                                K2Node_DynamicCast_AsCoop_GS;                      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(W_VotePopUp_C_GetText_4) == 0x000008, "Wrong alignment on W_VotePopUp_C_GetText_4");
static_assert(sizeof(W_VotePopUp_C_GetText_4) == 0x000048, "Wrong size on W_VotePopUp_C_GetText_4");
static_assert(offsetof(W_VotePopUp_C_GetText_4, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_GetText_4::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetText_4, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'W_VotePopUp_C_GetText_4::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetText_4, K2Node_DynamicCast_AsCoop_GS) == 0x000020, "Member 'W_VotePopUp_C_GetText_4::K2Node_DynamicCast_AsCoop_GS' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetText_4, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'W_VotePopUp_C_GetText_4::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetText_4, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'W_VotePopUp_C_GetText_4::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetText_4, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'W_VotePopUp_C_GetText_4::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.GetVoteNo_Visibility
// 0x0006 (0x0006 - 0x0000)
struct W_VotePopUp_C_GetVoteNo_Visibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanVoteNo_Return_Value;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VotePopUp_C_GetVoteNo_Visibility) == 0x000001, "Wrong alignment on W_VotePopUp_C_GetVoteNo_Visibility");
static_assert(sizeof(W_VotePopUp_C_GetVoteNo_Visibility) == 0x000006, "Wrong size on W_VotePopUp_C_GetVoteNo_Visibility");
static_assert(offsetof(W_VotePopUp_C_GetVoteNo_Visibility, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_GetVoteNo_Visibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteNo_Visibility, Temp_bool_Variable) == 0x000001, "Member 'W_VotePopUp_C_GetVoteNo_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteNo_Visibility, Temp_byte_Variable) == 0x000002, "Member 'W_VotePopUp_C_GetVoteNo_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteNo_Visibility, Temp_byte_Variable_1) == 0x000003, "Member 'W_VotePopUp_C_GetVoteNo_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteNo_Visibility, CallFunc_CanVoteNo_Return_Value) == 0x000004, "Member 'W_VotePopUp_C_GetVoteNo_Visibility::CallFunc_CanVoteNo_Return_Value' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteNo_Visibility, K2Node_Select_Default) == 0x000005, "Member 'W_VotePopUp_C_GetVoteNo_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.GetVoteNoKeyBinding
// 0x0060 (0x0060 - 0x0000)
struct W_VotePopUp_C_GetVoteNoKeyBinding final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_GetKeyFromInputActionName_ReturnValue;    // 0x0020(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue; // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(W_VotePopUp_C_GetVoteNoKeyBinding) == 0x000008, "Wrong alignment on W_VotePopUp_C_GetVoteNoKeyBinding");
static_assert(sizeof(W_VotePopUp_C_GetVoteNoKeyBinding) == 0x000060, "Wrong size on W_VotePopUp_C_GetVoteNoKeyBinding");
static_assert(offsetof(W_VotePopUp_C_GetVoteNoKeyBinding, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_GetVoteNoKeyBinding::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteNoKeyBinding, CallFunc_MakeLiteralName_ReturnValue) == 0x000018, "Member 'W_VotePopUp_C_GetVoteNoKeyBinding::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteNoKeyBinding, CallFunc_GetKeyFromInputActionName_ReturnValue) == 0x000020, "Member 'W_VotePopUp_C_GetVoteNoKeyBinding::CallFunc_GetKeyFromInputActionName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteNoKeyBinding, CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue) == 0x000038, "Member 'W_VotePopUp_C_GetVoteNoKeyBinding::CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteNoKeyBinding, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'W_VotePopUp_C_GetVoteNoKeyBinding::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.GetVoteYesKeyBinding
// 0x0060 (0x0060 - 0x0000)
struct W_VotePopUp_C_GetVoteYesKeyBinding final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_GetKeyFromInputActionName_ReturnValue;    // 0x0020(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue; // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(W_VotePopUp_C_GetVoteYesKeyBinding) == 0x000008, "Wrong alignment on W_VotePopUp_C_GetVoteYesKeyBinding");
static_assert(sizeof(W_VotePopUp_C_GetVoteYesKeyBinding) == 0x000060, "Wrong size on W_VotePopUp_C_GetVoteYesKeyBinding");
static_assert(offsetof(W_VotePopUp_C_GetVoteYesKeyBinding, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_GetVoteYesKeyBinding::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteYesKeyBinding, CallFunc_MakeLiteralName_ReturnValue) == 0x000018, "Member 'W_VotePopUp_C_GetVoteYesKeyBinding::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteYesKeyBinding, CallFunc_GetKeyFromInputActionName_ReturnValue) == 0x000020, "Member 'W_VotePopUp_C_GetVoteYesKeyBinding::CallFunc_GetKeyFromInputActionName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteYesKeyBinding, CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue) == 0x000038, "Member 'W_VotePopUp_C_GetVoteYesKeyBinding::CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetVoteYesKeyBinding, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'W_VotePopUp_C_GetVoteYesKeyBinding::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.StartVote
// 0x0038 (0x0038 - 0x0000)
struct W_VotePopUp_C_StartVote final
{
public:
	class FText                                   VoteReason_0;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   VoteQuestion;                                      // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bCanVoteNo;                                        // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VotePopUp_C_StartVote) == 0x000008, "Wrong alignment on W_VotePopUp_C_StartVote");
static_assert(sizeof(W_VotePopUp_C_StartVote) == 0x000038, "Wrong size on W_VotePopUp_C_StartVote");
static_assert(offsetof(W_VotePopUp_C_StartVote, VoteReason_0) == 0x000000, "Member 'W_VotePopUp_C_StartVote::VoteReason_0' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_StartVote, VoteQuestion) == 0x000018, "Member 'W_VotePopUp_C_StartVote::VoteQuestion' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_StartVote, bCanVoteNo) == 0x000030, "Member 'W_VotePopUp_C_StartVote::bCanVoteNo' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.VoteNo_Visibility_1
// 0x0001 (0x0001 - 0x0000)
struct W_VotePopUp_C_VoteNo_Visibility_1 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VotePopUp_C_VoteNo_Visibility_1) == 0x000001, "Wrong alignment on W_VotePopUp_C_VoteNo_Visibility_1");
static_assert(sizeof(W_VotePopUp_C_VoteNo_Visibility_1) == 0x000001, "Wrong size on W_VotePopUp_C_VoteNo_Visibility_1");
static_assert(offsetof(W_VotePopUp_C_VoteNo_Visibility_1, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_VoteNo_Visibility_1::ReturnValue' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.VoteNo_Visibility_2
// 0x0001 (0x0001 - 0x0000)
struct W_VotePopUp_C_VoteNo_Visibility_2 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VotePopUp_C_VoteNo_Visibility_2) == 0x000001, "Wrong alignment on W_VotePopUp_C_VoteNo_Visibility_2");
static_assert(sizeof(W_VotePopUp_C_VoteNo_Visibility_2) == 0x000001, "Wrong size on W_VotePopUp_C_VoteNo_Visibility_2");
static_assert(offsetof(W_VotePopUp_C_VoteNo_Visibility_2, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_VoteNo_Visibility_2::ReturnValue' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.VoteReason
// 0x0018 (0x0018 - 0x0000)
struct W_VotePopUp_C_VoteReason final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(W_VotePopUp_C_VoteReason) == 0x000008, "Wrong alignment on W_VotePopUp_C_VoteReason");
static_assert(sizeof(W_VotePopUp_C_VoteReason) == 0x000018, "Wrong size on W_VotePopUp_C_VoteReason");
static_assert(offsetof(W_VotePopUp_C_VoteReason, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_VoteReason::ReturnValue' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.CanVoteNo
// 0x0038 (0x0038 - 0x0000)
struct W_VotePopUp_C_CanVoteNo final
{
public:
	bool                                          Return_Value;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                   K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AReadyOrNotPlayerState*>         CallFunc_GetPlayersAvailableForVote_ReturnValue;   // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VotePopUp_C_CanVoteNo) == 0x000008, "Wrong alignment on W_VotePopUp_C_CanVoteNo");
static_assert(sizeof(W_VotePopUp_C_CanVoteNo) == 0x000038, "Wrong size on W_VotePopUp_C_CanVoteNo");
static_assert(offsetof(W_VotePopUp_C_CanVoteNo, Return_Value) == 0x000000, "Member 'W_VotePopUp_C_CanVoteNo::Return_Value' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_CanVoteNo, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'W_VotePopUp_C_CanVoteNo::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_CanVoteNo, K2Node_DynamicCast_AsReady_or_Not_Game_State) == 0x000010, "Member 'W_VotePopUp_C_CanVoteNo::K2Node_DynamicCast_AsReady_or_Not_Game_State' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_CanVoteNo, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'W_VotePopUp_C_CanVoteNo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_CanVoteNo, CallFunc_GetPlayersAvailableForVote_ReturnValue) == 0x000020, "Member 'W_VotePopUp_C_CanVoteNo::CallFunc_GetPlayersAvailableForVote_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_CanVoteNo, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'W_VotePopUp_C_CanVoteNo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_CanVoteNo, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'W_VotePopUp_C_CanVoteNo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.GetNoVotes
// 0x0048 (0x0048 - 0x0000)
struct W_VotePopUp_C_GetNoVotes final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACoopGS*                                K2Node_DynamicCast_AsCoop_GS;                      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(W_VotePopUp_C_GetNoVotes) == 0x000008, "Wrong alignment on W_VotePopUp_C_GetNoVotes");
static_assert(sizeof(W_VotePopUp_C_GetNoVotes) == 0x000048, "Wrong size on W_VotePopUp_C_GetNoVotes");
static_assert(offsetof(W_VotePopUp_C_GetNoVotes, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_GetNoVotes::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetNoVotes, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'W_VotePopUp_C_GetNoVotes::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetNoVotes, K2Node_DynamicCast_AsCoop_GS) == 0x000020, "Member 'W_VotePopUp_C_GetNoVotes::K2Node_DynamicCast_AsCoop_GS' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetNoVotes, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'W_VotePopUp_C_GetNoVotes::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetNoVotes, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'W_VotePopUp_C_GetNoVotes::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.GetVoteQuestion
// 0x0018 (0x0018 - 0x0000)
struct W_VotePopUp_C_GetVoteQuestion final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(W_VotePopUp_C_GetVoteQuestion) == 0x000008, "Wrong alignment on W_VotePopUp_C_GetVoteQuestion");
static_assert(sizeof(W_VotePopUp_C_GetVoteQuestion) == 0x000018, "Wrong size on W_VotePopUp_C_GetVoteQuestion");
static_assert(offsetof(W_VotePopUp_C_GetVoteQuestion, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_GetVoteQuestion::ReturnValue' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.GetVoteVisibility
// 0x0001 (0x0001 - 0x0000)
struct W_VotePopUp_C_GetVoteVisibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VotePopUp_C_GetVoteVisibility) == 0x000001, "Wrong alignment on W_VotePopUp_C_GetVoteVisibility");
static_assert(sizeof(W_VotePopUp_C_GetVoteVisibility) == 0x000001, "Wrong size on W_VotePopUp_C_GetVoteVisibility");
static_assert(offsetof(W_VotePopUp_C_GetVoteVisibility, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_GetVoteVisibility::ReturnValue' has a wrong offset!");

// Function W_VotePopUp.W_VotePopUp_C.GetYesVotes
// 0x0048 (0x0048 - 0x0000)
struct W_VotePopUp_C_GetYesVotes final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACoopGS*                                K2Node_DynamicCast_AsCoop_GS;                      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(W_VotePopUp_C_GetYesVotes) == 0x000008, "Wrong alignment on W_VotePopUp_C_GetYesVotes");
static_assert(sizeof(W_VotePopUp_C_GetYesVotes) == 0x000048, "Wrong size on W_VotePopUp_C_GetYesVotes");
static_assert(offsetof(W_VotePopUp_C_GetYesVotes, ReturnValue) == 0x000000, "Member 'W_VotePopUp_C_GetYesVotes::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetYesVotes, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'W_VotePopUp_C_GetYesVotes::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetYesVotes, K2Node_DynamicCast_AsCoop_GS) == 0x000020, "Member 'W_VotePopUp_C_GetYesVotes::K2Node_DynamicCast_AsCoop_GS' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetYesVotes, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'W_VotePopUp_C_GetYesVotes::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_VotePopUp_C_GetYesVotes, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'W_VotePopUp_C_GetYesVotes::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}


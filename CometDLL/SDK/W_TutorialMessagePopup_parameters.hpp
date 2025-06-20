﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TutorialMessagePopup

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ExecuteUbergraph_W_TutorialMessagePopup
// 0x00B0 (0x00B0 - 0x0000)
struct W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsFirstShowing;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Title;                          // 0x0010(0x0018)()
	TArray<class FText>                           K2Node_CustomEvent_Content_1;                      // 0x0028(0x0010)(ConstParm, ReferenceParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_TutorialMessageEntry_C*              CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           K2Node_CustomEvent_Content;                        // 0x0060(0x0010)(ConstParm, ReferenceParm)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0070(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup) == 0x000008, "Wrong alignment on W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup");
static_assert(sizeof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup) == 0x0000B0, "Wrong size on W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, EntryPoint) == 0x000000, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, Temp_int_Array_Index_Variable) == 0x000004, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, K2Node_CustomEvent_IsFirstShowing) == 0x000008, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::K2Node_CustomEvent_IsFirstShowing' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, K2Node_CustomEvent_Title) == 0x000010, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::K2Node_CustomEvent_Title' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, K2Node_CustomEvent_Content_1) == 0x000028, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::K2Node_CustomEvent_Content_1' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, CallFunc_PlayAnimation_ReturnValue_1) == 0x000048, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, CallFunc_Create_ReturnValue) == 0x000050, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, CallFunc_AddChild_ReturnValue) == 0x000058, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, K2Node_CustomEvent_Content) == 0x000060, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::K2Node_CustomEvent_Content' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, CallFunc_Array_Get_Item) == 0x000070, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, Temp_int_Loop_Counter_Variable) == 0x00009C, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, CallFunc_Add_IntInt_ReturnValue) == 0x0000A4, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup, CallFunc_IsAnimationPlayingForward_ReturnValue) == 0x0000A8, "Member 'W_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup::CallFunc_IsAnimationPlayingForward_ReturnValue' has a wrong offset!");

// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ShowMessagePrompt
// 0x0030 (0x0030 - 0x0000)
struct W_TutorialMessagePopup_C_ShowMessagePrompt final
{
public:
	bool                                          IsFirstShowing;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Title;                                             // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FText>                           Content;                                           // 0x0020(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_TutorialMessagePopup_C_ShowMessagePrompt) == 0x000008, "Wrong alignment on W_TutorialMessagePopup_C_ShowMessagePrompt");
static_assert(sizeof(W_TutorialMessagePopup_C_ShowMessagePrompt) == 0x000030, "Wrong size on W_TutorialMessagePopup_C_ShowMessagePrompt");
static_assert(offsetof(W_TutorialMessagePopup_C_ShowMessagePrompt, IsFirstShowing) == 0x000000, "Member 'W_TutorialMessagePopup_C_ShowMessagePrompt::IsFirstShowing' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ShowMessagePrompt, Title) == 0x000008, "Member 'W_TutorialMessagePopup_C_ShowMessagePrompt::Title' has a wrong offset!");
static_assert(offsetof(W_TutorialMessagePopup_C_ShowMessagePrompt, Content) == 0x000020, "Member 'W_TutorialMessagePopup_C_ShowMessagePrompt::Content' has a wrong offset!");

// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.UpdateMessageContent
// 0x0010 (0x0010 - 0x0000)
struct W_TutorialMessagePopup_C_UpdateMessageContent final
{
public:
	TArray<class FText>                           Content;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_TutorialMessagePopup_C_UpdateMessageContent) == 0x000008, "Wrong alignment on W_TutorialMessagePopup_C_UpdateMessageContent");
static_assert(sizeof(W_TutorialMessagePopup_C_UpdateMessageContent) == 0x000010, "Wrong size on W_TutorialMessagePopup_C_UpdateMessageContent");
static_assert(offsetof(W_TutorialMessagePopup_C_UpdateMessageContent, Content) == 0x000000, "Member 'W_TutorialMessagePopup_C_UpdateMessageContent::Content' has a wrong offset!");

}


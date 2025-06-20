﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerActionText

#include "Basic.hpp"

#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function W_PlayerActionText.W_PlayerActionText_C.ExecuteUbergraph_W_PlayerActionText
// 0x0028 (0x0028 - 0x0000)
struct W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Scale;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText) == 0x000008, "Wrong alignment on W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText");
static_assert(sizeof(W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText) == 0x000028, "Wrong size on W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText");
static_assert(offsetof(W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText, EntryPoint) == 0x000000, "Member 'W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText, K2Node_Event_Scale) == 0x000004, "Member 'W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText::K2Node_Event_Scale' has a wrong offset!");
static_assert(offsetof(W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText, K2Node_CustomEvent_bNewInputType) == 0x000020, "Member 'W_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText::K2Node_CustomEvent_bNewInputType' has a wrong offset!");

// Function W_PlayerActionText.W_PlayerActionText_C.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct W_PlayerActionText_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PlayerActionText_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on W_PlayerActionText_C_OnInputMethodChanged");
static_assert(sizeof(W_PlayerActionText_C_OnInputMethodChanged) == 0x000001, "Wrong size on W_PlayerActionText_C_OnInputMethodChanged");
static_assert(offsetof(W_PlayerActionText_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'W_PlayerActionText_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");

// Function W_PlayerActionText.W_PlayerActionText_C.OnScalingSet
// 0x0004 (0x0004 - 0x0000)
struct W_PlayerActionText_C_OnScalingSet final
{
public:
	float                                         Scale;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PlayerActionText_C_OnScalingSet) == 0x000004, "Wrong alignment on W_PlayerActionText_C_OnScalingSet");
static_assert(sizeof(W_PlayerActionText_C_OnScalingSet) == 0x000004, "Wrong size on W_PlayerActionText_C_OnScalingSet");
static_assert(offsetof(W_PlayerActionText_C_OnScalingSet, Scale) == 0x000000, "Member 'W_PlayerActionText_C_OnScalingSet::Scale' has a wrong offset!");

}


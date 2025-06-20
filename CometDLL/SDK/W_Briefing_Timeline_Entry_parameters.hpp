﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_Timeline_Entry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature final
{
public:
	class UW_Button_C*                            Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature) == 0x000008, "Wrong alignment on W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");
static_assert(sizeof(W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature) == 0x000008, "Wrong size on W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature, Button) == 0x000000, "Member 'W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature::Button' has a wrong offset!");

// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature final
{
public:
	class UW_Button_C*                            Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature) == 0x000008, "Wrong alignment on W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
static_assert(sizeof(W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature) == 0x000008, "Wrong size on W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature, Button) == 0x000000, "Member 'W_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature::Button' has a wrong offset!");

// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.ExecuteUbergraph_W_Briefing_Timeline_Entry
// 0x0110 (0x0110 - 0x0000)
struct W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Button_C*                            K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                            K2Node_ComponentBoundEvent_Button_1;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                             CallFunc_GetTimelineEventTestData_Audio_Asset;     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTimelineEvent>                 CallFunc_GetTimelineEventTestData_Events;          // 0x0038(0x0010)(ReferenceParm)
	TMap<double, struct FTimelineEvent>           CallFunc_GetTimelineEventTestData_EventEntries;    // 0x0048(0x0050)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimelineEvent                         CallFunc_Array_Get_Item;                           // 0x00A0(0x0050)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_EventAudioStart_ImplicitCast;   // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry) == 0x000008, "Wrong alignment on W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry");
static_assert(sizeof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry) == 0x000110, "Wrong size on W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, EntryPoint) == 0x000000, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, K2Node_ComponentBoundEvent_Button_1) == 0x000018, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, K2Node_Event_IsDesignTime) == 0x000020, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000028, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, CallFunc_GetTimelineEventTestData_Audio_Asset) == 0x000030, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::CallFunc_GetTimelineEventTestData_Audio_Asset' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, CallFunc_GetTimelineEventTestData_Events) == 0x000038, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::CallFunc_GetTimelineEventTestData_Events' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, CallFunc_GetTimelineEventTestData_EventEntries) == 0x000048, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::CallFunc_GetTimelineEventTestData_EventEntries' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, CallFunc_TextIsEmpty_ReturnValue) == 0x000098, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, CallFunc_BooleanAND_ReturnValue) == 0x0000F0, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, K2Node_VariableSet_EventAudioStart_ImplicitCast) == 0x0000F8, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::K2Node_VariableSet_EventAudioStart_ImplicitCast' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000100, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000108, "Member 'W_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.Hovered
// 0x0018 (0x0018 - 0x0000)
struct W_Briefing_Timeline_Entry_C_Hovered final
{
public:
	bool                                          IsHovered_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Timeline_Entry_C_Hovered) == 0x000008, "Wrong alignment on W_Briefing_Timeline_Entry_C_Hovered");
static_assert(sizeof(W_Briefing_Timeline_Entry_C_Hovered) == 0x000018, "Wrong size on W_Briefing_Timeline_Entry_C_Hovered");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_Hovered, IsHovered_0) == 0x000000, "Member 'W_Briefing_Timeline_Entry_C_Hovered::IsHovered_0' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_Hovered, Temp_bool_Variable) == 0x000001, "Member 'W_Briefing_Timeline_Entry_C_Hovered::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_Hovered, Temp_byte_Variable) == 0x000002, "Member 'W_Briefing_Timeline_Entry_C_Hovered::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_Hovered, Temp_byte_Variable_1) == 0x000003, "Member 'W_Briefing_Timeline_Entry_C_Hovered::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_Hovered, Temp_bool_Variable_1) == 0x000004, "Member 'W_Briefing_Timeline_Entry_C_Hovered::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_Hovered, Temp_byte_Variable_2) == 0x000005, "Member 'W_Briefing_Timeline_Entry_C_Hovered::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_Hovered, Temp_byte_Variable_3) == 0x000006, "Member 'W_Briefing_Timeline_Entry_C_Hovered::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_Hovered, K2Node_Select_Default) == 0x000007, "Member 'W_Briefing_Timeline_Entry_C_Hovered::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_Hovered, K2Node_Select_Default_1) == 0x000008, "Member 'W_Briefing_Timeline_Entry_C_Hovered::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_Hovered, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000010, "Member 'W_Briefing_Timeline_Entry_C_Hovered::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");

// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Briefing_Timeline_Entry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Timeline_Entry_C_PreConstruct) == 0x000001, "Wrong alignment on W_Briefing_Timeline_Entry_C_PreConstruct");
static_assert(sizeof(W_Briefing_Timeline_Entry_C_PreConstruct) == 0x000001, "Wrong size on W_Briefing_Timeline_Entry_C_PreConstruct");
static_assert(offsetof(W_Briefing_Timeline_Entry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Briefing_Timeline_Entry_C_PreConstruct::IsDesignTime' has a wrong offset!");

}


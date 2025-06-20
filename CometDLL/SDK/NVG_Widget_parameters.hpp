﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NVG_Widget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function NVG_Widget.NVG_Widget_C.ExecuteUbergraph_NVG_Widget
// 0x0048 (0x0048 - 0x0000)
struct NVG_Widget_C_ExecuteUbergraph_NVG_Widget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NVG_Widget_C_ExecuteUbergraph_NVG_Widget) == 0x000008, "Wrong alignment on NVG_Widget_C_ExecuteUbergraph_NVG_Widget");
static_assert(sizeof(NVG_Widget_C_ExecuteUbergraph_NVG_Widget) == 0x000048, "Wrong size on NVG_Widget_C_ExecuteUbergraph_NVG_Widget");
static_assert(offsetof(NVG_Widget_C_ExecuteUbergraph_NVG_Widget, EntryPoint) == 0x000000, "Member 'NVG_Widget_C_ExecuteUbergraph_NVG_Widget::EntryPoint' has a wrong offset!");
static_assert(offsetof(NVG_Widget_C_ExecuteUbergraph_NVG_Widget, K2Node_Event_MyGeometry) == 0x000004, "Member 'NVG_Widget_C_ExecuteUbergraph_NVG_Widget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(NVG_Widget_C_ExecuteUbergraph_NVG_Widget, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'NVG_Widget_C_ExecuteUbergraph_NVG_Widget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(NVG_Widget_C_ExecuteUbergraph_NVG_Widget, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'NVG_Widget_C_ExecuteUbergraph_NVG_Widget::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

// Function NVG_Widget.NVG_Widget_C.Tick
// 0x003C (0x003C - 0x0000)
struct NVG_Widget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NVG_Widget_C_Tick) == 0x000004, "Wrong alignment on NVG_Widget_C_Tick");
static_assert(sizeof(NVG_Widget_C_Tick) == 0x00003C, "Wrong size on NVG_Widget_C_Tick");
static_assert(offsetof(NVG_Widget_C_Tick, MyGeometry) == 0x000000, "Member 'NVG_Widget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(NVG_Widget_C_Tick, InDeltaTime) == 0x000038, "Member 'NVG_Widget_C_Tick::InDeltaTime' has a wrong offset!");

}


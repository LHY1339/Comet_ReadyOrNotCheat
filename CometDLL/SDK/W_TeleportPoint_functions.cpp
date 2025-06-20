﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TeleportPoint

#include "Basic.hpp"

#include "W_TeleportPoint_classes.hpp"
#include "W_TeleportPoint_parameters.hpp"


namespace SDK
{

// Function W_TeleportPoint.W_TeleportPoint_C.BndEvt__W_CameraSaveSlot_DownButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_TeleportPoint_C::BndEvt__W_CameraSaveSlot_DownButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TeleportPoint_C", "BndEvt__W_CameraSaveSlot_DownButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_TeleportPoint.W_TeleportPoint_C.BndEvt__W_CameraSaveSlot_UpButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_TeleportPoint_C::BndEvt__W_CameraSaveSlot_UpButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TeleportPoint_C", "BndEvt__W_CameraSaveSlot_UpButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_TeleportPoint.W_TeleportPoint_C.BndEvt__W_SimplePointLight_DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_TeleportPoint_C::BndEvt__W_SimplePointLight_DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TeleportPoint_C", "BndEvt__W_SimplePointLight_DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_TeleportPoint.W_TeleportPoint_C.BndEvt__W_TeleportPoint_TeleportButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_TeleportPoint_C::BndEvt__W_TeleportPoint_TeleportButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TeleportPoint_C", "BndEvt__W_TeleportPoint_TeleportButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_TeleportPoint.W_TeleportPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_TeleportPoint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TeleportPoint_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_TeleportPoint.W_TeleportPoint_C.ExecuteUbergraph_W_TeleportPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TeleportPoint_C::ExecuteUbergraph_W_TeleportPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TeleportPoint_C", "ExecuteUbergraph_W_TeleportPoint");

	Params::W_TeleportPoint_C_ExecuteUbergraph_W_TeleportPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TeleportPoint.W_TeleportPoint_C.SwapWidgetSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                       ScrollBox                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   First                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Second                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TeleportPoint_C::SwapWidgetSlots(class UScrollBox* ScrollBox, int32 First, int32 Second)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TeleportPoint_C", "SwapWidgetSlots");

	Params::W_TeleportPoint_C_SwapWidgetSlots Parms{};

	Parms.ScrollBox = ScrollBox;
	Parms.First = First;
	Parms.Second = Second;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TeleportPoint.W_TeleportPoint_C.Teleport
// (BlueprintCallable, BlueprintEvent)

void UW_TeleportPoint_C::Teleport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TeleportPoint_C", "Teleport");

	UObject::ProcessEvent(Func, nullptr);
}

}


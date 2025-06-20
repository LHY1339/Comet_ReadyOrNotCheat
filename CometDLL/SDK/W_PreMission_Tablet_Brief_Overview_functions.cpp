﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_Brief_Overview

#include "Basic.hpp"

#include "W_PreMission_Tablet_Brief_Overview_classes.hpp"
#include "W_PreMission_Tablet_Brief_Overview_parameters.hpp"


namespace SDK
{

// Function W_PreMission_Tablet_Brief_Overview.W_PreMission_Tablet_Brief_Overview_C.BndEvt__W_PreMission_Tablet_Brief_Overview_DispatchAudioPlayer_K2Node_ComponentBoundEvent_0_OnPlay__DelegateSignature
// (BlueprintEvent)

void UW_PreMission_Tablet_Brief_Overview_C::BndEvt__W_PreMission_Tablet_Brief_Overview_DispatchAudioPlayer_K2Node_ComponentBoundEvent_0_OnPlay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Overview_C", "BndEvt__W_PreMission_Tablet_Brief_Overview_DispatchAudioPlayer_K2Node_ComponentBoundEvent_0_OnPlay__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PreMission_Tablet_Brief_Overview.W_PreMission_Tablet_Brief_Overview_C.BndEvt__W_PreMission_Tablet_Brief_Overview_DispatchAudioPlayer_K2Node_ComponentBoundEvent_1_OnStop__DelegateSignature
// (BlueprintEvent)

void UW_PreMission_Tablet_Brief_Overview_C::BndEvt__W_PreMission_Tablet_Brief_Overview_DispatchAudioPlayer_K2Node_ComponentBoundEvent_1_OnStop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Overview_C", "BndEvt__W_PreMission_Tablet_Brief_Overview_DispatchAudioPlayer_K2Node_ComponentBoundEvent_1_OnStop__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PreMission_Tablet_Brief_Overview.W_PreMission_Tablet_Brief_Overview_C.BndEvt__W_PreMission_Tablet_Brief_Overview_DispatchAudioPlayer_K2Node_ComponentBoundEvent_2_OnPause__DelegateSignature
// (BlueprintEvent)

void UW_PreMission_Tablet_Brief_Overview_C::BndEvt__W_PreMission_Tablet_Brief_Overview_DispatchAudioPlayer_K2Node_ComponentBoundEvent_2_OnPause__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Overview_C", "BndEvt__W_PreMission_Tablet_Brief_Overview_DispatchAudioPlayer_K2Node_ComponentBoundEvent_2_OnPause__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PreMission_Tablet_Brief_Overview.W_PreMission_Tablet_Brief_Overview_C.ExecuteUbergraph_W_PreMission_Tablet_Brief_Overview
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Overview_C::ExecuteUbergraph_W_PreMission_Tablet_Brief_Overview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Overview_C", "ExecuteUbergraph_W_PreMission_Tablet_Brief_Overview");

	Params::W_PreMission_Tablet_Brief_Overview_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Overview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_Brief_Overview.W_PreMission_Tablet_Brief_Overview_C.IsAudioPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   IsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Overview_C::IsAudioPlaying(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Overview_C", "IsAudioPlaying");

	Params::W_PreMission_Tablet_Brief_Overview_C_IsAudioPlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;
}


// Function W_PreMission_Tablet_Brief_Overview.W_PreMission_Tablet_Brief_Overview_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FAnalogInputEvent&         InAnalogInputEvent                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UW_PreMission_Tablet_Brief_Overview_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Overview_C", "OnAnalogValueChanged");

	Params::W_PreMission_Tablet_Brief_Overview_C_OnAnalogValueChanged Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InAnalogInputEvent = std::move(InAnalogInputEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_PreMission_Tablet_Brief_Overview.W_PreMission_Tablet_Brief_Overview_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FKeyEvent&                 InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UW_PreMission_Tablet_Brief_Overview_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Overview_C", "OnKeyUp");

	Params::W_PreMission_Tablet_Brief_Overview_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_PreMission_Tablet_Brief_Overview.W_PreMission_Tablet_Brief_Overview_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FKeyEvent&                 InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UW_PreMission_Tablet_Brief_Overview_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Overview_C", "OnPreviewKeyDown");

	Params::W_PreMission_Tablet_Brief_Overview_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_PreMission_Tablet_Brief_Overview.W_PreMission_Tablet_Brief_Overview_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_PreMission_Tablet_Brief_Overview_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Overview_C", "BP_GetDesiredFocusTarget");

	Params::W_PreMission_Tablet_Brief_Overview_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


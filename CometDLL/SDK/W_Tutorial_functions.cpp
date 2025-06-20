﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Tutorial

#include "Basic.hpp"

#include "W_Tutorial_classes.hpp"
#include "W_Tutorial_parameters.hpp"


namespace SDK
{

// Function W_Tutorial.W_Tutorial_C.BndEvt__W_Tutorial_W_Footer_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature
// (BlueprintEvent)

void UW_Tutorial_C::BndEvt__W_Tutorial_W_Footer_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_C", "BndEvt__W_Tutorial_W_Footer_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Tutorial.W_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Tutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Tutorial.W_Tutorial_C.ExecuteUbergraph_W_Tutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Tutorial_C::ExecuteUbergraph_W_Tutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_C", "ExecuteUbergraph_W_Tutorial");

	Params::W_Tutorial_C_ExecuteUbergraph_W_Tutorial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Tutorial.W_Tutorial_C.Hide Widget End
// (BlueprintCallable, BlueprintEvent)

void UW_Tutorial_C::Hide_Widget_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_C", "Hide Widget End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Tutorial.W_Tutorial_C.HideMainWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UW_Tutorial_C::HideMainWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_C", "HideMainWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Tutorial.W_Tutorial_C.RefreshText
// (BlueprintCallable, BlueprintEvent)

void UW_Tutorial_C::RefreshText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_C", "RefreshText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Tutorial.W_Tutorial_C.RefreshWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Tutorial_C::RefreshWidget(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_C", "RefreshWidget");

	Params::W_Tutorial_C_RefreshWidget Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Tutorial.W_Tutorial_C.ShowMainWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UW_Tutorial_C::ShowMainWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_C", "ShowMainWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_GamepadButtonImage

#include "Basic.hpp"

#include "W_GamepadButtonImage_classes.hpp"
#include "W_GamepadButtonImage_parameters.hpp"


namespace SDK
{

// Function W_GamepadButtonImage.W_GamepadButtonImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_GamepadButtonImage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_GamepadButtonImage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_GamepadButtonImage.W_GamepadButtonImage_C.ExecuteUbergraph_W_GamepadButtonImage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_GamepadButtonImage_C::ExecuteUbergraph_W_GamepadButtonImage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_GamepadButtonImage_C", "ExecuteUbergraph_W_GamepadButtonImage");

	Params::W_GamepadButtonImage_C_ExecuteUbergraph_W_GamepadButtonImage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_GamepadButtonImage.W_GamepadButtonImage_C.InputChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_GamepadButtonImage_C::InputChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_GamepadButtonImage_C", "InputChanged");

	Params::W_GamepadButtonImage_C_InputChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_GamepadButtonImage.W_GamepadButtonImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_GamepadButtonImage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_GamepadButtonImage_C", "PreConstruct");

	Params::W_GamepadButtonImage_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}


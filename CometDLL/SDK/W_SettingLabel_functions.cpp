﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SettingLabel

#include "Basic.hpp"

#include "W_SettingLabel_classes.hpp"
#include "W_SettingLabel_parameters.hpp"


namespace SDK
{

// Function W_SettingLabel.W_SettingLabel_C.BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_SettingLabel_C::BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingLabel_C", "BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");

	Params::W_SettingLabel_C_BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature Parms{};

	Parms.Button_0 = Button_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingLabel.W_SettingLabel_C.BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
// (BlueprintEvent)

void UW_SettingLabel_C::BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingLabel_C", "BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingLabel.W_SettingLabel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_SettingLabel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingLabel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingLabel.W_SettingLabel_C.CopyFromCheckbox
// (Private, BlueprintCallable, BlueprintEvent)

void UW_SettingLabel_C::CopyFromCheckbox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingLabel_C", "CopyFromCheckbox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingLabel.W_SettingLabel_C.CopyFromCombo
// (Private, BlueprintCallable, BlueprintEvent)

void UW_SettingLabel_C::CopyFromCombo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingLabel_C", "CopyFromCombo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingLabel.W_SettingLabel_C.CopyFromSlider
// (Private, BlueprintCallable, BlueprintEvent)

void UW_SettingLabel_C::CopyFromSlider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingLabel_C", "CopyFromSlider");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingLabel.W_SettingLabel_C.ExecuteUbergraph_W_SettingLabel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingLabel_C::ExecuteUbergraph_W_SettingLabel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingLabel_C", "ExecuteUbergraph_W_SettingLabel");

	Params::W_SettingLabel_C_ExecuteUbergraph_W_SettingLabel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingLabel.W_SettingLabel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingLabel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingLabel_C", "PreConstruct");

	Params::W_SettingLabel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}


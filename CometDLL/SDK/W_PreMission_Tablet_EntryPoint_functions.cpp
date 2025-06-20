﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_EntryPoint

#include "Basic.hpp"

#include "W_PreMission_Tablet_EntryPoint_classes.hpp"
#include "W_PreMission_Tablet_EntryPoint_parameters.hpp"


namespace SDK
{

// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Handled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "BackPage");

	Params::W_PreMission_Tablet_EntryPoint_C_BackPage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;
}


// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.BndEvt__W_PreMission_Tablet_EntryPoint_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_C::BndEvt__W_PreMission_Tablet_EntryPoint_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "BndEvt__W_PreMission_Tablet_EntryPoint_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::W_PreMission_Tablet_EntryPoint_C_BndEvt__W_PreMission_Tablet_EntryPoint_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.BndEvt__W_PreMission_Tablet_EntryPoint_btn_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_C::BndEvt__W_PreMission_Tablet_EntryPoint_btn_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "BndEvt__W_PreMission_Tablet_EntryPoint_btn_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");

	Params::W_PreMission_Tablet_EntryPoint_C_BndEvt__W_PreMission_Tablet_EntryPoint_btn_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.BndEvt__W_PreMission_Tablet_EntryPoint_btn_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
// (BlueprintEvent)

void UW_PreMission_Tablet_EntryPoint_C::BndEvt__W_PreMission_Tablet_EntryPoint_btn_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "BndEvt__W_PreMission_Tablet_EntryPoint_btn_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PageName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "ChangePage");

	Params::W_PreMission_Tablet_EntryPoint_C_ChangePage Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.ExecuteUbergraph_W_PreMission_Tablet_EntryPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_C::ExecuteUbergraph_W_PreMission_Tablet_EntryPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "ExecuteUbergraph_W_PreMission_Tablet_EntryPoint");

	Params::W_PreMission_Tablet_EntryPoint_C_ExecuteUbergraph_W_PreMission_Tablet_EntryPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Collapse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "Hide");

	Params::W_PreMission_Tablet_EntryPoint_C_Hide Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "PreConstruct");

	Params::W_PreMission_Tablet_EntryPoint_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "Reveal");

	Params::W_PreMission_Tablet_EntryPoint_C_Reveal Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_C::SetActive(bool Active_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "SetActive");

	Params::W_PreMission_Tablet_EntryPoint_C_SetActive Parms{};

	Parms.Active_0 = Active_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "SetInputMode");

	Params::W_PreMission_Tablet_EntryPoint_C_SetInputMode Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint.W_PreMission_Tablet_EntryPoint_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget**                         Focus                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_C::GetFocusTarget(class UWidget** Focus) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_C", "GetFocusTarget");

	Params::W_PreMission_Tablet_EntryPoint_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;
}

}


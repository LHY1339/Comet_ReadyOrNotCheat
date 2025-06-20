﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_SMM_TabSetting

#include "Basic.hpp"

#include "BPW_SMM_TabSetting_classes.hpp"
#include "BPW_SMM_TabSetting_parameters.hpp"


namespace SDK
{

// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_SMM_TabSetting_C::BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_SMM_TabSetting_C::BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.BndEvt__BPW_SMM_TabSetting_Button_Tab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_SMM_TabSetting_C::BndEvt__BPW_SMM_TabSetting_Button_Tab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "BndEvt__BPW_SMM_TabSetting_Button_Tab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.CreateContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetSwitcher*                  WidgetSwitcher                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SMM_UI_C>   SMM_UI                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_SMM_TabSetting_C::CreateContainer(class UWidgetSwitcher* WidgetSwitcher, TScriptInterface<class IBPI_SMM_UI_C> SMM_UI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "CreateContainer");

	Params::BPW_SMM_TabSetting_C_CreateContainer Parms{};

	Parms.WidgetSwitcher = WidgetSwitcher;
	Parms.SMM_UI = SMM_UI;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.DoCustomNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPW_SMM_TabSetting_C::DoCustomNavigation(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "DoCustomNavigation");

	Params::BPW_SMM_TabSetting_C_DoCustomNavigation Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.ExecuteUbergraph_BPW_SMM_TabSetting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_SMM_TabSetting_C::ExecuteUbergraph_BPW_SMM_TabSetting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "ExecuteUbergraph_BPW_SMM_TabSetting");

	Params::BPW_SMM_TabSetting_C_ExecuteUbergraph_BPW_SMM_TabSetting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.HideFocus
// (BlueprintCallable, BlueprintEvent)

void UBPW_SMM_TabSetting_C::HideFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "HideFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBPW_SMM_TabSetting_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "OnAddedToFocusPath");

	Params::BPW_SMM_TabSetting_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBPW_SMM_TabSetting_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "OnRemovedFromFocusPath");

	Params::BPW_SMM_TabSetting_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.OnRep_TabState
// (BlueprintCallable, BlueprintEvent)

void UBPW_SMM_TabSetting_C::OnRep_TabState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "OnRep_TabState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_SMM_TabSetting_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "PreConstruct");

	Params::BPW_SMM_TabSetting_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_SMM_TabSetting.BPW_SMM_TabSetting_C.UpdateTabVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_SMM_TabSetting_C::UpdateTabVisuals(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_TabSetting_C", "UpdateTabVisuals");

	Params::BPW_SMM_TabSetting_C_UpdateTabVisuals Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}

}


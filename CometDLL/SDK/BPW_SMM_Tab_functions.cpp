﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_SMM_Tab

#include "Basic.hpp"

#include "BPW_SMM_Tab_classes.hpp"
#include "BPW_SMM_Tab_parameters.hpp"


namespace SDK
{

// Function BPW_SMM_Tab.BPW_SMM_Tab_C.BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_SMM_Tab_C::BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_SMM_Tab.BPW_SMM_Tab_C.BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_SMM_Tab_C::BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_SMM_Tab.BPW_SMM_Tab_C.BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_SMM_Tab_C::BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "BndEvt__BPW_SMM_Tab_Button_Tab_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_SMM_Tab.BPW_SMM_Tab_C.ExecuteUbergraph_BPW_SMM_Tab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_SMM_Tab_C::ExecuteUbergraph_BPW_SMM_Tab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "ExecuteUbergraph_BPW_SMM_Tab");

	Params::BPW_SMM_Tab_C_ExecuteUbergraph_BPW_SMM_Tab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_SMM_Tab.BPW_SMM_Tab_C.HideFocus
// (BlueprintCallable, BlueprintEvent)

void UBPW_SMM_Tab_C::HideFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "HideFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_SMM_Tab.BPW_SMM_Tab_C.LoadAndCreateWidgetClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetSwitcher*                  WidgetSwitcher                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SMM_UI_C>   SMM_UI                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    isConfig                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_SMM_Tab_C::LoadAndCreateWidgetClass(class UWidgetSwitcher* WidgetSwitcher, TScriptInterface<class IBPI_SMM_UI_C> SMM_UI, bool isConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "LoadAndCreateWidgetClass");

	Params::BPW_SMM_Tab_C_LoadAndCreateWidgetClass Parms{};

	Parms.WidgetSwitcher = WidgetSwitcher;
	Parms.SMM_UI = SMM_UI;
	Parms.isConfig = isConfig;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_SMM_Tab.BPW_SMM_Tab_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBPW_SMM_Tab_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "OnAddedToFocusPath");

	Params::BPW_SMM_Tab_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_SMM_Tab.BPW_SMM_Tab_C.OnLoaded_2E2CCC9F4172B3383914AD806CEBAE03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBPW_SMM_Tab_C::OnLoaded_2E2CCC9F4172B3383914AD806CEBAE03(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "OnLoaded_2E2CCC9F4172B3383914AD806CEBAE03");

	Params::BPW_SMM_Tab_C_OnLoaded_2E2CCC9F4172B3383914AD806CEBAE03 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_SMM_Tab.BPW_SMM_Tab_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBPW_SMM_Tab_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "OnRemovedFromFocusPath");

	Params::BPW_SMM_Tab_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_SMM_Tab.BPW_SMM_Tab_C.OnRep_TabState
// (BlueprintCallable, BlueprintEvent)

void UBPW_SMM_Tab_C::OnRep_TabState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "OnRep_TabState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_SMM_Tab.BPW_SMM_Tab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_SMM_Tab_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "PreConstruct");

	Params::BPW_SMM_Tab_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_SMM_Tab.BPW_SMM_Tab_C.UpdateTabVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_SMM_Tab_C::UpdateTabVisuals(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SMM_Tab_C", "UpdateTabVisuals");

	Params::BPW_SMM_Tab_C_UpdateTabVisuals Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}

}


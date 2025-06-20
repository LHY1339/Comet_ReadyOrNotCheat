﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LoadoutInfo_AttachmentListEntry

#include "Basic.hpp"

#include "W_LoadoutInfo_AttachmentListEntry_classes.hpp"
#include "W_LoadoutInfo_AttachmentListEntry_parameters.hpp"


namespace SDK
{

// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Handled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "BackPage");

	Params::W_LoadoutInfo_AttachmentListEntry_C_BackPage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::W_LoadoutInfo_AttachmentListEntry_C_BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::W_LoadoutInfo_AttachmentListEntry_C_BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PageName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "ChangePage");

	Params::W_LoadoutInfo_AttachmentListEntry_C_ChangePage Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_LoadoutInfo_AttachmentListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry");

	Params::W_LoadoutInfo_AttachmentListEntry_C_ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             OptionNameID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "HeaderSubpageNavigation");

	Params::W_LoadoutInfo_AttachmentListEntry_C_HeaderSubpageNavigation Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Collapse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "Hide");

	Params::W_LoadoutInfo_AttachmentListEntry_C_Hide Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "PreConstruct");

	Params::W_LoadoutInfo_AttachmentListEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "Reveal");

	Params::W_LoadoutInfo_AttachmentListEntry_C_Reveal Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           AttachmentClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::SetInfo(class UClass* AttachmentClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "SetInfo");

	Params::W_LoadoutInfo_AttachmentListEntry_C_SetInfo Parms{};

	Parms.AttachmentClass = AttachmentClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "SetInputMode");

	Params::W_LoadoutInfo_AttachmentListEntry_C_SetInputMode Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                     LoadoutWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "SetLoadoutWidget");

	Params::W_LoadoutInfo_AttachmentListEntry_C_SetLoadoutWidget Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FSavedLoadout&             ActiveLoadout                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutInfo_AttachmentListEntry_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "UpdateActiveLoadout");

	Params::W_LoadoutInfo_AttachmentListEntry_C_UpdateActiveLoadout Parms{};

	Parms.ActiveLoadout = std::move(ActiveLoadout);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TMap<EItemCategory, class UClass*>&ItemCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutInfo_AttachmentListEntry_C::UpdateCurrentItemMap(const TMap<EItemCategory, class UClass*>& ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "UpdateCurrentItemMap");

	Params::W_LoadoutInfo_AttachmentListEntry_C_UpdateCurrentItemMap Parms{};

	Parms.ItemCategory = std::move(ItemCategory);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*                 CurrentSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "UpdateCurrentSlot");

	Params::W_LoadoutInfo_AttachmentListEntry_C_UpdateCurrentSlot Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget**                         Focus                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::GetFocusTarget(class UWidget** Focus) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "GetFocusTarget");

	Params::W_LoadoutInfo_AttachmentListEntry_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;
}

}


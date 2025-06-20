﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_HeadwearOverviewSlot

#include "Basic.hpp"

#include "W_HeadwearOverviewSlot_classes.hpp"
#include "W_HeadwearOverviewSlot_parameters.hpp"


namespace SDK
{

// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.AdjustFontSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                       TextWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   FontSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo*                  Font                                                   (Parm, OutParm, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::AdjustFontSize(class UTextBlock* TextWidget, int32 FontSize, struct FSlateFontInfo* Font)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "AdjustFontSize");

	Params::W_HeadwearOverviewSlot_C_AdjustFontSize Parms{};

	Parms.TextWidget = TextWidget;
	Parms.FontSize = FontSize;

	UObject::ProcessEvent(Func, &Parms);

	if (Font != nullptr)
		*Font = std::move(Parms.Font);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Handled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BackPage");

	Params::W_HeadwearOverviewSlot_C_BackPage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindClick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                      ParentButton_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindClick(class UW_Button_C* ParentButton_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindClick");

	Params::W_HeadwearOverviewSlot_C_BindClick Parms{};

	Parms.ParentButton_0 = ParentButton_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindDoubleClick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                      ParentButton_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindDoubleClick(class UW_Button_C* ParentButton_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindDoubleClick");

	Params::W_HeadwearOverviewSlot_C_BindDoubleClick Parms{};

	Parms.ParentButton_0 = ParentButton_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                      ParentButton_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindHovered(class UW_Button_C* ParentButton_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindHovered");

	Params::W_HeadwearOverviewSlot_C_BindHovered Parms{};

	Parms.ParentButton_0 = ParentButton_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindPressedState
// (Private, BlueprintCallable, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::BindPressedState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindPressedState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindSelectedState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                      ParentButton_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindSelectedState(class UW_Button_C* ParentButton_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindSelectedState");

	Params::W_HeadwearOverviewSlot_C_BindSelectedState Parms{};

	Parms.ParentButton_0 = ParentButton_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindToButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                      ParentButton_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    BindClicks                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindToButton(class UW_Button_C* ParentButton_0, bool BindClicks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindToButton");

	Params::W_HeadwearOverviewSlot_C_BindToButton Parms{};

	Parms.ParentButton_0 = ParentButton_0;
	Parms.BindClicks = BindClicks;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindUnhovered
// (Private, BlueprintCallable, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::BindUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature");

	Params::W_HeadwearOverviewSlot_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature Parms{};

	Parms.Button_0 = Button_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::W_HeadwearOverviewSlot_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature Parms{};

	Parms.Button_0 = Button_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature(class UW_Button_C* Button_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature");

	Params::W_HeadwearOverviewSlot_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature Parms{};

	Parms.Button_0 = Button_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature
// (BlueprintEvent)

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature
// (BlueprintEvent)

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature
// (BlueprintEvent)

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PageName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "ChangePage");

	Params::W_HeadwearOverviewSlot_C_ChangePage Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.ExecuteUbergraph_W_HeadwearOverviewSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::ExecuteUbergraph_W_HeadwearOverviewSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "ExecuteUbergraph_W_HeadwearOverviewSlot");

	Params::W_HeadwearOverviewSlot_C_ExecuteUbergraph_W_HeadwearOverviewSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.GetEquippedColorByState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UW_HeadwearOverviewSlot_C::GetEquippedColorByState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "GetEquippedColorByState");

	Params::W_HeadwearOverviewSlot_C_GetEquippedColorByState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.GetNormalColorByState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UW_HeadwearOverviewSlot_C::GetNormalColorByState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "GetNormalColorByState");

	Params::W_HeadwearOverviewSlot_C_GetNormalColorByState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             OptionNameID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "HeaderSubpageNavigation");

	Params::W_HeadwearOverviewSlot_C_HeaderSubpageNavigation Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Collapse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "Hide");

	Params::W_HeadwearOverviewSlot_C_Hide Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::InputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "InputMethodChanged");

	Params::W_HeadwearOverviewSlot_C_InputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_HeadwearOverviewSlot_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "OnAddedToFocusPath");

	Params::W_HeadwearOverviewSlot_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.OnEquipped
// (Event, Protected, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::OnEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "OnEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "PreConstruct");

	Params::W_HeadwearOverviewSlot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.RefreshInfo
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::RefreshInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "RefreshInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.RefreshItemInfo
// (BlueprintEvent)

void UW_HeadwearOverviewSlot_C::RefreshItemInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "RefreshItemInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "Reveal");

	Params::W_HeadwearOverviewSlot_C_Reveal Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.SetArmorCoverage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArmourCoverage                         ArmorCoverage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::SetArmorCoverage(EArmourCoverage ArmorCoverage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "SetArmorCoverage");

	Params::W_HeadwearOverviewSlot_C_SetArmorCoverage Parms{};

	Parms.ArmorCoverage = ArmorCoverage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.SetArmorMaterial
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*                  Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::SetArmorMaterial(class UArmourMaterial* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "SetArmorMaterial");

	Params::W_HeadwearOverviewSlot_C_SetArmorMaterial Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "SetInputMode");

	Params::W_HeadwearOverviewSlot_C_SetInputMode Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                     LoadoutWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "SetLoadoutWidget");

	Params::W_HeadwearOverviewSlot_C_SetLoadoutWidget Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.SetManualDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      ItemName_0                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      SlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      Subtext                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       ItemImage_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::SetManualDetails(const class FText& ItemName_0, const class FText& SlotName, const class FText& Subtext, class UTexture2D* ItemImage_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "SetManualDetails");

	Params::W_HeadwearOverviewSlot_C_SetManualDetails Parms{};

	Parms.ItemName_0 = std::move(ItemName_0);
	Parms.SlotName = std::move(SlotName);
	Parms.Subtext = std::move(Subtext);
	Parms.ItemImage_0 = ItemImage_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.SetVisualState
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hovered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Equipped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::SetVisualState(bool Hovered, bool Pressed, bool Equipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "SetVisualState");

	Params::W_HeadwearOverviewSlot_C_SetVisualState Parms{};

	Parms.Hovered = Hovered;
	Parms.Pressed = Pressed;
	Parms.Equipped = Equipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.ShowSubtext
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::ShowSubtext(const class FText& Text, bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "ShowSubtext");

	Params::W_HeadwearOverviewSlot_C_ShowSubtext Parms{};

	Parms.Text = std::move(Text);
	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UnbindFromButton
// (Public, BlueprintCallable, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::UnbindFromButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UnbindFromButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FSavedLoadout&             ActiveLoadout                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_HeadwearOverviewSlot_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateActiveLoadout");

	Params::W_HeadwearOverviewSlot_C_UpdateActiveLoadout Parms{};

	Parms.ActiveLoadout = std::move(ActiveLoadout);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateArmor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                        ArmorItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*                  Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EArmourCoverage                         Coverage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateArmor(class ABaseItem* ArmorItem, class UArmourMaterial* Material, EArmourCoverage Coverage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateArmor");

	Params::W_HeadwearOverviewSlot_C_UpdateArmor Parms{};

	Parms.ArmorItem = ArmorItem;
	Parms.Material = Material;
	Parms.Coverage = Coverage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateArmorCoverage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EArmourCoverage                         Coverage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateArmorCoverage(EArmourCoverage Coverage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateArmorCoverage");

	Params::W_HeadwearOverviewSlot_C_UpdateArmorCoverage Parms{};

	Parms.Coverage = Coverage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateArmorMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*                  Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateArmorMaterial(class UArmourMaterial* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateArmorMaterial");

	Params::W_HeadwearOverviewSlot_C_UpdateArmorMaterial Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TMap<EItemCategory, class UClass*>&ItemCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_HeadwearOverviewSlot_C::UpdateCurrentItemMap(const TMap<EItemCategory, class UClass*>& ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateCurrentItemMap");

	Params::W_HeadwearOverviewSlot_C_UpdateCurrentItemMap Parms{};

	Parms.ItemCategory = std::move(ItemCategory);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*                 CurrentSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateCurrentSlot");

	Params::W_HeadwearOverviewSlot_C_UpdateCurrentSlot Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateDetailFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::UpdateDetailFontSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateDetailFontSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateFacewear
// (Public, BlueprintCallable, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::UpdateFacewear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateFacewear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateHeadwear
// (BlueprintCallable, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::UpdateHeadwear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateHeadwear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateHeadwearPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Headwear                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Facewear                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Mount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ENVGStyle                               NVG_Style                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateHeadwearPreview(class UClass* Headwear, class UClass* Facewear, class UClass* Mount, ENVGStyle NVG_Style)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateHeadwearPreview");

	Params::W_HeadwearOverviewSlot_C_UpdateHeadwearPreview Parms{};

	Parms.Headwear = Headwear;
	Parms.Facewear = Facewear;
	Parms.Mount = Mount;
	Parms.NVG_Style = NVG_Style;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateHelmet
// (Public, BlueprintCallable, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::UpdateHelmet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateHelmet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateMountItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::UpdateMountItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateMountItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateNameFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_HeadwearOverviewSlot_C::UpdateNameFontSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateNameFontSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUseGamepad_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateStyle(bool bUseGamepad_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateStyle");

	Params::W_HeadwearOverviewSlot_C_UpdateStyle Parms{};

	Parms.bUseGamepad_0 = bUseGamepad_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget**                         Focus                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::GetFocusTarget(class UWidget** Focus) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "GetFocusTarget");

	Params::W_HeadwearOverviewSlot_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;
}

}


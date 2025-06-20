﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TabCarousel

#include "Basic.hpp"

#include "W_TabCarousel_classes.hpp"
#include "W_TabCarousel_parameters.hpp"


namespace SDK
{

// Function W_TabCarousel.W_TabCarousel_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Handled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "BackPage");

	Params::W_TabCarousel_C_BackPage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;
}


// Function W_TabCarousel.W_TabCarousel_C.BndEvt__W_TabCarousel_LeftActionWidget_K2Node_ComponentBoundEvent_1_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::BndEvt__W_TabCarousel_LeftActionWidget_K2Node_ComponentBoundEvent_1_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "BndEvt__W_TabCarousel_LeftActionWidget_K2Node_ComponentBoundEvent_1_OnInputMethodChanged__DelegateSignature");

	Params::W_TabCarousel_C_BndEvt__W_TabCarousel_LeftActionWidget_K2Node_ComponentBoundEvent_1_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PageName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "ChangePage");

	Params::W_TabCarousel_C_ChangePage Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.ClearHistory
// (Public, BlueprintCallable, BlueprintEvent)

void UW_TabCarousel_C::ClearHistory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "ClearHistory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_TabCarousel.W_TabCarousel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_TabCarousel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_TabCarousel.W_TabCarousel_C.ExecuteUbergraph_W_TabCarousel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::ExecuteUbergraph_W_TabCarousel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "ExecuteUbergraph_W_TabCarousel");

	Params::W_TabCarousel_C_ExecuteUbergraph_W_TabCarousel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.HandleTabCreation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             TabNameID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*                TabButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "HandleTabCreation");

	Params::W_TabCarousel_C_HandleTabCreation Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.HandleTabRemoval
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             TabNameID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*                TabButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "HandleTabRemoval");

	Params::W_TabCarousel_C_HandleTabRemoval Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Collapse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "Hide");

	Params::W_TabCarousel_C_Hide Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.LogTabHistory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::LogTabHistory(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "LogTabHistory");

	Params::W_TabCarousel_C_LogTabHistory Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_TabCarousel_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_TabCarousel.W_TabCarousel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "PreConstruct");

	Params::W_TabCarousel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.RegisterStyledTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      ButtonText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                             TabNameID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ContentWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::RegisterStyledTab(const class FText& ButtonText, class FName TabNameID, class UWidget* ContentWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "RegisterStyledTab");

	Params::W_TabCarousel_C_RegisterStyledTab Parms{};

	Parms.ButtonText = std::move(ButtonText);
	Parms.TabNameID = TabNameID;
	Parms.ContentWidget = ContentWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.RemoveTabFromHistory
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabNameID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::RemoveTabFromHistory(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "RemoveTabFromHistory");

	Params::W_TabCarousel_C_RemoveTabFromHistory Parms{};

	Parms.TabNameID = TabNameID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "Reveal");

	Params::W_TabCarousel_C_Reveal Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.SetDefaultTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabNameID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::SetDefaultTab(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "SetDefaultTab");

	Params::W_TabCarousel_C_SetDefaultTab Parms{};

	Parms.TabNameID = TabNameID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.SetInputActionIconSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 IconSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::SetInputActionIconSize(const struct FVector2D& IconSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "SetInputActionIconSize");

	Params::W_TabCarousel_C_SetInputActionIconSize Parms{};

	Parms.IconSize = std::move(IconSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "SetInputMode");

	Params::W_TabCarousel_C_SetInputMode Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.SetTabName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabNameID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      ButtonText                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_TabCarousel_C::SetTabName(class FName TabNameID, const class FText& ButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "SetTabName");

	Params::W_TabCarousel_C_SetTabName Parms{};

	Parms.TabNameID = TabNameID;
	Parms.ButtonText = std::move(ButtonText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.SetTabOrientation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHorizontalBoxSlot*               HorizontalBoxSlotItem                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::SetTabOrientation(class UHorizontalBoxSlot* HorizontalBoxSlotItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "SetTabOrientation");

	Params::W_TabCarousel_C_SetTabOrientation Parms{};

	Parms.HorizontalBoxSlotItem = HorizontalBoxSlotItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.SetTabStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabNameID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           ButtonStyle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::SetTabStyle(class FName TabNameID, class UClass* ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "SetTabStyle");

	Params::W_TabCarousel_C_SetTabStyle Parms{};

	Parms.TabNameID = TabNameID;
	Parms.ButtonStyle = ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_TabCarousel.W_TabCarousel_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget**                         Focus                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::GetFocusTarget(class UWidget** Focus) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_TabCarousel_C", "GetFocusTarget");

	Params::W_TabCarousel_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;
}

}


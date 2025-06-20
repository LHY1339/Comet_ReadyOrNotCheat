﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ItemSelectionMenu

#include "Basic.hpp"

#include "W_ItemSelectionMenu_classes.hpp"
#include "W_ItemSelectionMenu_parameters.hpp"


namespace SDK
{

// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanNavigate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::CanNavigate(bool* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "CanNavigate");

	Params::W_ItemSelectionMenu_C_CanNavigate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CloseMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_ItemSelectionMenu_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "CloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UW_ItemSelectionMenu_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::ExecuteSelection(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "ExecuteSelection");

	Params::W_ItemSelectionMenu_C_ExecuteSelection Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteUbergraph_W_ItemSelectionMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::ExecuteUbergraph_W_ItemSelectionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "ExecuteUbergraph_W_ItemSelectionMenu");

	Params::W_ItemSelectionMenu_C_ExecuteUbergraph_W_ItemSelectionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FadeOutSelectedColumn
// (Public, BlueprintCallable, BlueprintEvent)

void UW_ItemSelectionMenu_C::FadeOutSelectedColumn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "FadeOutSelectedColumn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.HideMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UW_ItemSelectionMenu_C::HideMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "HideMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Initialize
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bForce                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TArray<struct FItemSelectionGroup>&InItemSelectionGroups                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_ItemSelectionMenu_C::Initialize(bool bForce, const TArray<struct FItemSelectionGroup>& InItemSelectionGroups)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "Initialize");

	Params::W_ItemSelectionMenu_C_Initialize Parms{};

	Parms.bForce = bForce;
	Parms.InItemSelectionGroups = std::move(InItemSelectionGroups);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.IsOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::IsOpen(bool* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "IsOpen");

	Params::W_ItemSelectionMenu_C_IsOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnFadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void UW_ItemSelectionMenu_C::OnFadeOutFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "OnFadeOutFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_ItemSelectionMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnWeaponMagCheck_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseMagazineWeapon*              MagazineWeapon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::OnWeaponMagCheck_Event_0(class ABaseMagazineWeapon* MagazineWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "OnWeaponMagCheck_Event_0");

	Params::W_ItemSelectionMenu_C_OnWeaponMagCheck_Event_0 Parms{};

	Parms.MagazineWeapon = MagazineWeapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OpenMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKey&                      TriggerKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::OpenMenu(const struct FKey& TriggerKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "OpenMenu");

	Params::W_ItemSelectionMenu_C_OpenMenu Parms{};

	Parms.TriggerKey = std::move(TriggerKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "PreConstruct");

	Params::W_ItemSelectionMenu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.QueuedExecuteSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UW_ItemSelectionMenu_C::QueuedExecuteSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "QueuedExecuteSelection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.RemoveItemFromMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                        ItemToRemove                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   List_Index                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::RemoveItemFromMenu(class ABaseItem* ItemToRemove, int32 List_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "RemoveItemFromMenu");

	Params::W_ItemSelectionMenu_C_RemoveItemFromMenu Parms{};

	Parms.ItemToRemove = ItemToRemove;
	Parms.List_Index = List_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ResetAnimationFadeOutState
// (Public, BlueprintCallable, BlueprintEvent)

void UW_ItemSelectionMenu_C::ResetAnimationFadeOutState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "ResetAnimationFadeOutState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.SetMouseWheelDelta
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewMouseWheelDelta                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::SetMouseWheelDelta(double NewMouseWheelDelta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "SetMouseWheelDelta");

	Params::W_ItemSelectionMenu_C_SetMouseWheelDelta Parms{};

	Parms.NewMouseWheelDelta = NewMouseWheelDelta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "Tick");

	Params::W_ItemSelectionMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.UpdateDebugInfo
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_ItemSelectionMenu_C::UpdateDebugInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "UpdateDebugInfo");

	Params::W_ItemSelectionMenu_C_UpdateDebugInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanQueueSelection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool*                                   Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::CanQueueSelection(bool* Return_Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "CanQueueSelection");

	Params::W_ItemSelectionMenu_C_CanQueueSelection Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindColumnIndexFromItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABaseItem*                        InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32*                                  Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::FindColumnIndexFromItem(class ABaseItem* InItem, int32* Return_Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "FindColumnIndexFromItem");

	Params::W_ItemSelectionMenu_C_FindColumnIndexFromItem Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}


// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindItemFromColumnIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UW_ItemSelection_ItemList_C**     Return_Value                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_C::FindItemFromColumnIndex(class UW_ItemSelection_ItemList_C** Return_Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ItemSelectionMenu_C", "FindItemFromColumnIndex");

	Params::W_ItemSelectionMenu_C_FindItemFromColumnIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

}


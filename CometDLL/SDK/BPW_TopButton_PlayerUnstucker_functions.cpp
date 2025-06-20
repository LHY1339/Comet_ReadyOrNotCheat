﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_TopButton_PlayerUnstucker

#include "Basic.hpp"

#include "BPW_TopButton_PlayerUnstucker_classes.hpp"
#include "BPW_TopButton_PlayerUnstucker_parameters.hpp"


namespace SDK
{

// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.BndEvt__BPW_TopButton_Customize_Button_Customize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_TopButton_PlayerUnstucker_C::BndEvt__BPW_TopButton_Customize_Button_Customize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "BndEvt__BPW_TopButton_Customize_Button_Customize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.ExecuteUbergraph_BPW_TopButton_PlayerUnstucker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TopButton_PlayerUnstucker_C::ExecuteUbergraph_BPW_TopButton_PlayerUnstucker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "ExecuteUbergraph_BPW_TopButton_PlayerUnstucker");

	Params::BPW_TopButton_PlayerUnstucker_C_ExecuteUbergraph_BPW_TopButton_PlayerUnstucker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.LogUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_TopButton_PlayerUnstucker_C::LogUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "LogUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.ModMenuPostInit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TScriptInterface<class IBPI_SMM_UI_C>SMM_UI_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TopButton_PlayerUnstucker_C::ModMenuPostInit(const TScriptInterface<class IBPI_SMM_UI_C> SMM_UI_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "ModMenuPostInit");

	Params::BPW_TopButton_PlayerUnstucker_C_ModMenuPostInit Parms{};

	Parms.SMM_UI_0 = SMM_UI_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.OnRetrievedSG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    ModName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    SlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USMM_SaveGame_Base_C*             SMM_SaveGame_Config                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPW_TopButton_PlayerUnstucker_C::OnRetrievedSG(const class FString& ModName, const class FString& SlotName, class USMM_SaveGame_Base_C* SMM_SaveGame_Config)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "OnRetrievedSG");

	Params::BPW_TopButton_PlayerUnstucker_C_OnRetrievedSG Parms{};

	Parms.ModName = std::move(ModName);
	Parms.SlotName = std::move(SlotName);
	Parms.SMM_SaveGame_Config = SMM_SaveGame_Config;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.OnSavedSG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    ModName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    SlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USMM_SaveGame_Base_C*             SMM_SaveGame                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPW_TopButton_PlayerUnstucker_C::OnSavedSG(const class FString& ModName, const class FString& SlotName, class USMM_SaveGame_Base_C* SMM_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "OnSavedSG");

	Params::BPW_TopButton_PlayerUnstucker_C_OnSavedSG Parms{};

	Parms.ModName = std::move(ModName);
	Parms.SlotName = std::move(SlotName);
	Parms.SMM_SaveGame = SMM_SaveGame;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.PageClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_TopButton_PlayerUnstucker_C::PageClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "PageClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.PageOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_TopButton_PlayerUnstucker_C::PageOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "PageOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.PlayerStarts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerStart*>&            PlayerStarts_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class APawn*                            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool*                                   nearby                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerStart*>*            nearbystarts                                           (Parm, OutParm)

void UBPW_TopButton_PlayerUnstucker_C::PlayerStarts(TArray<class APlayerStart*>& PlayerStarts_0, class APawn* Pawn, bool* nearby, TArray<class APlayerStart*>* nearbystarts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "PlayerStarts");

	Params::BPW_TopButton_PlayerUnstucker_C_PlayerStarts Parms{};

	Parms.PlayerStarts_0 = std::move(PlayerStarts_0);
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	PlayerStarts_0 = std::move(Parms.PlayerStarts_0);

	if (nearby != nullptr)
		*nearby = Parms.nearby;

	if (nearbystarts != nullptr)
		*nearbystarts = std::move(Parms.nearbystarts);
}


// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.SendTabButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPW_TopButton_PlayerUnstucker_C::SendTabButton(class UButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "SendTabButton");

	Params::BPW_TopButton_PlayerUnstucker_C_SendTabButton Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.SetNavigationFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                         Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPW_TopButton_PlayerUnstucker_C::SetNavigationFocus(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "SetNavigationFocus");

	Params::BPW_TopButton_PlayerUnstucker_C_SetNavigationFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function BPW_TopButton_PlayerUnstucker.BPW_TopButton_PlayerUnstucker_C.Unstuck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_TopButton_PlayerUnstucker_C::Unstuck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TopButton_PlayerUnstucker_C", "Unstuck");

	UObject::ProcessEvent(Func, nullptr);
}

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseController

#include "Basic.hpp"

#include "BP_BaseController_classes.hpp"
#include "BP_BaseController_parameters.hpp"


namespace SDK
{

// Function BP_BaseController.BP_BaseController_C.AcknowledgeVote
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FVoteData&                 CurrentVoteData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BaseController_C::AcknowledgeVote(const struct FVoteData& CurrentVoteData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "AcknowledgeVote");

	Params::BP_BaseController_C_AcknowledgeVote Parms{};

	Parms.CurrentVoteData = std::move(CurrentVoteData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.BP_ClientWasKicked
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      KickReason                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BaseController_C::BP_ClientWasKicked(const class FText& KickReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "BP_ClientWasKicked");

	Params::BP_BaseController_C_BP_ClientWasKicked Parms{};

	Parms.KickReason = std::move(KickReason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.CloseDeployMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseController_C::CloseDeployMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "CloseDeployMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseController.BP_BaseController_C.ExecuteUbergraph_BP_BaseController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::ExecuteUbergraph_BP_BaseController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "ExecuteUbergraph_BP_BaseController");

	Params::BP_BaseController_C_ExecuteUbergraph_BP_BaseController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.GetJoystickDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJoystickTypes                          Stick                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D*                       StickInput                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::GetJoystickDirection(EJoystickTypes Stick, struct FVector2D* StickInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "GetJoystickDirection");

	Params::BP_BaseController_C_GetJoystickDirection Parms{};

	Parms.Stick = Stick;

	UObject::ProcessEvent(Func, &Parms);

	if (StickInput != nullptr)
		*StickInput = std::move(Parms.StickInput);
}


// Function BP_BaseController.BP_BaseController_C.HideEscapeMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseController_C::HideEscapeMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "HideEscapeMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_End_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_End_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_End_K2Node_InputKeyEvent_0");

	Params::BP_BaseController_C_InpActEvt_End_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_Equals_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_Equals_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_Equals_K2Node_InputKeyEvent_1");

	Params::BP_BaseController_C_InpActEvt_Equals_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_IA_EndPrimaryUse_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FInputActionValue&         ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UInputAction*               SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_IA_EndPrimaryUse_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_IA_EndPrimaryUse_K2Node_EnhancedInputActionEvent_0");

	Params::BP_BaseController_C_InpActEvt_IA_EndPrimaryUse_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_IA_PrimaryUse_K2Node_EnhancedInputActionEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FInputActionValue&         ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UInputAction*               SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_IA_PrimaryUse_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_IA_PrimaryUse_K2Node_EnhancedInputActionEvent_1");

	Params::BP_BaseController_C_InpActEvt_IA_PrimaryUse_K2Node_EnhancedInputActionEvent_1 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_ReadyUp_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_ReadyUp_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_ReadyUp_K2Node_InputActionEvent_0");

	Params::BP_BaseController_C_InpActEvt_ReadyUp_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_VoteNo_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_VoteNo_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_VoteNo_K2Node_InputActionEvent_1");

	Params::BP_BaseController_C_InpActEvt_VoteNo_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_VoteYes_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_VoteYes_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_VoteYes_K2Node_InputActionEvent_2");

	Params::BP_BaseController_C_InpActEvt_VoteYes_K2Node_InputActionEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.Input Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::Input_Changed(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "Input Changed");

	Params::BP_BaseController_C_Input_Changed Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.IsEquippedWeaponAimAssistEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   IsAimAssistEnabled                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::IsEquippedWeaponAimAssistEnabled(bool* IsAimAssistEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "IsEquippedWeaponAimAssistEnabled");

	Params::BP_BaseController_C_IsEquippedWeaponAimAssistEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsAimAssistEnabled != nullptr)
		*IsAimAssistEnabled = Parms.IsAimAssistEnabled;
}


// Function BP_BaseController.BP_BaseController_C.IsPlayerLowReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   IsLowReady                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::IsPlayerLowReady(bool* IsLowReady)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "IsPlayerLowReady");

	Params::BP_BaseController_C_IsPlayerLowReady Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsLowReady != nullptr)
		*IsLowReady = Parms.IsLowReady;
}


// Function BP_BaseController.BP_BaseController_C.OnFailure_E5236F624136A216FC80949690426E05
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseController_C::OnFailure_E5236F624136A216FC80949690426E05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "OnFailure_E5236F624136A216FC80949690426E05");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseController.BP_BaseController_C.OnSuccess_E5236F624136A216FC80949690426E05
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseController_C::OnSuccess_E5236F624136A216FC80949690426E05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "OnSuccess_E5236F624136A216FC80949690426E05");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseController.BP_BaseController_C.PresentVoteResult
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FVoteData&                 VoteResult                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   YesVotes                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NoVotes                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::PresentVoteResult(const struct FVoteData& VoteResult, int32 YesVotes, int32 NoVotes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "PresentVoteResult");

	Params::BP_BaseController_C_PresentVoteResult Parms{};

	Parms.VoteResult = std::move(VoteResult);
	Parms.YesVotes = YesVotes;
	Parms.NoVotes = NoVotes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BaseController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseController.BP_BaseController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "ReceiveTick");

	Params::BP_BaseController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.RequestVoteInput
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FVoteData&                 CurrentVoteData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BaseController_C::RequestVoteInput(const struct FVoteData& CurrentVoteData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "RequestVoteInput");

	Params::BP_BaseController_C_RequestVoteInput Parms{};

	Parms.CurrentVoteData = std::move(CurrentVoteData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.Server_FreeCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_BaseController_C::Server_FreeCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "Server_FreeCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseController.BP_BaseController_C.ServerPossesPawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Pawn_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::ServerPossesPawn(class APawn* Pawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "ServerPossesPawn");

	Params::BP_BaseController_C_ServerPossesPawn Parms{};

	Parms.Pawn_0 = Pawn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.SetUpVoteWidget_Gamepad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_VotePopUp_gamepad_C*           Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::SetUpVoteWidget_Gamepad(class UW_VotePopUp_gamepad_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "SetUpVoteWidget_Gamepad");

	Params::BP_BaseController_C_SetUpVoteWidget_Gamepad Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.ShowCoopScoreChangeWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   ScoreChangeValue                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::ShowCoopScoreChangeWidget(float ScoreChangeValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "ShowCoopScoreChangeWidget");

	Params::BP_BaseController_C_ShowCoopScoreChangeWidget Parms{};

	Parms.ScoreChangeValue = ScoreChangeValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseController.BP_BaseController_C.SpawnEscapeMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseController_C::SpawnEscapeMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "SpawnEscapeMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseController.BP_BaseController_C.StopVoteInput
// (Event, Public, BlueprintEvent)

void ABP_BaseController_C::StopVoteInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "StopVoteInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseController.BP_BaseController_C.UpdateWeaponAimPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BaseController_C::UpdateWeaponAimPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseController_C", "UpdateWeaponAimPoint");

	UObject::ProcessEvent(Func, nullptr);
}

}


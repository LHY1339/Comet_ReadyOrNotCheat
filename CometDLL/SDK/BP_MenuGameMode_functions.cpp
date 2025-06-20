﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuGameMode

#include "Basic.hpp"

#include "BP_MenuGameMode_classes.hpp"
#include "BP_MenuGameMode_parameters.hpp"


namespace SDK
{

// Function BP_MenuGameMode.BP_MenuGameMode_C.SpawnDefaultPawnFor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      NewPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           StartSpot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class APawn* ABP_MenuGameMode_C::SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGameMode_C", "SpawnDefaultPawnFor");

	Params::BP_MenuGameMode_C_SpawnDefaultPawnFor Parms{};

	Parms.NewPlayer = NewPlayer;
	Parms.StartSpot = StartSpot;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MenuGameMode.BP_MenuGameMode_C.ShowMessageDisplayBox
// (Event, Public, BlueprintEvent)
// Parameters:
// const class FString&                    MessageText                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    ButtonText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const bool                              QuitOnPress                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuGameMode_C::ShowMessageDisplayBox(const class FString& MessageText, const class FString& ButtonText, const bool QuitOnPress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGameMode_C", "ShowMessageDisplayBox");

	Params::BP_MenuGameMode_C_ShowMessageDisplayBox Parms{};

	Parms.MessageText = std::move(MessageText);
	Parms.ButtonText = std::move(ButtonText);
	Parms.QuitOnPress = QuitOnPress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuGameMode.BP_MenuGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuGameMode_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGameMode_C", "ReceiveTick");

	Params::BP_MenuGameMode_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuGameMode.BP_MenuGameMode_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuGameMode_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGameMode_C", "ReceiveEndPlay");

	Params::BP_MenuGameMode_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuGameMode.BP_MenuGameMode_C.OnMessageClicked
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuGameMode_C::OnMessageClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGameMode_C", "OnMessageClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuGameMode.BP_MenuGameMode_C.FindSpawnPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const class FString&                    Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTransform*                      SpawnPoint                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuGameMode_C::FindSpawnPoint(const class FString& Tag, struct FTransform* SpawnPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGameMode_C", "FindSpawnPoint");

	Params::BP_MenuGameMode_C_FindSpawnPoint Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnPoint != nullptr)
		*SpawnPoint = std::move(Parms.SpawnPoint);
}


// Function BP_MenuGameMode.BP_MenuGameMode_C.ExecuteUbergraph_BP_MenuGameMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuGameMode_C::ExecuteUbergraph_BP_MenuGameMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGameMode_C", "ExecuteUbergraph_BP_MenuGameMode");

	Params::BP_MenuGameMode_C_ExecuteUbergraph_BP_MenuGameMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuGameMode.BP_MenuGameMode_C.CreateRestartWidget
// (Event, Public, BlueprintEvent)

void ABP_MenuGameMode_C::CreateRestartWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGameMode_C", "CreateRestartWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuGameMode.BP_MenuGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MenuGameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGameMode_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuGameMode.BP_MenuGameMode_C.ChoosePlayerStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AActor* ABP_MenuGameMode_C::ChoosePlayerStart(class AController* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGameMode_C", "ChoosePlayerStart");

	Params::BP_MenuGameMode_C_ChoosePlayerStart Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


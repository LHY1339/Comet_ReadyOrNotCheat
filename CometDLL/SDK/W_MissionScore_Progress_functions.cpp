﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MissionScore_Progress

#include "Basic.hpp"

#include "W_MissionScore_Progress_classes.hpp"
#include "W_MissionScore_Progress_parameters.hpp"


namespace SDK
{

// Function W_MissionScore_Progress.W_MissionScore_Progress_C.AddToScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_MissionScore_Progress_C::AddToScore()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "AddToScore");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_MissionScore_Progress_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_MissionScore_Progress_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.ExecuteUbergraph_W_MissionScore_Progress
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_Progress_C::ExecuteUbergraph_W_MissionScore_Progress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "ExecuteUbergraph_W_MissionScore_Progress");

	Params::W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.Finished_FBB0C8E14C37FCFA6D2B82B609745084
// (BlueprintCallable, BlueprintEvent)

void UW_MissionScore_Progress_C::Finished_FBB0C8E14C37FCFA6D2B82B609745084()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "Finished_FBB0C8E14C37FCFA6D2B82B609745084");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.gradeSound
// (BlueprintCallable, BlueprintEvent)

void UW_MissionScore_Progress_C::gradeSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "gradeSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_Progress_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "PreConstruct");

	Params::W_MissionScore_Progress_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.RevealGrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Grade_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bUnresolved                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_Progress_C::RevealGrade(const class FString& Grade_0, bool bUnresolved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "RevealGrade");

	Params::W_MissionScore_Progress_C_RevealGrade Parms{};

	Parms.Grade_0 = std::move(Grade_0);
	Parms.bUnresolved = bUnresolved;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.SequenceEvent__ENTRYPOINTW_MissionScore_Progress
// (Public, BlueprintCallable, BlueprintEvent)

void UW_MissionScore_Progress_C::SequenceEvent__ENTRYPOINTW_MissionScore_Progress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "SequenceEvent__ENTRYPOINTW_MissionScore_Progress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.SetDebug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      DebugText1                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      DebugText2                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      DebugText3                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MissionScore_Progress_C::SetDebug(const class FText& DebugText1, const class FText& DebugText2, const class FText& DebugText3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "SetDebug");

	Params::W_MissionScore_Progress_C_SetDebug Parms{};

	Parms.DebugText1 = std::move(DebugText1);
	Parms.DebugText2 = std::move(DebugText2);
	Parms.DebugText3 = std::move(DebugText3);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_Progress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "Tick");

	Params::W_MissionScore_Progress_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.UpdatePenalty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FScorePenaltyData&         PenaltyData_0                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MissionScore_Progress_C::UpdatePenalty(const struct FScorePenaltyData& PenaltyData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "UpdatePenalty");

	Params::W_MissionScore_Progress_C_UpdatePenalty Parms{};

	Parms.PenaltyData_0 = std::move(PenaltyData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.UpdateProgressMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentScore_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_Progress_C::UpdateProgressMeter(int32 CurrentScore_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "UpdateProgressMeter");

	Params::W_MissionScore_Progress_C_UpdateProgressMeter Parms{};

	Parms.CurrentScore_0 = CurrentScore_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.UpdateScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FScoreGroup&               ScoreData_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UW_MissionScore_Progress_C::UpdateScore(const struct FScoreGroup& ScoreData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "UpdateScore");

	Params::W_MissionScore_Progress_C_UpdateScore Parms{};

	Parms.ScoreData_0 = std::move(ScoreData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_Progress.W_MissionScore_Progress_C.UpdateSound
// (Public, BlueprintCallable, BlueprintEvent)

void UW_MissionScore_Progress_C::UpdateSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_Progress_C", "UpdateSound");

	UObject::ProcessEvent(Func, nullptr);
}

}


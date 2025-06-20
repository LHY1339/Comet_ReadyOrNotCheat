﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MissionScore_ScorePanel_Entry

#include "Basic.hpp"

#include "W_MissionScore_ScorePanel_Entry_classes.hpp"
#include "W_MissionScore_ScorePanel_Entry_parameters.hpp"


namespace SDK
{

// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Handled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_Entry_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "BackPage");

	Params::W_MissionScore_ScorePanel_Entry_C_BackPage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PageName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_Entry_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "ChangePage");

	Params::W_MissionScore_ScorePanel_Entry_C_ChangePage Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_MissionScore_ScorePanel_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.ExecuteUbergraph_W_MissionScore_ScorePanel_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_Entry_C::ExecuteUbergraph_W_MissionScore_ScorePanel_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "ExecuteUbergraph_W_MissionScore_ScorePanel_Entry");

	Params::W_MissionScore_ScorePanel_Entry_C_ExecuteUbergraph_W_MissionScore_ScorePanel_Entry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.Finished_0849F9E54A775090B38983909C2585B3
// (BlueprintCallable, BlueprintEvent)

void UW_MissionScore_ScorePanel_Entry_C::Finished_0849F9E54A775090B38983909C2585B3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "Finished_0849F9E54A775090B38983909C2585B3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Collapse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_Entry_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "Hide");

	Params::W_MissionScore_ScorePanel_Entry_C_Hide Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.numberSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Event_Receiver                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_Entry_C::numberSound(class UObject* Event_Receiver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "numberSound");

	Params::W_MissionScore_ScorePanel_Entry_C_numberSound Parms{};

	Parms.Event_Receiver = Event_Receiver;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "PreConstruct");

	Params::W_MissionScore_ScorePanel_Entry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_Entry_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "Reveal");

	Params::W_MissionScore_ScorePanel_Entry_C_Reveal Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.revealSound
// (BlueprintCallable, BlueprintEvent)

void UW_MissionScore_ScorePanel_Entry_C::revealSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "revealSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry
// (Public, BlueprintCallable, BlueprintEvent)

void UW_MissionScore_ScorePanel_Entry_C::SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Event_Receiver                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_Entry_C::SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_0(class UObject* Event_Receiver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_0");

	Params::W_MissionScore_ScorePanel_Entry_C_SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_0 Parms{};

	Parms.Event_Receiver = Event_Receiver;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_1
// (Public, BlueprintCallable, BlueprintEvent)

void UW_MissionScore_ScorePanel_Entry_C::SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Event_Receiver                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_Entry_C::SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_2(class UObject* Event_Receiver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_2");

	Params::W_MissionScore_ScorePanel_Entry_C_SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_2 Parms{};

	Parms.Event_Receiver = Event_Receiver;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SetCountText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_MissionScore_ScorePanel_Entry_C::SetCountText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "SetCountText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_Entry_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "SetInputMode");

	Params::W_MissionScore_ScorePanel_Entry_C_SetInputMode Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SetNameText
// (Private, BlueprintCallable, BlueprintEvent)

void UW_MissionScore_ScorePanel_Entry_C::SetNameText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "SetNameText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SetValueText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_MissionScore_ScorePanel_Entry_C::SetValueText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "SetValueText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget**                         Focus                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_Entry_C::GetFocusTarget(class UWidget** Focus) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_Entry_C", "GetFocusTarget");

	Params::W_MissionScore_ScorePanel_Entry_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;
}

}


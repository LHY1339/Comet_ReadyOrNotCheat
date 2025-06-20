﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_Roster_MP

#include "Basic.hpp"

#include "W_PreMission_Tablet_Roster_MP_classes.hpp"
#include "W_PreMission_Tablet_Roster_MP_parameters.hpp"


namespace SDK
{

// Function W_PreMission_Tablet_Roster_MP.W_PreMission_Tablet_Roster_MP_C.AddPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class AReadyOrNotPlayerState*&    Ready_or_Not_Player_State                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Roster_MP_C::AddPlayer(const class AReadyOrNotPlayerState*& Ready_or_Not_Player_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Roster_MP_C", "AddPlayer");

	Params::W_PreMission_Tablet_Roster_MP_C_AddPlayer Parms{};

	Parms.Ready_or_Not_Player_State = Ready_or_Not_Player_State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_Roster_MP.W_PreMission_Tablet_Roster_MP_C.RemovePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotPlayerState*           Ready_or_Not_Player_State                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Roster_MP_C::RemovePlayer(class AReadyOrNotPlayerState* Ready_or_Not_Player_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Roster_MP_C", "RemovePlayer");

	Params::W_PreMission_Tablet_Roster_MP_C_RemovePlayer Parms{};

	Parms.Ready_or_Not_Player_State = Ready_or_Not_Player_State;

	UObject::ProcessEvent(Func, &Parms);
}

}


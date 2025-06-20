﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_MessengerMessage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C
// 0x00C8 (0x0388 - 0x02C0)
class UW_PreMission_Tablet_MessengerMessage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       animSent;                                          // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       animReceived;                                      // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Sender;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 icn_alert;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                MessageBubble;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Sender;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       txt_Message;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       txt_SelfName;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       txt_SenderName;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OfficerMarker_C*                     W_OfficerMarker;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsSystemMessage;                                   // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerName;                                        // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                 PlayerState;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 Message;                                           // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDateTime                              Timestamp;                                         // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           SentMessageColor;                                  // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ReceivedMessageColor;                              // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SystemMessageColor;                                // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SameSender;                                        // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_PreMission_Tablet_MessengerMessage(int32 EntryPoint);
	void GetIsSelf(bool* IsSelf);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PreMission_Tablet_MessengerMessage_C">();
	}
	static class UW_PreMission_Tablet_MessengerMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PreMission_Tablet_MessengerMessage_C>();
	}
};
static_assert(alignof(UW_PreMission_Tablet_MessengerMessage_C) == 0x000008, "Wrong alignment on UW_PreMission_Tablet_MessengerMessage_C");
static_assert(sizeof(UW_PreMission_Tablet_MessengerMessage_C) == 0x000388, "Wrong size on UW_PreMission_Tablet_MessengerMessage_C");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, UberGraphFrame) == 0x0002C0, "Member 'UW_PreMission_Tablet_MessengerMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, animSent) == 0x0002C8, "Member 'UW_PreMission_Tablet_MessengerMessage_C::animSent' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, animReceived) == 0x0002D0, "Member 'UW_PreMission_Tablet_MessengerMessage_C::animReceived' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, HB_Sender) == 0x0002D8, "Member 'UW_PreMission_Tablet_MessengerMessage_C::HB_Sender' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, icn_alert) == 0x0002E0, "Member 'UW_PreMission_Tablet_MessengerMessage_C::icn_alert' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, MessageBubble) == 0x0002E8, "Member 'UW_PreMission_Tablet_MessengerMessage_C::MessageBubble' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, Sender) == 0x0002F0, "Member 'UW_PreMission_Tablet_MessengerMessage_C::Sender' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, txt_Message) == 0x0002F8, "Member 'UW_PreMission_Tablet_MessengerMessage_C::txt_Message' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, txt_SelfName) == 0x000300, "Member 'UW_PreMission_Tablet_MessengerMessage_C::txt_SelfName' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, txt_SenderName) == 0x000308, "Member 'UW_PreMission_Tablet_MessengerMessage_C::txt_SenderName' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, W_OfficerMarker) == 0x000310, "Member 'UW_PreMission_Tablet_MessengerMessage_C::W_OfficerMarker' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, IsSystemMessage) == 0x000318, "Member 'UW_PreMission_Tablet_MessengerMessage_C::IsSystemMessage' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, PlayerName) == 0x000320, "Member 'UW_PreMission_Tablet_MessengerMessage_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, PlayerState) == 0x000330, "Member 'UW_PreMission_Tablet_MessengerMessage_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, Message) == 0x000338, "Member 'UW_PreMission_Tablet_MessengerMessage_C::Message' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, Timestamp) == 0x000348, "Member 'UW_PreMission_Tablet_MessengerMessage_C::Timestamp' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, SentMessageColor) == 0x000350, "Member 'UW_PreMission_Tablet_MessengerMessage_C::SentMessageColor' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, ReceivedMessageColor) == 0x000360, "Member 'UW_PreMission_Tablet_MessengerMessage_C::ReceivedMessageColor' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, SystemMessageColor) == 0x000370, "Member 'UW_PreMission_Tablet_MessengerMessage_C::SystemMessageColor' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_MessengerMessage_C, SameSender) == 0x000380, "Member 'UW_PreMission_Tablet_MessengerMessage_C::SameSender' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VotePopUp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_VotePopUp.W_VotePopUp_C
// 0x00A8 (0x0368 - 0x02C0)
class UW_VotePopUp_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_185;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         NoVote_Box;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               NoVoteDivider_Box;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NoVoteScore_Text;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RootBox;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_4;                                       // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_7;                                       // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_9;                                       // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_11;                                      // 0x0310(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_169;                                     // 0x0318(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         VoteState;                                         // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_324[0x4];                                      // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Current_Vote_Reason;                               // 0x0328(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          VoteEnabled;                                       // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_341[0x3];                                      // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Yes_Votes;                                         // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         No_Votes;                                          // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Vote_No_Enabled;                                   // 0x034C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WidgetActive;                                      // 0x034D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34E[0x2];                                      // 0x034E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CurrentVoteQuestion;                               // 0x0350(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Construct();
	void ExecuteUbergraph_W_VotePopUp(int32 EntryPoint);
	bool GetbIsEnabled_0();
	class FText GetText_1();
	class FText GetText_4();
	ESlateVisibility GetVoteNo_Visibility();
	class FText GetVoteNoKeyBinding();
	class FText GetVoteYesKeyBinding();
	void StartVote(const class FText& VoteReason_0, const class FText& VoteQuestion, bool bCanVoteNo);
	void VoteEnd();
	ESlateVisibility VoteNo_Visibility_1();
	ESlateVisibility VoteNo_Visibility_2();
	class FText VoteReason();

	void CanVoteNo(bool* Return_Value) const;
	class FText GetNoVotes() const;
	class FText GetVoteQuestion() const;
	ESlateVisibility GetVoteVisibility() const;
	class FText GetYesVotes() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_VotePopUp_C">();
	}
	static class UW_VotePopUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_VotePopUp_C>();
	}
};
static_assert(alignof(UW_VotePopUp_C) == 0x000008, "Wrong alignment on UW_VotePopUp_C");
static_assert(sizeof(UW_VotePopUp_C) == 0x000368, "Wrong size on UW_VotePopUp_C");
static_assert(offsetof(UW_VotePopUp_C, UberGraphFrame) == 0x0002C0, "Member 'UW_VotePopUp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, Image) == 0x0002C8, "Member 'UW_VotePopUp_C::Image' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, Image_185) == 0x0002D0, "Member 'UW_VotePopUp_C::Image_185' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, NoVote_Box) == 0x0002D8, "Member 'UW_VotePopUp_C::NoVote_Box' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, NoVoteDivider_Box) == 0x0002E0, "Member 'UW_VotePopUp_C::NoVoteDivider_Box' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, NoVoteScore_Text) == 0x0002E8, "Member 'UW_VotePopUp_C::NoVoteScore_Text' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, RootBox) == 0x0002F0, "Member 'UW_VotePopUp_C::RootBox' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, TextBlock_4) == 0x0002F8, "Member 'UW_VotePopUp_C::TextBlock_4' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, TextBlock_7) == 0x000300, "Member 'UW_VotePopUp_C::TextBlock_7' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, TextBlock_9) == 0x000308, "Member 'UW_VotePopUp_C::TextBlock_9' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, TextBlock_11) == 0x000310, "Member 'UW_VotePopUp_C::TextBlock_11' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, TextBlock_169) == 0x000318, "Member 'UW_VotePopUp_C::TextBlock_169' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, VoteState) == 0x000320, "Member 'UW_VotePopUp_C::VoteState' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, Current_Vote_Reason) == 0x000328, "Member 'UW_VotePopUp_C::Current_Vote_Reason' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, VoteEnabled) == 0x000340, "Member 'UW_VotePopUp_C::VoteEnabled' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, Yes_Votes) == 0x000344, "Member 'UW_VotePopUp_C::Yes_Votes' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, No_Votes) == 0x000348, "Member 'UW_VotePopUp_C::No_Votes' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, Vote_No_Enabled) == 0x00034C, "Member 'UW_VotePopUp_C::Vote_No_Enabled' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, WidgetActive) == 0x00034D, "Member 'UW_VotePopUp_C::WidgetActive' has a wrong offset!");
static_assert(offsetof(UW_VotePopUp_C, CurrentVoteQuestion) == 0x000350, "Member 'UW_VotePopUp_C::CurrentVoteQuestion' has a wrong offset!");

}


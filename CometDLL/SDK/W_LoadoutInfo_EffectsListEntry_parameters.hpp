﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LoadoutInfo_EffectsListEntry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ST_ItemEffects_structs.hpp"
#include "ReadyOrNot_structs.hpp"


namespace SDK::Params
{

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.BackPage
// 0x0001 (0x0001 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_BackPage final
{
public:
	bool                                          Handled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_BackPage) == 0x000001, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_BackPage");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_BackPage) == 0x000001, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_BackPage");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_BackPage, Handled) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_BackPage::Handled' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.ChangePage
// 0x0008 (0x0008 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_ChangePage final
{
public:
	class FName                                   PageName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_ChangePage) == 0x000004, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_ChangePage");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_ChangePage) == 0x000008, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_ChangePage");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ChangePage, PageName) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_ChangePage::PageName' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry
// 0x0398 (0x0398 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsGamepad;                            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_PageName;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                          K2Node_Event_ActiveLoadout;                        // 0x0010(0x02E8)()
	class UW_LoadoutSlot_C*                       K2Node_Event_CurrentSlot;                          // 0x02F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<EItemCategory, class UClass*>            K2Node_Event_ItemCategory;                         // 0x0300(0x0050)()
	class UW_Loadout_C*                           K2Node_Event_LoadoutWidget;                        // 0x0350(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_OptionNameID;                         // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_Delay_1;                              // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_Delay;                                // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Collapse;                             // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0388(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast_1;            // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry) == 0x000008, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry) == 0x000398, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, EntryPoint) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, K2Node_Event_IsGamepad) == 0x000004, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::K2Node_Event_IsGamepad' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, K2Node_Event_PageName) == 0x000008, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::K2Node_Event_PageName' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, K2Node_Event_ActiveLoadout) == 0x000010, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::K2Node_Event_ActiveLoadout' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, K2Node_Event_CurrentSlot) == 0x0002F8, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::K2Node_Event_CurrentSlot' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, K2Node_Event_ItemCategory) == 0x000300, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::K2Node_Event_ItemCategory' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, K2Node_Event_LoadoutWidget) == 0x000350, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::K2Node_Event_LoadoutWidget' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, K2Node_Event_OptionNameID) == 0x000358, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::K2Node_Event_OptionNameID' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, K2Node_Event_IsDesignTime) == 0x000360, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, K2Node_Event_Delay_1) == 0x000368, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::K2Node_Event_Delay_1' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, CallFunc_PlayAnimationForward_ReturnValue) == 0x000370, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, K2Node_Event_Delay) == 0x000378, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::K2Node_Event_Delay' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, K2Node_Event_Collapse) == 0x000380, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::K2Node_Event_Collapse' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000388, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, CallFunc_Delay_Duration_ImplicitCast) == 0x000390, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry, CallFunc_Delay_Duration_ImplicitCast_1) == 0x000394, "Member 'W_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry::CallFunc_Delay_Duration_ImplicitCast_1' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.HeaderSubpageNavigation
// 0x0008 (0x0008 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_HeaderSubpageNavigation final
{
public:
	class FName                                   OptionNameID;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_HeaderSubpageNavigation) == 0x000004, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_HeaderSubpageNavigation");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_HeaderSubpageNavigation) == 0x000008, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_HeaderSubpageNavigation");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_HeaderSubpageNavigation, OptionNameID) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_HeaderSubpageNavigation::OptionNameID' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.Hide
// 0x0010 (0x0010 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_Hide final
{
public:
	double                                        Delay;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Collapse;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_Hide) == 0x000008, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_Hide");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_Hide) == 0x000010, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_Hide");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_Hide, Delay) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_Hide::Delay' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_Hide, Collapse) == 0x000008, "Member 'W_LoadoutInfo_EffectsListEntry_C_Hide::Collapse' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_PreConstruct) == 0x000001, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_PreConstruct");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_PreConstruct) == 0x000001, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_PreConstruct");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.Reveal
// 0x0008 (0x0008 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_Reveal final
{
public:
	double                                        Delay;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_Reveal) == 0x000008, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_Reveal");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_Reveal) == 0x000008, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_Reveal");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_Reveal, Delay) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_Reveal::Delay' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.SetInfo
// 0x00A0 (0x00A0 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_SetInfo final
{
public:
	struct FST_ItemEffects                        Effect_0;                                          // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	EScrollDirection                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EScrollDirection                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0040(0x0018)()
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_1;                           // 0x0088(0x0018)()
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_SetInfo) == 0x000008, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_SetInfo");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_SetInfo) == 0x0000A0, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_SetInfo");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_SetInfo, Effect_0) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_SetInfo::Effect_0' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_SetInfo, Temp_byte_Variable) == 0x000020, "Member 'W_LoadoutInfo_EffectsListEntry_C_SetInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_SetInfo, Temp_byte_Variable_1) == 0x000021, "Member 'W_LoadoutInfo_EffectsListEntry_C_SetInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_SetInfo, Temp_text_Variable) == 0x000028, "Member 'W_LoadoutInfo_EffectsListEntry_C_SetInfo::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_SetInfo, Temp_text_Variable_1) == 0x000040, "Member 'W_LoadoutInfo_EffectsListEntry_C_SetInfo::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_SetInfo, K2Node_MakeStruct_LinearColor) == 0x000058, "Member 'W_LoadoutInfo_EffectsListEntry_C_SetInfo::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_SetInfo, K2Node_MakeStruct_LinearColor_1) == 0x000068, "Member 'W_LoadoutInfo_EffectsListEntry_C_SetInfo::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_SetInfo, K2Node_Select_Default) == 0x000078, "Member 'W_LoadoutInfo_EffectsListEntry_C_SetInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_SetInfo, K2Node_Select_Default_1) == 0x000088, "Member 'W_LoadoutInfo_EffectsListEntry_C_SetInfo::K2Node_Select_Default_1' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.SetInputMode
// 0x0001 (0x0001 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_SetInputMode final
{
public:
	bool                                          IsGamepad;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_SetInputMode) == 0x000001, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_SetInputMode");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_SetInputMode) == 0x000001, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_SetInputMode");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_SetInputMode, IsGamepad) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_SetInputMode::IsGamepad' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.SetLoadoutWidget
// 0x0008 (0x0008 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_SetLoadoutWidget final
{
public:
	class UW_Loadout_C*                           LoadoutWidget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_SetLoadoutWidget) == 0x000008, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_SetLoadoutWidget");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_SetLoadoutWidget) == 0x000008, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_SetLoadoutWidget");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_SetLoadoutWidget, LoadoutWidget) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_SetLoadoutWidget::LoadoutWidget' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.UpdateActiveLoadout
// 0x02E8 (0x02E8 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_UpdateActiveLoadout final
{
public:
	struct FSavedLoadout                          ActiveLoadout;                                     // 0x0000(0x02E8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_UpdateActiveLoadout) == 0x000008, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_UpdateActiveLoadout");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_UpdateActiveLoadout) == 0x0002E8, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_UpdateActiveLoadout");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_UpdateActiveLoadout, ActiveLoadout) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_UpdateActiveLoadout::ActiveLoadout' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.UpdateCurrentItemMap
// 0x0050 (0x0050 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentItemMap final
{
public:
	TMap<EItemCategory, class UClass*>            ItemCategory;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentItemMap) == 0x000008, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentItemMap");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentItemMap) == 0x000050, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentItemMap");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentItemMap, ItemCategory) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentItemMap::ItemCategory' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.UpdateCurrentSlot
// 0x0008 (0x0008 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentSlot final
{
public:
	class UW_LoadoutSlot_C*                       CurrentSlot;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentSlot) == 0x000008, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentSlot");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentSlot) == 0x000008, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentSlot");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentSlot, CurrentSlot) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_UpdateCurrentSlot::CurrentSlot' has a wrong offset!");

// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.GetFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct W_LoadoutInfo_EffectsListEntry_C_GetFocusTarget final
{
public:
	class UWidget*                                Focus;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LoadoutInfo_EffectsListEntry_C_GetFocusTarget) == 0x000008, "Wrong alignment on W_LoadoutInfo_EffectsListEntry_C_GetFocusTarget");
static_assert(sizeof(W_LoadoutInfo_EffectsListEntry_C_GetFocusTarget) == 0x000008, "Wrong size on W_LoadoutInfo_EffectsListEntry_C_GetFocusTarget");
static_assert(offsetof(W_LoadoutInfo_EffectsListEntry_C_GetFocusTarget, Focus) == 0x000000, "Member 'W_LoadoutInfo_EffectsListEntry_C_GetFocusTarget::Focus' has a wrong offset!");

}


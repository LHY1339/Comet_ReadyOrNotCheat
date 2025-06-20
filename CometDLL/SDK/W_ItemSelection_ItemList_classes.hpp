﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ItemSelection_ItemList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ItemSelection_ItemList.W_ItemSelection_ItemList_C
// 0x00F0 (0x03D8 - 0x02E8)
class UW_ItemSelection_ItemList_C final : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Focus;                                        // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Unfocus;                                      // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeIn;                                       // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeOut;                                      // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_Items;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_C*           ItemGroup;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Items;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Main;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Style;                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class ABaseItem*>                      Items;                                             // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	int32                                         SelectionIndex;                                    // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34C[0x4];                                      // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UW_ItemSelection_Item_C*>        ItemWidgets;                                       // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FItemSelectionGroup                    ItemGroupSetting;                                  // 0x0360(0x0048)(Edit, BlueprintVisible, ExposeOnSpawn)
	class ABasePlayer_C*                          PlayerCharacter;                                   // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFocused;                                        // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanNavigate;                                      // 0x03B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnteredOnce;                                      // 0x03B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B3[0x5];                                      // 0x03B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              NudgeAmount;                                       // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WorkingRenderOpacity;                              // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DuplicateRow;                                      // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLastGroup;                                      // 0x03D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bInOverviewMode;                                   // 0x03D5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void CreateItem(class ABaseItem* Item, int32 Index_0, bool bSwapping);
	void CustomEvent_0();
	void CustomEvent_1();
	void Deselect();
	void EquipItem(bool* ItemEquipped);
	void ExecuteSelection(bool bSoftSelection);
	void ExecuteUbergraph_W_ItemSelection_ItemList(int32 EntryPoint);
	void FadeIn(bool bFocusRequired);
	void FadeOut(bool bFocusRequired);
	void FindDuplicateItems(class ABaseItem* InItem, TArray<class ABaseItem*>* Return_Value, TArray<class FString>* Names);
	void Focus(bool bForce);
	void HideArrow();
	void HideList(bool bPlaySound);
	void Initialize();
	void Next();
	void OnAnimFadeOutFinished();
	void OnAnimSelectFinished();
	void OnGrenadeThrown(class ABaseGrenade* ThrownGrenade);
	void OnInitialized();
	void PopulateList();
	void PreConstruct(bool IsDesignTime);
	void Previous();
	void RemoveItem(class ABaseItem* ItemToRemove, bool bRemoveFromItems);
	void RemoveItem__Index_(int32 ItemIndex);
	void Select();
	void ShowArrow();
	void ShowList();
	void SwapItem(int32 FromIndex, int32 ToIndex);
	void SwapItemWithGroup(int32 ItemIndex);
	void Unfocus(bool bForce);
	void UpdateItemList();

	void GetSelectedItem(class ABaseItem** Return_Value) const;
	void IsInsideList(bool* Return_Value) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ItemSelection_ItemList_C">();
	}
	static class UW_ItemSelection_ItemList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ItemSelection_ItemList_C>();
	}
};
static_assert(alignof(UW_ItemSelection_ItemList_C) == 0x000008, "Wrong alignment on UW_ItemSelection_ItemList_C");
static_assert(sizeof(UW_ItemSelection_ItemList_C) == 0x0003D8, "Wrong size on UW_ItemSelection_ItemList_C");
static_assert(offsetof(UW_ItemSelection_ItemList_C, UberGraphFrame) == 0x0002E8, "Member 'UW_ItemSelection_ItemList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, Anim_Focus) == 0x0002F0, "Member 'UW_ItemSelection_ItemList_C::Anim_Focus' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, Anim_Unfocus) == 0x0002F8, "Member 'UW_ItemSelection_ItemList_C::Anim_Unfocus' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, Anim_FadeIn) == 0x000300, "Member 'UW_ItemSelection_ItemList_C::Anim_FadeIn' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, Anim_FadeOut) == 0x000308, "Member 'UW_ItemSelection_ItemList_C::Anim_FadeOut' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, GridPanel_Items) == 0x000310, "Member 'UW_ItemSelection_ItemList_C::GridPanel_Items' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, ItemGroup) == 0x000318, "Member 'UW_ItemSelection_ItemList_C::ItemGroup' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, VerticalBox_Items) == 0x000320, "Member 'UW_ItemSelection_ItemList_C::VerticalBox_Items' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, VerticalBox_Main) == 0x000328, "Member 'UW_ItemSelection_ItemList_C::VerticalBox_Main' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, WidgetSwitcher_Style) == 0x000330, "Member 'UW_ItemSelection_ItemList_C::WidgetSwitcher_Style' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, Items) == 0x000338, "Member 'UW_ItemSelection_ItemList_C::Items' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, SelectionIndex) == 0x000348, "Member 'UW_ItemSelection_ItemList_C::SelectionIndex' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, ItemWidgets) == 0x000350, "Member 'UW_ItemSelection_ItemList_C::ItemWidgets' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, ItemGroupSetting) == 0x000360, "Member 'UW_ItemSelection_ItemList_C::ItemGroupSetting' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, PlayerCharacter) == 0x0003A8, "Member 'UW_ItemSelection_ItemList_C::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, bIsFocused) == 0x0003B0, "Member 'UW_ItemSelection_ItemList_C::bIsFocused' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, bCanNavigate) == 0x0003B1, "Member 'UW_ItemSelection_ItemList_C::bCanNavigate' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, bEnteredOnce) == 0x0003B2, "Member 'UW_ItemSelection_ItemList_C::bEnteredOnce' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, NudgeAmount) == 0x0003B8, "Member 'UW_ItemSelection_ItemList_C::NudgeAmount' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, WorkingRenderOpacity) == 0x0003C8, "Member 'UW_ItemSelection_ItemList_C::WorkingRenderOpacity' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, DuplicateRow) == 0x0003D0, "Member 'UW_ItemSelection_ItemList_C::DuplicateRow' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, bIsLastGroup) == 0x0003D4, "Member 'UW_ItemSelection_ItemList_C::bIsLastGroup' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, bInOverviewMode) == 0x0003D5, "Member 'UW_ItemSelection_ItemList_C::bInOverviewMode' has a wrong offset!");

}


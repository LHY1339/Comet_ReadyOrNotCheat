﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MunitionsOverviewSlot_Element

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_MunitionsOverviewSlot_Element.W_MunitionsOverviewSlot_Element_C.AddNewImage
// 0x0020 (0x0020 - 0x0000)
struct W_MunitionsOverviewSlot_Element_C_AddNewImage final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0008(0x0008)(NoDestructor)
	class UImage*                                 CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MunitionsOverviewSlot_Element_C_AddNewImage) == 0x000008, "Wrong alignment on W_MunitionsOverviewSlot_Element_C_AddNewImage");
static_assert(sizeof(W_MunitionsOverviewSlot_Element_C_AddNewImage) == 0x000020, "Wrong size on W_MunitionsOverviewSlot_Element_C_AddNewImage");
static_assert(offsetof(W_MunitionsOverviewSlot_Element_C_AddNewImage, Texture) == 0x000000, "Member 'W_MunitionsOverviewSlot_Element_C_AddNewImage::Texture' has a wrong offset!");
static_assert(offsetof(W_MunitionsOverviewSlot_Element_C_AddNewImage, K2Node_MakeStruct_SlateChildSize) == 0x000008, "Member 'W_MunitionsOverviewSlot_Element_C_AddNewImage::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(W_MunitionsOverviewSlot_Element_C_AddNewImage, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'W_MunitionsOverviewSlot_Element_C_AddNewImage::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MunitionsOverviewSlot_Element_C_AddNewImage, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000018, "Member 'W_MunitionsOverviewSlot_Element_C_AddNewImage::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

}


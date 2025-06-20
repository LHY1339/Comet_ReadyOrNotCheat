﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_2DMap

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_2DMap.W_2DMap_C.ExecuteUbergraph_W_2DMap
// 0x0030 (0x0030 - 0x0000)
struct W_2DMap_C_ExecuteUbergraph_W_2DMap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynMat_MapDynMat;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      K2Node_CustomEvent_MapMaterialInstance;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_CustomEvent_LayoutTexture;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_SetDynMat_MapDynMat;                      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_2DMap_C_ExecuteUbergraph_W_2DMap) == 0x000008, "Wrong alignment on W_2DMap_C_ExecuteUbergraph_W_2DMap");
static_assert(sizeof(W_2DMap_C_ExecuteUbergraph_W_2DMap) == 0x000030, "Wrong size on W_2DMap_C_ExecuteUbergraph_W_2DMap");
static_assert(offsetof(W_2DMap_C_ExecuteUbergraph_W_2DMap, EntryPoint) == 0x000000, "Member 'W_2DMap_C_ExecuteUbergraph_W_2DMap::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_2DMap_C_ExecuteUbergraph_W_2DMap, CallFunc_GetDynMat_MapDynMat) == 0x000008, "Member 'W_2DMap_C_ExecuteUbergraph_W_2DMap::CallFunc_GetDynMat_MapDynMat' has a wrong offset!");
static_assert(offsetof(W_2DMap_C_ExecuteUbergraph_W_2DMap, K2Node_CustomEvent_MapMaterialInstance) == 0x000010, "Member 'W_2DMap_C_ExecuteUbergraph_W_2DMap::K2Node_CustomEvent_MapMaterialInstance' has a wrong offset!");
static_assert(offsetof(W_2DMap_C_ExecuteUbergraph_W_2DMap, K2Node_CustomEvent_LayoutTexture) == 0x000018, "Member 'W_2DMap_C_ExecuteUbergraph_W_2DMap::K2Node_CustomEvent_LayoutTexture' has a wrong offset!");
static_assert(offsetof(W_2DMap_C_ExecuteUbergraph_W_2DMap, CallFunc_SetDynMat_MapDynMat) == 0x000020, "Member 'W_2DMap_C_ExecuteUbergraph_W_2DMap::CallFunc_SetDynMat_MapDynMat' has a wrong offset!");
static_assert(offsetof(W_2DMap_C_ExecuteUbergraph_W_2DMap, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'W_2DMap_C_ExecuteUbergraph_W_2DMap::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function W_2DMap.W_2DMap_C.GetDynMat
// 0x0020 (0x0020 - 0x0000)
struct W_2DMap_C_GetDynMat final
{
public:
	class UMaterialInstanceDynamic*               MapDynMat_0;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_SetDynMat_MapDynMat;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_2DMap_C_GetDynMat) == 0x000008, "Wrong alignment on W_2DMap_C_GetDynMat");
static_assert(sizeof(W_2DMap_C_GetDynMat) == 0x000020, "Wrong size on W_2DMap_C_GetDynMat");
static_assert(offsetof(W_2DMap_C_GetDynMat, MapDynMat_0) == 0x000000, "Member 'W_2DMap_C_GetDynMat::MapDynMat_0' has a wrong offset!");
static_assert(offsetof(W_2DMap_C_GetDynMat, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'W_2DMap_C_GetDynMat::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_2DMap_C_GetDynMat, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'W_2DMap_C_GetDynMat::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_2DMap_C_GetDynMat, CallFunc_SetDynMat_MapDynMat) == 0x000018, "Member 'W_2DMap_C_GetDynMat::CallFunc_SetDynMat_MapDynMat' has a wrong offset!");

// Function W_2DMap.W_2DMap_C.SetDynMat
// 0x0018 (0x0018 - 0x0000)
struct W_2DMap_C_SetDynMat final
{
public:
	class UMaterialInstance*                      Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MapDynMat_0;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_2DMap_C_SetDynMat) == 0x000008, "Wrong alignment on W_2DMap_C_SetDynMat");
static_assert(sizeof(W_2DMap_C_SetDynMat) == 0x000018, "Wrong size on W_2DMap_C_SetDynMat");
static_assert(offsetof(W_2DMap_C_SetDynMat, Material) == 0x000000, "Member 'W_2DMap_C_SetDynMat::Material' has a wrong offset!");
static_assert(offsetof(W_2DMap_C_SetDynMat, MapDynMat_0) == 0x000008, "Member 'W_2DMap_C_SetDynMat::MapDynMat_0' has a wrong offset!");
static_assert(offsetof(W_2DMap_C_SetDynMat, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'W_2DMap_C_SetDynMat::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function W_2DMap.W_2DMap_C.SetFloorTexture
// 0x0010 (0x0010 - 0x0000)
struct W_2DMap_C_SetFloorTexture final
{
public:
	class UMaterialInstance*                      MapMaterialInstance;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             LayoutTexture;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_2DMap_C_SetFloorTexture) == 0x000008, "Wrong alignment on W_2DMap_C_SetFloorTexture");
static_assert(sizeof(W_2DMap_C_SetFloorTexture) == 0x000010, "Wrong size on W_2DMap_C_SetFloorTexture");
static_assert(offsetof(W_2DMap_C_SetFloorTexture, MapMaterialInstance) == 0x000000, "Member 'W_2DMap_C_SetFloorTexture::MapMaterialInstance' has a wrong offset!");
static_assert(offsetof(W_2DMap_C_SetFloorTexture, LayoutTexture) == 0x000008, "Member 'W_2DMap_C_SetFloorTexture::LayoutTexture' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BF_Triangulate

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BF_Triangulate.BF_Triangulate_C
// 0x0000 (0x0028 - 0x0028)
class UBF_Triangulate_C final : public UBlueprintFunctionLibrary
{
public:
	static void TriangulatePolygon(TArray<struct FVector>& Vertices, class UObject* __WorldContext, TArray<int32>* Triangles);
	static void RecursiveTriangulate(TArray<struct FST_VertexID>& vert, TArray<struct FST_VertexID>& FullSetVert, TArray<struct FST_LineSegment>& BuiltSeg, int32 Thread, class UObject* __WorldContext, TArray<int32>* Triangles);
	static bool PointInTriangle(const struct FVector2D& P, const struct FVector2D& A, const struct FVector2D& B, const struct FVector2D& C, bool IgnoreSide, class UObject* __WorldContext);
	static void LoopArrayIndex(int32 Index_0, int32 Shift, int32 ArrayLength, class UObject* __WorldContext, int32* Return);
	static void LineSegIntersectionTest(const struct FVector2D& a1, const struct FVector2D& b1, const struct FVector2D& a2, const struct FVector2D& b2, bool IgnoreSide, class UObject* __WorldContext, bool* Return);
	static void FlipPoligon(TArray<struct FST_VertexID>& vert, class UObject* __WorldContext, TArray<struct FST_VertexID>* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BF_Triangulate_C">();
	}
	static class UBF_Triangulate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBF_Triangulate_C>();
	}
};
static_assert(alignof(UBF_Triangulate_C) == 0x000008, "Wrong alignment on UBF_Triangulate_C");
static_assert(sizeof(UBF_Triangulate_C) == 0x000028, "Wrong size on UBF_Triangulate_C");

}


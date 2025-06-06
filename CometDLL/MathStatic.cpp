#include "MathStatic.h"
#include "UnrealStatic.h"

float FLerp(float a, float b, float alpha, float hold)
{
    const float value = a + (b - a) * alpha;
    return FAbs(b - value) > hold ? value : b;
}

float FInterp(float a, float b, float speed, float hold)
{
    const float value = FLerp(a, b, speed * GetDeltaTime());
    return FAbs(b - value) > hold ? value : b;
}

float FAbs(float value)
{
    return value > 0.0f ? value : -value;
}
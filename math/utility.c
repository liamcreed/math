#include "math/math.h"

f64 f64_max(f64 f1, f64 f2)
{
    if (f1 > f2)
        return f1;
    return f2;
}

f64 lerp(f64 a, f64 b, f64 f)
{
    return (a * (1.0f - f)) + (b * f);
}

f64 deg_to_rad(f64 deg)
{
    return (f64)(deg * (M_PI / 180.0f));
}

f64 f64_random(f64 min, f64 max)
{
    return min + (max - min) * rand() / RAND_MAX;

}

f64 f64_clamp(f64 f, f64 min, f64 max)
{
    if (f < min) return min;
    if (f > max) return max;
    return f;
}


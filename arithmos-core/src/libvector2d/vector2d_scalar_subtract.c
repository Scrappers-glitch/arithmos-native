#include <vector2d.h>

vector2d* vector2d_scalar_subtract(vector2d* vec, coordinate scalar) {
    vec->x -= scalar;
    vec->y -= scalar;
    return vec;
}
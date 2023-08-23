#pragma once

typedef struct
{
    f64 x;
    f64 y;
}vec2;

typedef struct
{
    f64 x;
    f64 y;
    f64 z;
}vec3;

typedef struct
{
    f64 x;
    f64 y;
    f64 z;
    f64 w;
}vec4;

typedef struct 
{
    f64 data[4][4];
} mat4;


f64 vec3_dot(vec3 v1, vec3 v2);
f64 vec3_length(vec3 v);
vec3 vec3_normalize(vec3 v);

vec3 vec3_subtract(vec3 v1, vec3 v2);
vec3 vec3_add(vec3 v1, vec3 v2);
vec3 vec3_multiply(vec3 v1, vec3 v2);
vec3 vec3_cross(vec3 v1, vec3 v2);
vec3 vec3_scale(vec3 v, f64 s);
vec3 vec3_divide(vec3 v1, vec3 v2);
vec3 vec3_divide_f64(vec3 v1, f64 f);
vec3 vec3_multiply_quat(vec3 v, vec4 q);
vec3 vec3_lerp(vec3 v1, vec3 v2, f64 f);
vec3 vec3_clamp(vec3 v, vec3 min, vec3 max);
vec3 vec3_negate(vec3 v);
vec3 vec3_random_f64(f64 min, f64 max);
vec3 vec3_reflect(vec3 v, vec3 n);
void vec3_print(vec3 vector);

vec4 vec4_normalize(vec4 q);
vec4 vec4_clamp(vec4 v, vec4 min, vec4 max);
float vec4_dot(vec4 v1, vec4 v2);
void vec4_print(vec4 q);

vec4 quat_angle_axis(f64 angle, vec3 axis);
vec4 quat_from_euler(vec3 euler);
vec4 quat_conjugate(vec4 q);
vec4 quat_multiply(vec4 q1, vec4 q2);
vec4 quat_lerp(vec4 q1, vec4 q2, f64 f);


mat4 mat4_new(f64 value);
mat4 mat4_ortho(f64 left, f64 right, f64 top, f64 bottom, f64 near, f64 far);
mat4 mat4_ortho_aspect(f64 aspect, f64 size, f64 near, f64 far);
mat4 mat4_perspective(f64 fov, f64 aspect, f64 near, f64 far);
mat4 mat4_look_at(vec3 eye, vec3 center, vec3 up);
mat4 mat4_scale(mat4 m, vec3 size);
mat4 mat4_from_quat(vec4 q);
mat4 mat4_rotate_x(mat4 m, f64 deg);
mat4 mat4_rotate_y(mat4 m, f64 deg);
mat4 mat4_rotate_z(mat4 m, f64 deg);
mat4 mat4_rotate_e(mat4 m, vec3 v);
mat4 mat4_rotate_q(mat4 m, vec4 q);
mat4 mat4_translate(mat4 m, vec3 vector);
mat4 mat4_multiply(mat4 m1, mat4 m2);
mat4 mat4_inverse(mat4 m);
mat4 mat4_1D_to_2D(f64* m);
void mat4_print(mat4 mat);

f64 lerp(f64 a, f64 b, f64 f);
f64 deg_to_rad(f64 deg);

f64 f64_max(f64 f1, f64 f2);
f64 f64_random(f64 min, f64 max);
f64 f64_clamp(f64 f, f64 min, f64 max);
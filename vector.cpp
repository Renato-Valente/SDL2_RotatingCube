#include "vector.hpp"
#include<math.h>

vec3_t vec3_rotate_x(vec3_t v, float angle){
    vec3_t rotaded_vector = {
        v.x,
        v.y * cos(angle) - v.z*sin(angle),
        v.y * sin(angle) + v.z*cos(angle)
    };

    return rotaded_vector;
}

vec3_t vec3_rotate_y(vec3_t v, float angle){
    vec3_t rotaded_vector = {
        v.x * cos(angle) - v.z * sin(angle),
        v.y,
        v.x * sin(angle) + v.z*cos(angle)
    };

    return rotaded_vector;
}

vec3_t vec3_rotate_z(vec3_t v, float angle){
    vec3_t rotaded_vector = {
        v.x * cos(angle) - v.y * sin(angle),
        v.x * sin(angle) + v.y * cos(angle),
        v.z
    };

    return rotaded_vector;
}
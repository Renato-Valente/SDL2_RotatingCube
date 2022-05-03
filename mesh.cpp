#include "mesh.hpp"

vec3_t mesh_vertices[n_mesh_vertices] = {
    { -1,-1,-1}, //1
    { -1, 1,-1}, //2
    {  1, 1,-1}, //3
    {  1,-1,-1}, //4
    {  1, 1, 1}, //5
    {  1,-1, 1}, //6
    { -1, 1, 1}, //7
    { -1,-1, 1}  //8
};

face_t mesh_faces[n_mesh_faces] = {
    {1, 2, 3}, // front
    {1, 3, 4},

    {4, 3, 5}, // right
    {4, 5, 6},

    {6, 5, 7}, // back
    {6, 7, 8},

    {8, 7, 2}, // left
    {8, 2, 1},

    {2, 7, 5}, // top
    {2, 5, 3},

    {6, 8, 1}, // back
    {6, 1, 4}

};
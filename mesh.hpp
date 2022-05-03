#ifndef MESH_HPP
#define MESH_HPP

#include "vector.hpp"
#include "triangle.hpp"

int const n_mesh_vertices = 8;
extern vec3_t mesh_vertices[8];

int const n_mesh_faces = 6*2;
extern face_t mesh_faces[n_mesh_faces];



#endif
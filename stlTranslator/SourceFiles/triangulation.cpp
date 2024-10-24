#include "Triangulation.h"
#include<cassert>
#include<iostream>
#include<sstream>
#include<stdexcept>

// Adds a unique vertex value to the list of unique vertices
void Triangulation::setUniqueVertices(double value)
{
    uniqueVertices.push_back(value);
}

// Adds a triangle to the triangulation data structure
void Triangulation::setDataStructure(Triangle triangle)
{
    triangles.push_back(triangle);
}

// Returns the list of unique vertices
std::vector<double> Triangulation::getUniqueVertices()
{
    return uniqueVertices;
}

// Returns the triangulation data structure containing triangles
std::vector<Triangle> Triangulation::triangulizationDataStructure()
{
    return triangles;
}

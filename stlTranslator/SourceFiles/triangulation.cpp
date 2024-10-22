#include "triangulation.h"
#include<cassert>
#include<iostream>
#include<sstream>
#include<stdexcept>

void Triangulation::setUniqueVertices(std::vector<double> uniqueVertices_)
{
    uniqueVertices = uniqueVertices_;
}

void Triangulation::setDataStructure(std::vector<Triangle> triangles_)
{
    triangles = triangles_;
}

std::vector<double> Triangulation::getUniqueVertices()
{
    return uniqueVertices;
}

std::vector<Triangle> Triangulation::triangulizationDataStructure()
{
    return triangles;
}



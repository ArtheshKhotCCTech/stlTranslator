#include "triangulation.h"
#include<cassert>
#include<iostream>
#include<sstream>
#include<stdexcept>

void Triangulation::setUniqueVertices(double value)
{
    uniqueVertices.push_back(value);
}

void Triangulation::setDataStructure(Triangle triangle)
{
    triangles.push_back(triangle);
}

std::vector<double> Triangulation::getUniqueVertices()
{
    return uniqueVertices;
}

std::vector<Triangle> Triangulation::triangulizationDataStructure()
{
    return triangles;
}



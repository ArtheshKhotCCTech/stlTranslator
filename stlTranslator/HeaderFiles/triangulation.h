#pragma once
#include "triangle.h"
#include<string>
#include<vector>

class Triangulation 
{
    std::vector<double> uniqueVertices;
    std::vector<Triangle> triangles;
public: 
    void setUniqueVertices(double value);
    void setDataStructure(Triangle triangle);
    std::vector<double> getUniqueVertices();
    std::vector<Triangle> triangulizationDataStructure();
};

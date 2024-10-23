#pragma once
#include "triangle.h"
#include<string>
#include<unordered_map>
#include<vector>

class Triangulation {
    std::vector<double> uniqueVertices;
    std::vector<Triangle> triangles;
public: 
    void setUniqueVertices(std::vector<double>);
    void setDataStructure(std::vector<Triangle>);
    std::vector<double> getUniqueVertices();
    std::vector<Triangle> triangulizationDataStructure();
};

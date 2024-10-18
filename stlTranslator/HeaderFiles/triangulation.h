#pragma once
#include "triangle.h"
#include<string>
#include<unordered_map>
#include<vector>

class Triangulation {
    std::vector<double> uniqueVertices;
    std::unordered_map<double, int> vertexIndexMap;
    std::vector<Triangle> triangles;
public: 

    std::vector<double> getUniqueVertices();
    std::vector<Triangle> triangulizationDataStructure();
    void processString(const std::string& data);
    void createTriangles(const std::string& data); 
};

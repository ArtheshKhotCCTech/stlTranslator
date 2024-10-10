#pragma once
#include "triangle.h"
#include<sstream>
#include<unordered_map>
#include<vector>

class Triangulation {
public:
    std::vector<double> uniqueVertices;
    std::unordered_map<double, int> vertexIndexMap;  

    void processString(const std::string& data);
    std::vector<Triangle> createTriangles(const std::string& data); 
};

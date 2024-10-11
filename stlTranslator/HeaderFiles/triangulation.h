#pragma once
#include "triangle.h"
#include<cassert>
#include<iostream>
#include<sstream>
#include<stdexcept>
#include<unordered_map>
#include<vector>

class Triangulation {
public:
    std::vector<double> uniqueVertices;
    std::unordered_map<double, int> vertexIndexMap;  

    void processString(const std::string& data);
    std::vector<Triangle> createTriangles(const std::string& data); 
};

#pragma once
#include<vector>
#include<unordered_map>
#include<sstream>
#include "triangle.h"

using namespace std;

class Triangulation {
public:
    vector<double> uniqueVertices;
    unordered_map<double, int> vertexIndexMap;  

    void processString(const string& data);
    vector<Triangle> createTriangles(const string& data); 
};

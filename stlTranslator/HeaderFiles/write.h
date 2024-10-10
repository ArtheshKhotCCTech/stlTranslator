#pragma once
#include "triangle.h"
#include<fstream>
#include<iomanip>
#include<vector>

class Write {
public:
    void writeFile(const std::string& filename, const std::vector<Triangle>& triangles, const std::vector<double>& uniqueVertices);
};

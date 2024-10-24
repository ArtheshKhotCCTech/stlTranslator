#pragma once
#include "triangle.h"
#include "FileWriter.h"
#include<iostream>
#include<vector>

class DATWriter : public FileWriter
{
public:
    void fileWriter(const std::string& filename, const std::vector<Triangle>& triangles, const std::vector<double>& uniqueVertices);
};

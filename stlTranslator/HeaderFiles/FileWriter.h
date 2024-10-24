#pragma once
#include<string>
#include<vector>
#include"Triangle.h"

class FileWriter
{
	virtual void fileWriter(const std::string& filename, const std::vector<Triangle>& triangles, const std::vector<double>& uniqueVertices) = 0;
};


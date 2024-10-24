#pragma once
#include<string>
#include<vector>
#include"Triangle.h"

class FileWriter
{
	// Vitual function to write triangle data into file by filename
	virtual void fileWriter(const std::string& filename, const std::vector<Triangle>& triangles, const std::vector<double>& uniqueVertices) = 0;
};


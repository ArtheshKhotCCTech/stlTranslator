#include "STLReader.h"
#include "Point.h"
#include "Reader.h"
#include <cassert>
#include<fstream>
#include<iostream>
#include<stdexcept>
#include<sstream>
#include<vector>
#include<cmath>
#include<map>

STLReader::STLReader()
{
}

STLReader::~STLReader()
{
}

void STLReader::read(const std::string& fileName,Triangulation& triangulation)
{
    double x;
    double y;
    double z;
    std::map<double, int, comparer> uniqueMap;
    double arrNums[3]; // To store 3 coordinates as double
    int arrIndices[3]; // To store indices of unique double values
    int index = 0; 
    int count = 0;
    Point p1;
    Point p2;
    Point p3;

    std::ifstream infile(fileName);
    if (infile.is_open())
    {
        std::string line;
        while (getline(infile, line)) {
            std::stringstream ss(line);
            std::string word;
            while (ss >> word) {
                if (word == "vertex") {
                    ss >> x >> y >> z;
                    arrNums[0] = x;
                    arrNums[1] = y;
                    arrNums[2] = z;

                    for (int i = 0; i < 3; i++)
                    {
                        if (uniqueMap.find(arrNums[i]) == uniqueMap.end())
                        {
                            uniqueMap[arrNums[i]] = index;
                            triangulation.setUniqueVertices(arrNums[i]);
                            arrIndices[i] = index;
                            index++;
                        }
                        else
                        {
                            arrIndices[i] = uniqueMap[arrNums[i]];
                        }
                    }

                    switch (count % 3) {
                    case 0:
                        p1.setPoints(arrIndices[0], arrIndices[1], arrIndices[2]);
                        break;
                    case 1:
                        p2.setPoints(arrIndices[0], arrIndices[1], arrIndices[2]);
                        break;
                    case 2:
                        p3.setPoints(arrIndices[0], arrIndices[1], arrIndices[2]);
                        triangulation.setDataStructure(Triangle(p1, p2, p3));
                        break;
                    }
                    count++;
                }
            }
        }
    }
    else
    {
        std::cout << "Could not open the file" << std::endl;
    }
}
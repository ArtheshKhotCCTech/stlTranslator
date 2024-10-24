#pragma once
#include "Triangle.h"
#include<string>
#include<vector>

class Triangulation 
{
// Vector to store Triangle objects that form the triangulation.
    std::vector<Triangle> triangles;
// Vector to store unique vertex points.
    std::vector<double> uniqueVertices;
public: 

    //Adds a unique vertex to the uniqueVertices vector
    void setUniqueVertices(double value);
    //Adds a Triangle object to the triangles vector.
    void setDataStructure(Triangle triangle);
     // Return the vector of unique vertex points
    std::vector<double> getUniqueVertices();
    // // Return the vector of Triangle objects
    std::vector<Triangle> triangulizationDataStructure();
};

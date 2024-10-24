#pragma once
#include "point.h"

class Triangle 
{
    // Three points representing the vertices of the triangle
    Point p1;
    Point p2;
    Point p3;
public:
    Triangle(Point p1, Point p2, Point p3);
    // Getter functions to access the private members 
    Point getPointP1();
    Point getPointP2();
    Point getPointP3();
    ~Triangle();
};

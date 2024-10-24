#include "point.h"



Point::Point()
{
}
Point::~Point() 
{
}
void Point::setPoints(int x_, int y_, int z_)
{
	x = x_;
	y = y_;
	z = z_;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

int Point::getZ()
{
	return z;
}



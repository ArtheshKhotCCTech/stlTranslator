#pragma once
#include<string>
#include "Triangulation.h"
class Reader
{
	virtual void read(const std::string& fileName, Triangulation& triangulation) = 0;
};
//compare will be used by all the readers
struct comparer 
{
	bool operator()(double a, double b) const;
};

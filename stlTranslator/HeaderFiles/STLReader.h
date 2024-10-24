#pragma once
#include<string>
#include "Triangulation.h"
#include "Reader.h"

class STLReader : public Reader{
public:
    STLReader();
    ~STLReader();
    void read(const std::string& fileName,Triangulation& triangulation);
};

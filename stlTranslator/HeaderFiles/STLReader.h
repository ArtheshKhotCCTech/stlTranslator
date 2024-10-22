#pragma once
#include<string>
#include "Triangulation.h"
#include "ReaderBase.h"

struct comparer {
    bool operator()(double a, double b) const;
};

class STLReader : public ReaderBase{
public:
    STLReader();
    ~STLReader();
    void read(const std::string& fileName,Triangulation& triangulation);
};

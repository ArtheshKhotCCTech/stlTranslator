#pragma once
#include <cassert>
#include<fstream>
#include<iostream>
#include<stdexcept>
#include<sstream>
#include<string>

class Read {
public:
    Read();
    std::string line, data;
    void read();
    ~Read();
};
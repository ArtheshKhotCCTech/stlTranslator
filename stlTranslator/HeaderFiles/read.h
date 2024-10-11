#pragma once
#include <cassert>
#include<fstream>
#include<iostream>
#include<stdexcept>
#include<sstream>
#include<string>

class Read {
    std::string line, data;
public:
    Read();
    std::string read();
    ~Read();
};

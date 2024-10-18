#pragma once
#include <cassert>
#include<fstream>
#include<iostream>
#include<stdexcept>
#include<sstream>
#include<string>

class Reader {
    std::string line, data;
public:
    Reader();
    std::string read();
    ~Reader();
};

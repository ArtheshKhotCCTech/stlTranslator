#pragma once
#include<fstream>
#include<iostream>
#include<sstream>
#include<string>

class Read {
public:
    Read();
    std::string line, data;
    void read();
    ~Read();
};

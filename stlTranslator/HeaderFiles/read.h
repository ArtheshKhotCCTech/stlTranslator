#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include<iostream>

using namespace std;

class Read {
public:
    Read();
    string line, data;
    void read();
    ~Read();
};

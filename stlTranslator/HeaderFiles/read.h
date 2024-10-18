#pragma once
#include<string>

class Reader {
    std::string line, data;
public:
    Reader();
    std::string read();
    ~Reader();
};

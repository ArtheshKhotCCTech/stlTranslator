#include "read.h"

Read::Read()
{
}

void Read::read() {
    std::ifstream infile("cube.stl");
    if (!infile.is_open()) {
        std::cout << "File Not Found" << std::endl;
    }
    std::string line;
    while (getline(infile, line)) {
        std::stringstream ss(line);
        std::string word;
        while (ss >> word) {
            if (word == "vertex") {
                std::string x, y, z;
                ss >> x >> y >> z;
                assert(!x.empty() && !y.empty() && !z.empty());
                data += x + " " + y + " " + z + " ";
            }
        }
    }
}

Read::~Read() {}

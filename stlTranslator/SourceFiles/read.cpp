#include "read.h"

Reader::Reader()
{
}

std::string Reader::read() {
    std::ifstream infile("Testcases/cube.stl");
    assert(infile.is_open());
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
    return data;
}

Reader::~Reader() {}

#include "read.h"

Read::Read()
{
}

void Read::read() {
    std::ifstream infile("cube.stl");
    std::string line;
    while (getline(infile, line)) {
        std::stringstream ss(line);
        std::string word;
        while (ss >> word) {
            if (word == "vertex") {
                std::string x, y, z;
                ss >> x >> y >> z;
                data += x + " " + y + " " + z + " ";
            }
        }
    }
}

Read::~Read()
{

}

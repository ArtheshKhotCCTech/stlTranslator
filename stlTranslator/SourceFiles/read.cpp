#include "read.h"

Read::Read()
{
}

std::string Read::read() {
    std::string fileName;
    std::cout << "Enter the name of file without .stl part" << std::endl;
    std::cin >> fileName;
    fileName += ".stl";
    std::ifstream infile(fileName);
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

Read::~Read() {}

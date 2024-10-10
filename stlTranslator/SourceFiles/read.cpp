#include "read.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

Read::Read()
{
}

void Read::read() {
    ifstream infile("sphere.stl");
    string line;
    while (getline(infile, line)) {
        stringstream ss(line);
        string word;
        while (ss >> word) {
            if (word == "vertex") {
                string x, y, z;
                ss >> x >> y >> z;
                data += x + " " + y + " " + z + " ";
            }
        }
    }
}

Read::~Read()
{

}

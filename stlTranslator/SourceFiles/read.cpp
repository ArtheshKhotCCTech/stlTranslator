#include "read.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Read::Read(){}

void Read::read() {
    ifstream myFile("sphere.stl");

    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            if (line.find("vertex") != string::npos) {
                int pos = line.find("vertex");
                data += line.substr(pos + 7);
                data += ' ';
            }
        }
        myFile.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }
}

Read::~Read(){}




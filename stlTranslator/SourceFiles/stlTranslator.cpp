#include "Translator.h"

int main() {
    Translator translate;// Translator object created.

    // Member function that Translates an STL file to a DAT file
    translate.translateSTLtoDAT("TestCases/cube.stl", "output.dat");

    return 0;
}

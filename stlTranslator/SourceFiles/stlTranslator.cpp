#include "write.h"
#include "read.h"
#include "triangulation.h"
#include <string>

int main() {
    Read reader;
    std::string input = reader.read();

    Triangulation triangulation;
    triangulation.processString(input);
    triangulation.createTriangles(input);

    Write writer;
    writer.writeFile("output.dat", triangulation.triangulizationDataStructure(), triangulation.getUniqueVertices());

    return 0;
}

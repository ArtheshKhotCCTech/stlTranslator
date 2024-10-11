#include "write.h"
#include "read.h"
#include "triangulation.h"
#include <string>

int main() {
    Read reader;
    std::string input = reader.read();

    Triangulation triangulation;
    triangulation.processString(input);

    std::vector<Triangle> triangles = triangulation.createTriangles(input);

    Write writer;
    writer.writeFile("output.dat", triangles, triangulation.getUniqueVertices());

    return 0;
}

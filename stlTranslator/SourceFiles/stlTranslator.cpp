#include "write.h"
#include "read.h"
#include "triangulation.h"

int main() {
    Read reader;
    reader.read();

    Triangulation triangulation;
    triangulation.processString(reader.data);

    std::vector<Triangle> triangles = triangulation.createTriangles(reader.data);

    Write writer;
    writer.writeFile("output.dat", triangles, triangulation.uniqueVertices);

    return 0;
}
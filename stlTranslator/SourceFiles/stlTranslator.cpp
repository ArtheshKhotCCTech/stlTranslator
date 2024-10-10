#include "read.h"
#include<fstream>
#include "triangulation.h"
#include "write.h"

using namespace std;

int main() {
    Read reader;
    reader.read();

    Triangulation triangulation;
    triangulation.processString(reader.data);

    vector<Triangle> triangles = triangulation.createTriangles(reader.data);

    Write writer;
    writer.writeFile("output.dat", triangles, triangulation.uniqueVertices);

    return 0;
}

#include "write.h"

void Write::writeFile(const std::string& filename, const std::vector<Triangle>& triangles, const std::vector<double>& uniqueVertices)
{
    ofstream outfile(filename);
    for (const auto& triangle : triangles) {
        outfile << std::fixed << std::setprecision(6)
            << uniqueVertices[triangle.p1.x] << " " << uniqueVertices[triangle.p1.y] << " " << uniqueVertices[triangle.p1.z] << "\n"
            << uniqueVertices[triangle.p2.x] << " " << uniqueVertices[triangle.p2.y] << " " << uniqueVertices[triangle.p2.z] << "\n"
            << uniqueVertices[triangle.p3.x] << " " << uniqueVertices[triangle.p3.y] << " " << uniqueVertices[triangle.p3.z] << "\n"
            << uniqueVertices[triangle.p1.x] << " " << uniqueVertices[triangle.p1.y] << " " << uniqueVertices[triangle.p1.z] << "\n"<<endl<<endl;
    }
}





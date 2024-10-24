#include "DATwriter.h"

void DATWriter::fileWriter(const std::string& filename, const std::vector<Triangle>& triangles, const std::vector<double>& uniqueVertices)
{
    std::ofstream outfile(filename);
    for (Triangle triangle : triangles) {
        outfile << std::fixed << std::setprecision(6)
            << uniqueVertices[triangle.getPointP1().getX()] << " " << uniqueVertices[triangle.getPointP1().getY()] << " " << uniqueVertices[triangle.getPointP1().getZ()] << "\n"
            << uniqueVertices[triangle.getPointP2().getX()] << " " << uniqueVertices[triangle.getPointP2().getY()] << " " << uniqueVertices[triangle.getPointP2().getZ()] << "\n"
            << uniqueVertices[triangle.getPointP3().getX()] << " " << uniqueVertices[triangle.getPointP3().getY()] << " " << uniqueVertices[triangle.getPointP3().getZ()] << "\n"
            << uniqueVertices[triangle.getPointP1().getX()] << " " << uniqueVertices[triangle.getPointP1().getY()] << " " << uniqueVertices[triangle.getPointP1().getZ()] << "\n" <<std::endl<<std::endl;
    }
    std::cout << "Data file created !!!!" << std::endl;
}
#include "triangulation.h"

std::vector<double> Triangulation::getUniqueVertices()
{
    return uniqueVertices;
}

std::vector<Triangle> Triangulation::triangulizationDataStructure()
{
    return triangles;
}

void Triangulation::processString(const std::string& data) {
    std::istringstream iss(data);
    double value;
    int currentIndex = 0;

    try {
        while (iss >> value) {
            if (iss.fail()) {
                throw std::runtime_error("Failed to parse a vertex value.");
            }

            if (vertexIndexMap.find(value) == vertexIndexMap.end()) {
                vertexIndexMap[value] = currentIndex;
                uniqueVertices.push_back(value);
                currentIndex++;
            }
        }
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

void Triangulation::createTriangles(const std::string& data) {
    std::istringstream iss(data);
    std::vector<int> indices;

    double val;
    try {
        while (iss >> val) {
            if (iss.fail()) {
                throw std::runtime_error("Failed to parse a vertex index.");
            }

            if (vertexIndexMap.find(val) == vertexIndexMap.end()) {
                throw std::out_of_range("Vertex index out of range.");
            }

            indices.push_back(vertexIndexMap[val]);

            if (indices.size() == 9) {

                Point p1(indices[0], indices[1], indices[2]);
                Point p2(indices[3], indices[4], indices[5]);
                Point p3(indices[6], indices[7], indices[8]);
                triangles.emplace_back(p1, p2, p3);

                indices.clear();
            }
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    assert(indices.empty());
}
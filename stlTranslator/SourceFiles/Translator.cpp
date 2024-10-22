#include "Translator.h"
#include "STLReader.h"
#include "Triangulation.h"
#include "Write.h"
#include <iostream>

void Translator::translateSTLtoDAT(const std::string& inputFilePath, const std::string& outputFilePath)
{
    Triangulation tri;
    STLReader reader;
    reader.read(inputFilePath, tri);
    Write writer;
    writer.writeFile(outputFilePath, tri.triangulizationDataStructure(), tri.getUniqueVertices());
}
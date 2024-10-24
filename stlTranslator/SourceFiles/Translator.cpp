#include "Translator.h"
#include "STLReader.h"
#include "Triangulation.h"
#include "DATWriter.h"
#include <iostream>

void Translator::translateSTLtoDAT(const std::string& inputFilePath, const std::string& outputFilePath)
{
    Triangulation tri;
    STLReader reader;
    reader.read(inputFilePath, tri);
    DATWriter writer;
    writer.fileWriter(outputFilePath, tri.triangulizationDataStructure(), tri.getUniqueVertices());
}
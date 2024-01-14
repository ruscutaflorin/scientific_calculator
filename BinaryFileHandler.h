#ifndef SCIENTIFIC_CALCULATOR_BINARYFILEHANDLER_H
#define SCIENTIFIC_CALCULATOR_BINARYFILEHANDLER_H

#include <fstream>
#include <iostream>
#include <vector>
#include <utility>

#include "FileHandler.h"

class BinaryFileHandler : public FileHandler {
private:
    std::vector<std::pair<std::string, std::string>> equationResultList;

public:

    void addEquationResultPair(const std::string& equation, const std::string& result);
    void readFromFile(const std::string& filename) override;
    void writeToFile(const std::string& filename) override;
    void displayFileInfo() const override;
    void displayImportedData() const;
};

#endif //SCIENTIFIC_CALCULATOR_BINARYFILEHANDLER_H

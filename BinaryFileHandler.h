//
// Created by FLORIN on 22.12.2023.
//

#ifndef SCIENTIFIC_CALCULATOR_BINARYFILEHANDLER_H
#define SCIENTIFIC_CALCULATOR_BINARYFILEHANDLER_H

#include <fstream>
#include <iostream>
#include <vector>
#include "FileHandler.h"

using namespace std;

class BinaryFileHandler : public FileHandler {
private:
    vector<pair<string, string>> equationResultList;

public:
    void addEquationResultPair(const string& equation, const string& result);

    void readFromFile(const string& filename) override;

    void writeToFile(const string& filename) override;

    void displayFileInfo() const override;

    void displayImportedData() const;
};

#endif //SCIENTIFIC_CALCULATOR_BINARYFILEHANDLER_H

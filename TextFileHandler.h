#ifndef SCIENTIFIC_CALCULATOR_TEXTFILEHANDLER_H
#define SCIENTIFIC_CALCULATOR_TEXTFILEHANDLER_H

#include <fstream>
#include <vector>
#include <utility> // for std::pair
#include "FileHandler.h"
#include "Calculator.h"

using namespace std;

class TextFileHandler : public FileHandler {
private:
    vector<std::pair<string, string>> equationResultList;
    Calculator calculator;

public:
    void readFromFile(const string& filename) override;
    void writeToFile(const string& filename) override;
    void displayFileInfo() const override;
};




#endif //SCIENTIFIC_CALCULATOR_TEXTFILEHANDLER_H

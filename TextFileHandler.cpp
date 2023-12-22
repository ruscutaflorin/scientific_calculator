#ifndef SCIENTIFIC_CALCULATOR_TEXT_FILE_HANDLER_H
#define SCIENTIFIC_CALCULATOR_TEXT_FILE_HANDLER_H

#include "TextFileHandler.h"
#include <iostream>


void TextFileHandler::readFromFile(const std::string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string equation;
        while (getline(file, equation)) {
            calculator.setExpresie(equation);
            equationResultList.push_back({equation, calculator.getResult()});
            cout << "\nResult for equation '" << equation << "': " << calculator.getResult() << endl;
        }
        file.close();
    } else {
        cerr << "Unable to open file: " << filename << endl;
    }
}

void TextFileHandler::writeToFile(const string& filename) {
    ofstream file(filename);
    if (file.is_open()) {
        for (const auto& equationResultPair : equationResultList) {
            file << equationResultPair.first << " = " << equationResultPair.second << '\n';
        }
        file.close();
        cout << "\nResults written to file: " << filename << endl;
    } else {
        cerr << "\nUnable to open file for writing: " << filename << endl;
    }
}

void TextFileHandler::displayFileInfo() const {
    cout << "Displaying information specific to text file handling." << std::endl;
}


#endif // SCIENTIFIC_CALCULATOR_TEXT_FILE_HANDLER_H

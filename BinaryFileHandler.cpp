#include "BinaryFileHandler.h"

void BinaryFileHandler::addEquationResultPair(const string& equation, const string& result) {
    equationResultList.push_back(make_pair(equation, result));
}

void BinaryFileHandler::readFromFile(const string& filename) {
    ifstream file(filename, ios::binary);
    if (file.is_open()) {
        equationResultList.clear();
        size_t size;
        file.read(reinterpret_cast<char*>(&size), sizeof(size));
        equationResultList.resize(size);
        file.read(reinterpret_cast<char*>(equationResultList.data()), sizeof(pair<string, string>) * size);
        file.close();
        cout << "Data successfully loaded from binary file:" << filename << endl;
    } else {
        cerr << "Unable to open binary file:" << filename << endl;
    }
}

void BinaryFileHandler::writeToFile(const string& filename) {
    ofstream file(filename, ios::binary);
    if (file.is_open()) {
        size_t size = equationResultList.size();
        file.write(reinterpret_cast<const char*>(&size), sizeof(size));
        file.write(reinterpret_cast<const char*>(equationResultList.data()), sizeof(pair<string, string>) * size);
        file.close();
        cout << "Data successfully written to binary file:" << filename << endl;
    } else {
        cerr << "Unable to open binary file for writing:" << filename << endl;
    }
}

void BinaryFileHandler::displayFileInfo() const {
    cout << "Displaying information specific to binary file handling." << endl;
}

void BinaryFileHandler::displayImportedData() const {
    if (equationResultList.empty()) {
        cout << "No data has been imported." << endl;
    } else {
        cout << "Imported Equation and Result Pairs:" << endl;
        for (const auto& equationResultPair : equationResultList) {
            cout << equationResultPair.first << " = " << equationResultPair.second << endl;
        }
    }
}
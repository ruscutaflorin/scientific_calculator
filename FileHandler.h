#ifndef SCIENTIFIC_CALCULATOR_FILE_HANDLER_H
#define SCIENTIFIC_CALCULATOR_FILE_HANDLER_H

#include <string>
using namespace std;

class FileHandler {
public:
    virtual void readFromFile(const string& filename) = 0;
    virtual void writeToFile(const string& filename) = 0;
    virtual void displayFileInfo() const = 0; // Pure virtual method
};

#endif // FILE_HANDLER_H



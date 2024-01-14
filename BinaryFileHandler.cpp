#include "BinaryFileHandler.h"


void BinaryFileHandler::addEquationResultPair(const std::string& equation, const std::string& result) {
    equationResultList.emplace_back(equation, result);
}

void BinaryFileHandler::readFromFile(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Unable to open binary file: " << filename << std::endl;
        return;
    }

    equationResultList.clear();

    size_t size;
    file.read(reinterpret_cast<char*>(&size), sizeof(size));

    equationResultList.resize(size);

    for (auto& equationResultPair : equationResultList) {
        std::getline(file, equationResultPair.first, '\0');
        std::getline(file, equationResultPair.second, '\0');
    }

    file.close();
    std::cout << "Data successfully loaded from binary file: " << filename << std::endl;
}

void BinaryFileHandler::writeToFile(const std::string& filename) {
    std::ofstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Unable to open binary file for writing: " << filename << std::endl;
        return;
    }

    size_t size = equationResultList.size();
    file.write(reinterpret_cast<const char*>(&size), sizeof(size));

    for (const auto& equationResultPair : equationResultList) {
        file.write(equationResultPair.first.c_str(), equationResultPair.first.size() + 1);
        file.write(equationResultPair.second.c_str(), equationResultPair.second.size() + 1);
    }

    file.close();
    std::cout << "Data successfully written to binary file: " << filename << std::endl;
}

void BinaryFileHandler::displayFileInfo() const {
    std::cout << "Displaying information specific to binary file handling." << std::endl;
}

void BinaryFileHandler::displayImportedData() const {
    if (equationResultList.empty()) {
        std::cout << "No data has been imported." << std::endl;
    }
    else {
        std::cout << "Imported Equation and Result Pairs:" << std::endl;
        for (const auto& equationResultPair : equationResultList) {
            std::cout << equationResultPair.first << " = " << equationResultPair.second << std::endl;
        }
    }
}

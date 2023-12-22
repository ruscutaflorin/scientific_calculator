#include <iostream>
#include <string>
#include "Calculator.h"
#include "BinaryFileHandler.h"
#include "EquationSolver.h"
#include "TextFileHandler.h"

using namespace std;

int main(int argc, char *argv[]) {

    if (argc == 2) {
        // If a command-line argument is provided, use it as the equation for the calculator
        // clion -> edit configuration -> program arguments
        string equation = argv[1];

        Calculator calculator;
        calculator.setExpresie(equation);
        calculator.calculeaza();

        cout << "Rezultatul pentru ecuatia \"" << equation << "\" este:\n" << calculator << endl;

        return 0;
    }

    Calculator calculator;
    BinaryFileHandler binaryFileHandler;
    TextFileHandler textFileHandler;

    while (true) {
        cout << "Calculator Menu:" << endl;
        cout << "1. Perform a normal calculation" << endl;
        cout << "2. Solve an equation" << endl;
        cout << "3. Read from a text file" << endl;
        cout << "4. Save to binary file" << endl;
        cout << "5. Load from binary file" << endl;
        cout << "6. Display imported data" << endl;
        cout << "7. Exit" << endl;
        cout << "Choose an option (1, 2, 3, 4, 5, 6, or 7):";

        string input;
        Calculator c;

        getline(cin, input);
        if (input == "7" || input == "exit") {
            break;
        } else if (input == "1") {
            cout << "Enter expression:";
            getline(cin, input);
            c.setExpresie(input);
            c.calculeaza();
            cout << "Result:\n" << c << endl;

            binaryFileHandler.addEquationResultPair(input, c.getResult());
        } else if (input == "2") {
            cout << "Enter coefficients for the equation:" << endl;
            cout << "a:";
            double a;
            cin >> a;
            cout << "b:";
            double b;
            cin >> b;
            cout << "c:";
            double cVal;
            cin >> cVal;

            if (a == 0) {
                EquationSolver::solveLinearEquation(b, cVal);
            } else {
                EquationSolver::solveQuadraticEquation(a, b, cVal);
            }
            cin.ignore();
        } else if (input == "3") {
            textFileHandler.readFromFile("input");
            textFileHandler.writeToFile("computedInput");
        } else if (input == "4") {
            binaryFileHandler.writeToFile("text");
        } else if (input == "5") {
            binaryFileHandler.readFromFile("text");
        } else if (input == "6") {
            binaryFileHandler.displayImportedData();
        } else {
            cout << "Invalid option. Please choose 1, 2, 3, 4, 5, 6, or 7." << endl;
        }
    }

    return 0;
}


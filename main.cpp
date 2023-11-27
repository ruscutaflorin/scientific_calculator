#include <iostream>
#include <string>
#include "Calculator.h"

using namespace std;

int main() {
    string input;
    Calculator c;

    while (true) {
        cout << "Enter expression (type 'exit' to end):";
        getline(cin, input);

        if (input == "exit") {
            break;
        }
        c.setExpresie(input);
        size_t xPos = c.getExpresie().find('x');
        if (xPos != string::npos) {
            // If 'x' is present, solve the equation
            c.solveEquation();
        } else {
            // If 'x' is not present, evaluate the expression
            c.calculeaza();
            cout << c;
        }
    }

    return 0;
}

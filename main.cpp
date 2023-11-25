#include <iostream>
#include <string>
#include "Stack.h"
#include "Shunting_Yard.h"
#include "Calculator.h"
using namespace std;

int main() {
    string input;
    Calculator c;

    while (true) {
        cout << "Enter expression (type 'exit' to end): ";
        getline(cin, input);

        if (input == "exit") {
            break;  // Exit the loop if 'exit' is entered
        }

        c.setExpresie(input);
        cout << c;
    }

    return 0;
}

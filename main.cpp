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
        cout << c;

    }

    return 0;
}

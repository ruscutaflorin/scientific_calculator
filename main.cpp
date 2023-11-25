#include <iostream>
#include <string>
#include "Stack.h"
#include "Shunting_Yard.h"
#include "Calculator.h"
using namespace std;

// Tot ce face acest cod este sa calculeze RPN-ul (Reverse Polish Notation)
// Proiect realizat cu ajutorul algoritmului Shunting-yard => link : https://en.wikipedia.org/wiki/Shunting-yard_algorithm  //


int main()
{
    string input;
    Calculator c;

    while (true) {
        cout << "Enter expression (type 'exit' to end): ";
        cin >> input;

        if (input == "exit") {
            break;  // Exit the loop if 'exit' is entered
        }

        c.setExpresie(input);
        cout << c;
    }

    return 0;
}

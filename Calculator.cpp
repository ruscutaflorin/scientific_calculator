#include <iostream>
#include <string>
#include <cmath>
#include "Calculator.h"
#include "Shunting_Yard.h"
using namespace std;

Calculator::Calculator() {
    this->expresie = '\0';
    this->rezultat = '\0';
}

Calculator::Calculator(string expresie) {
    this->expresie = expresie;
    rezultat = '\0';
}

bool Calculator::operator!()
{
    bool ok = this->rezultat.length() > 0;
    return ok;
}

int Calculator::operator[](int index)
{
    if (index >= 0 && index < (rezultat.length() - 1))
    {
        return rezultat[index];
    }
    else {
        cout << "Valoarea index-ului este negativa sau mai mare decat lungimea totala a rezultatului!";
        return -1;
    }
}

void Calculator::setExpresie(string expresie) {

    if (expresie.length() > 0)
        this->expresie = expresie;
}

string Calculator::getExpresie() {
    return expresie;
}

void Calculator::calculeaza() {

    Shunting_Yard z;
    z.setExpresie(expresie);
    rezultat = z.calculeaza();

}

string Calculator::getRezultat() {
    return this->rezultat;
}

double parseNumber(const string& rpn, size_t& pos) {
    size_t start = pos;
    while (isdigit(rpn[pos]) || (rpn[pos] == '-' && isdigit(rpn[pos + 1]))) {
        pos++;
    }
    return stod(rpn.substr(start, pos - start));
}

//string Calculator::evalRPN(string rpn) {
//    Stack operandStack;
//
//    size_t pos = 0;
//    while (pos < rpn.length()) {
//        if (isdigit(rpn[pos]) || (rpn[pos] == '-' && isdigit(rpn[pos + 1]))) {
//            double parsedNumber = parseNumber(rpn, pos);
////            cout << "Parsed Number: " << parsedNumber << endl;
//            operandStack.push(parsedNumber);
//        } else if (rpn[pos] == ' ') {
//            pos++;  // Skip whitespace
//        } else {
//            double operand2 = operandStack.getLastElement();
//            operandStack.pop();
//            double operand1 = operandStack.getLastElement();
//            operandStack.pop();
//
//            switch (rpn[pos]) {
//                case '+':
//                    operandStack.push(operand1 + operand2);
//                    break;
//                case '-':
//                    operandStack.push(operand1 - operand2);
//                    break;
//                case '*':
//                    operandStack.push(operand1 * operand2);
//                    break;
//                case '/':
//                    operandStack.push(operand1 / operand2);
//                    break;
//                    // Add more cases for other operators as needed
//            }
//            pos++;  // Move to the next character
//        }
//    }
//
//    // The final result is now on the operandStack
//    return to_string(operandStack.getLastElement());
//}
string Calculator::evalRPN(string rpn) {
    Stack operandStack;

    size_t pos = 0;
    while (pos < rpn.length()) {
        if (isdigit(rpn[pos]) || (rpn[pos] == '-' && isdigit(rpn[pos + 1]))) {
            double parsedNumber = parseNumber(rpn, pos);
            operandStack.push(parsedNumber);
        } else if (rpn[pos] == ' ') {
            pos++;  // Skip whitespace
        } else {
            double operand2 = operandStack.getLastElement();
            operandStack.pop();
            double operand1 = operandStack.getLastElement();
            operandStack.pop();

            switch (rpn[pos]) {
                case '+':
                    operandStack.push(operand1 + operand2);
                    break;
                case '-':
                    operandStack.push(operand1 - operand2);
                    break;
                case '*':
                    operandStack.push(operand1 * operand2);
                    break;
                case '/':
                    if (operand2 == 0) {
                        // Handle division by zero
                        return "Error: Division by zero";
                    }
                    operandStack.push(operand1 / operand2);
                    break;
                case '^':
                    operandStack.push(pow(operand1, operand2));
                    break;
                case '#':
                    if (operand1 < 0 && fmod(operand2, 2) == 0) {
                        // Handle even root of a negative number
                        return "Error: Even root of a negative number";
                    }
                    operandStack.push(pow(operand1, 1 / operand2));
                    break;
                    // Add more cases for other operators as needed
            }
            pos++;  // Move to the next character
        }
    }

    if (operandStack.getSize() == 1) {
        // The final result is now on the operandStack
        return to_string(operandStack.getLastElement());
    } else {
        // Handle invalid expression
        return "Error: Invalid expression";
    }
}


ostream& operator << (ostream& out, Calculator c)
{
    out << "Expresie: " << c.getExpresie() << endl;
    c.calculeaza();
    out << "Rezultat Converie RPN: " << c.getRezultat() << endl;

    // Output the result of evalRPN
    out << "Evaluated RPN: " << c.evalRPN(c.getRezultat()) << endl;
    out << endl;

    return out;
}


istream& operator>>(istream& in, Calculator& c) {
    cout << "Expresia:";
    in >> c.expresie;

    return in;
}

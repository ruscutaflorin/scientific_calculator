#include <iostream>
#include <string>
#include <valarray>
#include "Calculator.h"
#include "Shunting_Yard.h"
#include "EquationSolver.h"

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
    // Remove spaces from the expression
    string expressionWithoutSpaces;
    for (char c : expresie) {
        if (!isspace(c)) {
            expressionWithoutSpaces += c;
        }
    }

    this->expresie = expressionWithoutSpaces;
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
    while (isdigit(rpn[pos]) || rpn[pos] == '.' || (rpn[pos] == '-' && isdigit(rpn[pos + 1]))) {
        pos++;
    }
    return stod(rpn.substr(start, pos - start));
}

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
                        return "Error: Division by zero";
                    }
                    operandStack.push(operand1 / operand2);
                    break;
                case '^':
                    operandStack.push(customPow(operand1, operand2));
                    break;
                case '#':
                    operandStack.push(customRoot(operand1, operand2));
                    break;
            }
            pos++;  // Move to the next character
        }
    }

    if (operandStack.getSize() == 1) {
        return to_string(operandStack.getLastElement());
    } else {
        return "Error: Invalid expression";
    }
}


double Calculator::customPow(double base, double exponent) {
    if (exponent == 0) {
        return 1.0;
    }

    double result = 1.0;
    bool isNegativeExponent = exponent < 0;

    for (int i = 0; i < abs(exponent); ++i) {
        result *= base;
    }

    return isNegativeExponent ? 1.0 / result : result;
}

double Calculator::customRoot(double base, double exponent) {
    if (base < 0 && static_cast<int>(exponent) % 2 == 0) {
        // Handle error for even root of a negative number
        throw std::domain_error("Error: Even root of a negative number");
    }

    double result = base;

    if (result == 0.0) {
        return 0.0;
    }

    double epsilon = 1e-10;
    double prevResult = 0.0;

    while (abs(result - prevResult) > epsilon) {
        prevResult = result;
        result = ((exponent - 1.0) * result + base / customPow(result, exponent - 1)) / exponent;
    }

    return result;
}


ostream& operator << (ostream& out, Calculator c)
{
    out << "Expresie: " << c.getExpresie() << endl;
    c.calculeaza();
    out << "Rezultat Converie RPN: " << c.getRezultat() << endl;

    out << "Evaluated RPN: " << c.evalRPN(c.getRezultat()) << endl;
    out << endl;

    return out;
}

istream& operator>>(istream& in, Calculator& c) {
    cout << "Expresia:";
    in >> c.expresie;

    return in;
}

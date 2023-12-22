#include <iostream>
#include <string>
#include "Calculator.h"
#include "Shunting_Yard.h"
#include <cmath>

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
    return this->rezultat.empty();
}

char Calculator::operator[](int index)
{
    if (index >= 0 && index < static_cast<int>(rezultat.length())) {
        return rezultat[index];
    }
    else {
        cout << "Invalid index or result is empty." << endl;
        return '\0';
    }
}


void Calculator::setExpresie(string expresie) {
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

string Calculator::getResult(){
    this->calculeaza();
    return this->evalRPN(this->getRezultat());
}

double parseNumber(const string& rpn, size_t& pos) {
    size_t start = pos;
    int decimalPoints = 0;

    while (isdigit(rpn[pos]) || rpn[pos] == '.' || (rpn[pos] == '-' && isdigit(rpn[pos + 1]))) {
        if (rpn[pos] == '.') {
            decimalPoints++;
            if (decimalPoints > 1) {
                return 0.0;
            }
        }
        pos++;
        if (pos >= rpn.length()) {
            break;
        }
    }

    if (decimalPoints == 0 && pos == start) {
        cout << "Error: No digits found for the number." << endl;
        return 0.0;
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
            pos++;
        } else {
            if (operandStack.getSize() < 2) {
                return "Error: Invalid expression";
            }

            double operand2 = operandStack.getLastElement();
            operandStack.pop();
            double operand1 = operandStack.getLastElement();
            operandStack.pop();

            double result;

            switch (rpn[pos]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 == 0) {
                        return "Error: Division by zero";
                    }
                    result = operand1 / operand2;
                    break;
                case '^':
                    result = customPow(operand1, operand2);
                    break;
                case '#':
                    result = customRoot(operand1, operand2);
                    break;
                default:
                    cout << "Error: Unknown operator." << endl;
                    return "Error: Invalid expression";
            }
            // Set very small values to zero
            if (fabs(result) < 1e-10) {
                result = 0.0;
            }

            operandStack.push(result);
            pos++;
        }
    }

    if (operandStack.getSize() == 1) {
        return to_string(operandStack.getLastElement());
    } else {
        cout << "Error: Too many operands." << endl;
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
        throw std::domain_error("Error: Even root of a negative number");
    }

    if (base == 0.0) {
        return 0.0;
    }

    double result = base;
    const double epsilon = 1e-15;
    const int maxIterations = 1000000;

    for (int iteration = 0; iteration < maxIterations; ++iteration) {
        double prevResult = result;
        result = ((exponent - 1.0) * result + base / pow(result, exponent - 1)) / exponent;

        if (std::abs(result - prevResult) <= epsilon) {
            return result;
        }
    }

    std::cout << "Warning: Maximum iteration limit reached without convergence." << std::endl;
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

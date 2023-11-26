// Created by FLORIN on 24.11.2023.
//

#ifndef SCIENTIFIC_CALCULATOR_CALCULATOR_H
#define SCIENTIFIC_CALCULATOR_CALCULATOR_H

#pragma once
#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

class Calculator {
private:
    string expresie;
    string rezultat;
    Stack operandStack;

public:
    Calculator();

    Calculator(string expresie);

    bool operator!();

    int operator[](int index);

    void setExpresie(string expresie);

    string getExpresie();

    void calculeaza();

    string getRezultat();
    string evalRPN(string rpn);

    // Declarations for custom power and root functions
    double customPow(double base, double exponent);
    double customRoot(double base, double exponent);

    friend istream& operator>>(istream& in, Calculator& c);

    friend ostream& operator << (ostream& out, Calculator c);
};

istream& operator>>(istream& in, Calculator& c);

ostream& operator << (ostream& out, Calculator c);

#endif //SCIENTIFIC_CALCULATOR_CALCULATOR_H

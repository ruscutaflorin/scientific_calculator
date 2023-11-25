//
// Created by FLORIN on 24.11.2023.
//

#ifndef SCIENTIFIC_CALCULATOR_SHUNTING_YARD_H
#define SCIENTIFIC_CALCULATOR_SHUNTING_YARD_H
#pragma once
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

class Shunting_Yard {

private:
    string expresie;
    string rezultat;
    Stack operatorStack;

public:
    Shunting_Yard();

    Shunting_Yard(string expresie);

    void operator()(string expresie);

    explicit operator string();

    int validareTip(char op);

    int prioritate(char op);

    string calculeaza();

    string getRezultat();

    void setExpresie(string expresie);

    string getExpresie();

    friend ostream& operator << (ostream& out, Shunting_Yard& sy);

    friend istream& operator>>(istream& in, Shunting_Yard& sy);
};
ostream& operator << (ostream& out, Shunting_Yard& sy);

istream& operator>>(istream& in, Shunting_Yard& sy);
#endif //SCIENTIFIC_CALCULATOR_SHUNTING_YARD_H

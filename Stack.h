#ifndef SCIENTIFIC_CALCULATOR_STACK_H
#define SCIENTIFIC_CALCULATOR_STACK_H

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Stack {
    // push // pop // empty
private:
    char* array;
    int nrLungime;
    int size;

public:
    Stack();

    Stack(char* array, int nrLungime);

    ~Stack();

    Stack(const Stack& s);

    Stack& operator = (const Stack& s);

    Stack operator+(const Stack& s);

    void push(int element);

    void pop();

    bool isEmpty();

    void getArray();

    char getLastElement();
    int getSize() ;
    void setArray(char* array, int nrLungime);

    friend ostream& operator << (ostream& out, Stack& s);

    friend istream& operator>>(istream& in, Stack& s);
};

ostream& operator << (ostream& out, Stack& s);

istream& operator>>(istream& in, Stack& s);

#endif // SCIENTIFIC_CALCULATOR_STACK_H

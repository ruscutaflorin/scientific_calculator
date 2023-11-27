#ifndef EQUATIONSOLVER_H
#define EQUATIONSOLVER_H

#include <iostream>
using namespace std;

class EquationSolver {
private:
    static const int MAX_EQUATION_LENGTH = 100; // Example constant
    double a, b, c;
    char* equation; // Dynamic character array to store the equation

    // Method to build the equation string
    void buildEquation();

public:
    // Constructors and Destructor
    EquationSolver(); // Default constructor
    EquationSolver(double a, double b, double c); // Parameterized constructor
    ~EquationSolver(); // Destructor

    EquationSolver(const EquationSolver& other);
    EquationSolver& operator=(const EquationSolver& other);

    EquationSolver operator+(const EquationSolver& other) const;
    EquationSolver operator-(const EquationSolver& other) const;
    // Static methods to solve equations
    static void solveLinearEquation(double a, double b);
    static void solveQuadraticEquation(double a, double b, double c);

    // Getter method for the equation
    const char* getEquation() const;

    // Overloaded insertion operator to print the equation
    friend ostream& operator<<(ostream& os, const EquationSolver& equationSolver);

    // Overloaded extraction operator to input coefficients
    friend istream& operator>>(istream& is, EquationSolver& equationSolver);
};
 ostream& operator<<(ostream& os, const EquationSolver& equationSolver);
 istream& operator>>(istream& is, EquationSolver& equationSolver);

#endif // EQUATIONSOLVER_H

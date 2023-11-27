#include <iostream>
#include <cmath>
#include <cstring>
#include <sstream>
#include "EquationSolver.h"


// Constant definition
const int EquationSolver::MAX_EQUATION_LENGTH;

// Default constructor
EquationSolver::EquationSolver() {
    equation = nullptr;
}

// Parameterized constructor
EquationSolver::EquationSolver(double a, double b, double c) : a(a), b(b), c(c) {
    buildEquation(); // Build the equation string
}

// Destructor to free dynamically allocated memory
EquationSolver::~EquationSolver() {
    delete[] equation;
}

// Copy constructor
EquationSolver::EquationSolver(const EquationSolver& other) : a(other.a), b(other.b), c(other.c) {
    buildEquation(); // Build the equation string for the new object
}

// Copy assignment operator
EquationSolver& EquationSolver::operator=(const EquationSolver& other) {
    if (this != &other) { // Self-assignment check
        // Copy the coefficients
        a = other.a;
        b = other.b;
        c = other.c;

        // Rebuild the equation string
        buildEquation();
    }
    return *this;
}
EquationSolver EquationSolver::operator+(const EquationSolver& other) const {
    // Simply add corresponding coefficients
    return EquationSolver(a + other.a, b + other.b, c + other.c);
}

EquationSolver EquationSolver::operator-(const EquationSolver& other) const {
    // Simply subtract corresponding coefficients
    return EquationSolver(a - other.a, b - other.b, c - other.c);
}
// Method to solve a linear equation
void EquationSolver::solveLinearEquation(double a, double b) {
    if (a == 0) {
        cout << "Invalid: This is not a linear equation." << endl;
        return;
    }

    double solution = -b / a;
    cout << "Linear equation solution: x = " << solution << endl;
}

// Method to solve a quadratic equation
void EquationSolver::solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Quadratic equation solutions: x1 = " << root1 << ", x2 = " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Quadratic equation has a repeated solution: x = " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Quadratic equation solutions: x1 = " << realPart << " + " << imaginaryPart << "i, "
                  << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

// Method to build the equation string
void EquationSolver::buildEquation() {
    ostringstream equationStream;
    equationStream << a << "x^2 + " << b << "x + " << c << " = 0";

    // Allocate memory for the equation using the constant
    equation = new char[MAX_EQUATION_LENGTH];
    strncpy(equation, equationStream.str().c_str(), MAX_EQUATION_LENGTH - 1);
    equation[MAX_EQUATION_LENGTH - 1] = '\0'; // Null-terminate the string
}

// Getter method for the equation
const char* EquationSolver::getEquation() const {
    return equation;
}

// Overloaded insertion operator to print the equation
ostream& operator<<(ostream& os, const EquationSolver& equationSolver) {
    os << equationSolver.getEquation();
    return os;
}

// Overloaded extraction operator to input coefficients
istream& operator>>(istream& is, EquationSolver& equationSolver) {
    cout << "Enter coefficients for the equation:" << endl;
    cout << "a:";
    is >> equationSolver.a;
    cout << "b:";
    is >> equationSolver.b;
    cout << "c:";
    is >> equationSolver.c;

    equationSolver.buildEquation(); // Rebuild the equation string
    return is;
}

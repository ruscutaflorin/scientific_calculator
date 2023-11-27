#ifndef EQUATIONSOLVER_H
#define EQUATIONSOLVER_H

#include <iostream>
#include <stdexcept>

class EquationSolver {
public:
    static void solveLinearEquation(const std::string& equation);
    static void solveQuadraticEquation(const std::string& equation);

public:
    static double customPow(double base, double exponent);
    static double customRoot(double base, double exponent);
    static double evalExpression(const std::string& expression);
    static double parseNumber(const std::string& str, size_t& pos);
};

#endif // EQUATIONSOLVER_H

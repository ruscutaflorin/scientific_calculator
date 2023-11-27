#include <iostream>
#include <cmath>
#include "EquationSolver.h"

void EquationSolver::solveLinearEquation(double a, double b) {
    if (a == 0) {
        std::cout << "Invalid: This is not a linear equation." << std::endl;
        return;
    }

    double solution = -b / a;
    std::cout << "Linear equation solution: x = " << solution << std::endl;
}

void EquationSolver::solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Quadratic equation solutions: x1 = " << root1 << ", x2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Quadratic equation has a repeated solution: x = " << root << std::endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = std::sqrt(-discriminant) / (2 * a);
        std::cout << "Quadratic equation solutions: x1 = " << realPart << " + " << imaginaryPart << "i, "
                  << "x2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
}


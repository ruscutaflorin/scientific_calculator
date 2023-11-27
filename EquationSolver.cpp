#include <iostream>
#include <valarray>
#include "EquationSolver.h"
#include "Calculator.h"

void EquationSolver::solveLinearEquation(const std::string& equation) {
    // Assuming the linear equation is in the form "ax + b = c"
    size_t equalPos = equation.find('=');
    if (equalPos != std::string::npos) {
        // Split the equation into two parts: "ax + b" and "c"
        std::string leftPart = equation.substr(0, equalPos);
        std::string rightPart = equation.substr(equalPos + 1);

        // Parse the left part to get the expression containing 'x'
        size_t xPos = leftPart.find('x');
        double a = 1.0;
        double b = 0.0;

        if (xPos != std::string::npos) {
            std::string xExpression = leftPart.substr(0, xPos);
            if (!xExpression.empty()) {
                a = evalExpression(xExpression);
            }

            // Parse the remaining part of the left expression
            if (xPos + 1 < leftPart.size()) {
                b = evalExpression(leftPart.substr(xPos + 1));
            }
        } else {
            // If there's no 'x' term, the entire left part is the constant term
            b = evalExpression(leftPart);
        }

        double c = evalExpression(rightPart);

        // Solve the linear equation
        if (a == 0) {
            if (b == c) {
                std::cout << "Infinite solutions for the linear equation." << std::endl;
            } else {
                std::cout << "No solution for the linear equation." << std::endl;
            }
        } else {
            double solution = (c - b) / a;
            std::cout << "Linear equation solution: x = " << solution << std::endl;
        }
    } else {
        std::cout << "Linear equation must contain the equal sign '='." << std::endl;
    }
}

void EquationSolver::solveQuadraticEquation(const std::string &equation) {
    cout << "nasol";
}




double EquationSolver::customPow(double base, double exponent) {
    // Implement your own power function
    return customPow(base, exponent);
}

double EquationSolver::customRoot(double base, double exponent) {
    // Implement your own root function
    return customRoot(base, exponent);
}
//
double EquationSolver::evalExpression(const std::string& expression) {
    size_t pos = 0;
    return parseNumber(expression, pos);
}

double EquationSolver::parseNumber(const std::string& str, size_t& pos) {
    size_t start = pos;

    // Check if the first character is '^' (indicating an exponent)
    if (str[start] == '^') {
        // Handle the exponent case separately
        pos++;
        return 0.0;  // You may want to adjust this based on your specific requirements
    }

    try {
        size_t endPos;
        double result = std::stod(str.substr(start), &endPos);
//        std::cout << "Parsed number: " << result << std::endl;
        pos += endPos;
        return result;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: Invalid number format at position " << start << ". Substring: '" << str.substr(start) << "'" << std::endl;
        throw;
    }
}

#include <iostream>
using namespace std;

void BasicOp(double, double, char);

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    BasicOp(num1, num2, operation);

    return 0;
}

void BasicOp(double num1, double num2, char operation) {
    double result = 0.0;

    switch (operation) {
        case '+':
            result = num1 + num2;
        break;
        case '-':
            result = num1 - num2;
        break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error: Division by zero." << std::endl;
                return;
            }

        result = num1 / num2;
        break;
        case '*':
            result = num1 * num2;
        break;
        default:
            std::cout << "Error: Invalid operation." << std::endl;
        return;
    }

    std::cout << "Result: " << result << std::endl;
    return;
}
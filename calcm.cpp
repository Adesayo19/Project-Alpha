#include <iostream>

using namespace std;

int main() {
    char operation, cont;
    double num1, num2, result;

    cout << "Welcome to the Basic Calculator!" << endl;

    do {
        // Input first number
        cout << "Enter first number: ";
        cin >> num1;

        // Input operator
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;

        // Input second number
        cout << "Enter second number: ";
        cin >> num2;

        // Perform the calculation based on the operator
        switch (operation) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Error: Invalid operator." << endl;
                break;
        }

        // Ask the user if they want to continue
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    cout << "Thank you for using the calculator. Goodbye!" << endl;

    return 0;
}

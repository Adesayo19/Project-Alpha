#include <iostream>

using namespace std;

int main() {
    char operation, cont;
    double num1, num2, result;
    string name;

    cout << "Welcome to the Basic Calculator!" << endl;
    cout << "Can we please know your name:" << endl;
    cin >> name;
    cout << "How are you " << name << endl;


    do {
        // Input first number
        cout << "Please enter first number: ";
        cin >> num1;

        // Input operator
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;

        // Input second number
        cout << "And enter second number: ";
        cin >> num2;
        cout << "Thank you for complying.\n Now please wait a few seconds for your answer." << endl;

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
        cout << name << ", Do yo want to perform another calculation? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    cout << name << " Please use another program or a calculator to check if the answer is correct" << endl;
    cout << "If there were any errors in your answer, please restart the program" << endl;
    cout << "Thank you for using the Basic calculator \n And complying with our instructions." << name << endl;
    cout << "We hope to see you again. Goodbye " << name << endl;

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    char operation, cont;
    double num1, num2, result;
    string name;

    cout << "Welcome to Team Alpha's Basic Calculator!" << endl;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "We are here to help you with any mathematical problem you have!" << endl;

    do {
        // Input first number
        cout << "Kindly enter the first number: ";
        cin >> num1;

        // Input operator
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;

        // Input second number
        cout << "And the second number: ";
        cin >> num2;

        cout << "Thank you for entering the numbers." << endl;
        cout << "Kindly wait as we find an answer to your mathematical problem..." << endl;

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
        cout << "Thank you for using Team Alpha's Basic Calculator!" << endl;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    cout << "Thank you for using Team Alpha's Basic Calculator." << endl;
    cout << "We enjoyed making this app to help you." << endl;
    cout << "Please contact us on Team Alpha's contact services if you have any complaints." << endl;
    cout << "We hope to see you again, " << name << ". Bye!" << endl; // Added name in output

    return 0;
}




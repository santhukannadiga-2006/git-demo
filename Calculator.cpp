#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

// Function to clear invalid input
void clearInput() {
    cin.clear(); // Clear error flags
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
}

int main() {
    double num1, num2;
    char op;

    cout << "===== Simple Calculator =====\n";
    cout << "Operations: +  -  *  /\n";

    // Input first number
    cout << "Enter first number: ";
    while (!(cin >> num1)) {
        cout << "Invalid input. Please enter a number: ";
        clearInput();
    }

    // Input operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Input second number
    cout << "Enter second number: ";
    while (!(cin >> num2)) {
        cout << "Invalid input. Please enter a number: ";
        clearInput();
    }

    // Perform calculation
    switch (op) {
        case '+':
            cout << "Result: " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Result: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Result: " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed.\n";
            } else {
                cout << "Result: " << (num1 / num2) << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator.\n";
    }

    return 0;
}

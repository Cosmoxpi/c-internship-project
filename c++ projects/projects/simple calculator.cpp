#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Welcome to the Simple Calculator!\n";
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Cannot divide by zero." << endl;
            break;
        default:
            cout << "Invalid operator. Please use +, -, *, or /." << endl;
    }

    return 0;
}

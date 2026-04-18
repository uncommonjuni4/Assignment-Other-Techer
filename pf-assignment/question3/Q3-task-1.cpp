#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number, operator (+, -, *, /), and second number: ";
    cin >> num1 >> op >> num2;

    if (op == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (op == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (op == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (op == '/') {
        if (num2 != 0)
            cout << "Result: " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero is not allowed." << endl;
    } else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}

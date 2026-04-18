#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    int choice;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    cout << "Choices: 1 for (+), 2 for (-), 3 for (*), 4 for (/): ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Result: " << n1 + n2 << endl; break;
        case 2: cout << "Result: " << n1 - n2 << endl; break;
        case 3: cout << "Result: " << n1 * n2 << endl; break;
        case 4:
            if (n2 != 0) cout << "Result: " << n1 / n2 << endl;
            else cout << "Error: Division by zero." << endl;
            break;
        default: cout << "Invalid choice." << endl;
    }

    return 0;
}

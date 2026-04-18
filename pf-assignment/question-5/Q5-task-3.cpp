#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp, converted;

    cout << "Temperature Converter:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter choice (1-2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            converted = (temp * 9 / 5) + 32;
            cout << temp << "C is " << converted << "F" << endl;
            break;
        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            converted = (temp - 32) * 5 / 9;
            cout << temp << "F is " << converted << "C" << endl;
            break;
        default:
            cout << "Invalid selection." << endl;
    }
    return 0;
}

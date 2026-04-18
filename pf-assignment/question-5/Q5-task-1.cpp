#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int choice;
    cout << "Area Calculator Menu:\n1. Square\n2. Circle\n3. Triangle\nEnter choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double side;
            cout << "Enter side length: ";
            cin >> side;
            cout << "Area of Square: " << side * side << endl;
            break;
        }
        case 2: {
            double radius;
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;
            cout << "Area of Triangle: " << (base * height) / 2 << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}

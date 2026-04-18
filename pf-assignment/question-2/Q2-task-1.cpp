#include <iostream>
using namespace std;

int main() {
    float percentage;
    cout << "Enter your percentage: ";
    cin >> percentage;

    if (percentage >= 90) {
        cout << "Grade: A" << endl;
    } else if (percentage >= 80) {
        cout << "Grade: B" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: C" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: D" << endl;
    } else if (percentage >= 0) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid percentage entered." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    // Check for vowels (both cases)
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << c << " is a vowel." << endl;
    } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        cout << c << " is a consonant." << endl;
    } else {
        cout << "Invalid input. Please enter an alphabet." << endl;
    }

    return 0;
}

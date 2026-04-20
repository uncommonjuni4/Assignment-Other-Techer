#include <iostream>
using namespace std;

int main() {
    int n, original, rev = 0;
    cout << "Enter number: ";
    cin >> n;
    original = n;
    while (n > 0) {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    if (original == rev) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    return 0;
}

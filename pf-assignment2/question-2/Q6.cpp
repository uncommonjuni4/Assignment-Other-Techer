#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {       // Starting point for inner loop
        for (int j = 5; j >= i; j--) {   // Prints from 5 down to 'i'
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

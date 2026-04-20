#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {       // Outer loop for rows
        for (int j = 1; j <= i; j++) {   // Inner loop for columns
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int L, U;
    cout << "Enter Lower Limit: ";
    cin >> L;
    cout << "Enter Upper Limit: ";
    cin >> U;
    for (int i = L; i <= U; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    return 0;
}

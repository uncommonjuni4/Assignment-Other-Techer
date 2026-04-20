#include <iostream>
using namespace std;

int main() {
    for (int i = 4; i >= 1; i--) {       // Row count decreases
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

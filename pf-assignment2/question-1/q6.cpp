#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "Even Sum: " << sum << endl;
    return 0;
}

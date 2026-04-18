#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "Enter current account balance: ";
    cin >> balance;
    cout << "Enter amount to withdraw: ";
    cin >> withdrawal;

    if (withdrawal > 0 && withdrawal <= balance) {
        balance -= withdrawal;
        cout << "Withdrawal successful! Remaining balance: " << balance << endl;
    } else if (withdrawal > balance) {
        cout << "Error: Insufficient balance." << endl;
    } else {
        cout << "Invalid withdrawal amount." << endl;
    }

    return 0;
}

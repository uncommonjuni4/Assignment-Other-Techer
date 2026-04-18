#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0, amount;
    int choice;

    do {
        cout << "\n--- Banking System ---\n";
        cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: $" << balance << endl;
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                balance += amount;
                cout << "Deposit successful." << endl;
                break;
            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful." << endl;
                } else {
                    cout << "Insufficient funds!" << endl;
                }
                break;
            case 4:
                cout << "Exiting system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

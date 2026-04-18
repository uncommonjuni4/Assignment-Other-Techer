#include <iostream>
using namespace std;

int main() {
    int inventory = 50, choice;

    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Add Book\n2. Display Total Books\n3. Borrow Book\n4. Return Book\n5. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: inventory++; cout << "Book added."; break;
            case 2: cout << "Books in inventory: " << inventory; break;
            case 3: 
                if (inventory > 0) { inventory--; cout << "Book borrowed."; }
                else cout << "No books available.";
                break;
            case 4: inventory++; cout << "Book returned."; break;
            case 5: cout << "Exiting..."; break;
            default: cout << "Invalid choice.";
        }
        cout << endl;
    } while (choice != 5);

    return 0;
}

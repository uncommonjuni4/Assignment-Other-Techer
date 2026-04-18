#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Empty", phone = "N/A";
    int choice;

    do {
        cout << "\n1. Add/Update Contact\n2. Display Contact\n3. Search (by name)\n4. Delete\n5. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter name: "; cin >> name;
                cout << "Enter phone: "; cin >> phone;
                break;
            case 2:
                cout << "Contact: " << name << " | " << phone << endl;
                break;
            case 3: {
                string sName;
                cout << "Enter name to search: "; cin >> sName;
                if (sName == name) cout << "Found: " << phone << endl;
                else cout << "Not found." << endl;
                break;
            }
            case 4:
                name = "Empty"; phone = "N/A";
                cout << "Contact deleted." << endl;
                break;
            case 5: break;
            default: cout << "Invalid choice.";
        }
    } while (choice != 5);

    return 0;
}

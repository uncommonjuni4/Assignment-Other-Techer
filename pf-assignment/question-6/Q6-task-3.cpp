#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int target = rand() % 100 + 1;
    int guess, attempts = 0;
    bool won = false;

    cout << "Guess the number (1-100):" << endl;

    while (!won) {
        cin >> guess;
        attempts++;

        // Switch on a boolean expression (evaluates to 1 for true, 0 for false)
        switch (guess == target) {
            case 1:
                cout << "Correct! Attempts: " << attempts << endl;
                won = true;
                break;
            case 0:
                switch (guess > target) {
                    case 1: cout << "Too high! Try again: "; break;
                    case 0: cout << "Too low! Try again: "; break;
                }
                break;
        }
    }
    return 0;
}

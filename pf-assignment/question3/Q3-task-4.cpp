#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 
    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;


    cout << "Enter your guess: ";
    cin >> guess;

    if (guess == secretNumber) {
        cout << "Congratulations! You guessed it right." << endl;
    } else if (guess > secretNumber) {
        cout << "Too high! The number was " << secretNumber << "." << endl;
    } else {
        cout << "Too low! The number was " << secretNumber << "." << endl;
    }

    return 0;
}

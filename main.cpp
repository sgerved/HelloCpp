#include <iostream>
#include "functions.h"

using namespace std;

/**
 * Comment out the argc and argv, so we don't get
 * any compiler warnings.
 * @brief main
 * @return
 */
int main(int /*argc*/, char /**argv[]*/)
{
    if (add(1, 2) == 3) {
        return 0;
    }
    cout << "Welcome to Guess My Number" << endl;
    int answer = 7;
    bool keepgoing = true;
    while (keepgoing) {
        cout << "Guess: ";
        int guess;
        cin >> guess;
        if (guess < answer) {
            cout << "Guess is smaller then answer";
        } else if (guess > answer) {
            cout << "Guess is larger then answer";
        } else if (guess == answer) {
            cout << "Correct guess!";
            keepgoing = false;
        }
        cout << endl;
    }
    return 0;
}

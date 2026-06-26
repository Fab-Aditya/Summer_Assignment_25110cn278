 // create quiz application
#include <iostream>
using namespace std;
int main() {
    int score = 0, answer;

    cout << "Q1. Capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nQ2. 5 + 7 = ?\n";
    cout << "1. 10\n2. 11\n3. 12\n4. 13\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nQ3. C++ is a?\n";
    cout << "1. Programming Language\n2. Browser\n3. Operating System\n4. Game\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    cout << "\nYour Score: " << score << " out of 3" << endl;

    return 0;
}
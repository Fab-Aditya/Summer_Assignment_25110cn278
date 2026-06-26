// Number guessing game using random numbers.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;
    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        if (guess > secret)
            cout << "Too High" << endl;
        else if (guess < secret)
            cout << "Too Low" << endl;
        else
            cout << "Congratulation You guessed the number." << endl;

    } while (guess != secret);

    return 0;
}
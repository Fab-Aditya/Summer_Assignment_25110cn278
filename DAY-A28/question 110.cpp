// Bank Account System
#include <iostream>
using namespace std;
int main() {
    double balance = 5000;
    double amount;
    int choice;
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Check Balance\n";
    cout << "Enter Choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter Deposit Amount: ";
        cin >> amount;
        balance += amount;
        cout << "Updated Balance: " << balance;
    }
    else if (choice == 2) {
        cout << "Enter Withdraw Amount: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Remaining Balance: " << balance;
        }
        else {
            cout << "Insufficient Balance";
        }
    }
    else if (choice == 3) {
        cout << "Current Balance: " << balance;
    }
    else {
        cout << "Invalid Choice";
    }

    return 0;
}
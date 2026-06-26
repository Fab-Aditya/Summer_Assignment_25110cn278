 // Simple ATM simulation with basic operations.
#include <iostream>
using namespace std;
int main() {
    int choice;
    float balance = 10000, amount;

    do {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited Successfully." << endl;
                break;

            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if (amount <= balance) {
                    balance -= amount;
                    cout << "Please collect your cash." << endl;
                } else {
                    cout << "Insufficient Balance." << endl;
                }
                break;

            case 4:
                cout << "Thank You for using ATM." << endl;
                break;

            default:
                cout << "Invalid Choice." << endl;
        }

    } while (choice != 4);

    return 0;
}
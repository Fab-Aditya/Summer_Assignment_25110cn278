// Contact Management System
#include <iostream>
#include <string>
using namespace std;
int main() {
    string contactName;
    string phoneNumber;
    int choice;
    cout << "1. Add Contact\n";
    cout << "2. Display Contact\n";
    cout << "Enter Choice: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        cout << "Enter Contact Name: ";
        getline(cin, contactName);

        cout << "Enter Phone Number: ";
        getline(cin, phoneNumber);

        cout << "\nContact Saved Successfully!";
    }
    else if (choice == 2) {
        cout << "Enter Contact Name: ";
        getline(cin, contactName);

        cout << "Enter Phone Number: ";
        getline(cin, phoneNumber);

        cout << "\nName: " << contactName;
        cout << "\nPhone: " << phoneNumber;
    }
    else {
        cout << "Invalid Choice";
    }

    return 0;
}
// Library Management System
#include <iostream>
#include <string>
using namespace std;
int main() {
    string bookName;
    int bookId;
    int choice;
    cout << "1. Add Book\n";
    cout << "2. Display Book\n";
    cout << "Enter Choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "\nBook Added Successfully!";
    }
    else if (choice == 2) {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "\nBook ID: " << bookId;
        cout << "\nBook Name: " << bookName;
    }
    else {
        cout << "Invalid Choice";
    }

    return 0;
}
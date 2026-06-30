// Mini library system
#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
    bool issued;
};
int main() {
    Book b[100];
    int total = 0, choice;

    do {
        cout << "\n1.Add Book\n2.Display Books\n3.Issue Book\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Book ID: ";
            cin >> b[total].id;
            cout << "Book Title: ";
            cin >> b[total].title;
            b[total].issued = false;
            total++;
            break;

        case 2:
            for (int i = 0; i < total; i++) {
                cout << "\nID: " << b[i].id;
                cout << "\nTitle: " << b[i].title;
                cout << "\nStatus: ";
                if (b[i].issued)
                    cout << "Issued";
                else
                    cout << "Available";
                cout << endl;
            }
            break;

        case 3: {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < total; i++) {
                if (b[i].id == id)
                    b[i].issued = true;
            }
            break;
        }

        case 4:
            cout << "Exit";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}
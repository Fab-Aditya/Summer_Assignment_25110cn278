// Menu-driven string operations
#include <iostream>
#include <string>
using namespace std;
int main() {
    string text;
    int choice;

    cout << "Enter string: ";
    cin.ignore();
    getline(cin, text);

    do {
        cout << "\n1.Length\n2.Reverse\n3.Display\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Length = " << text.length();
                break;

            case 2:
                for (int i = text.length() - 1; i >= 0; i--)
                    cout << text[i];
                break;

            case 3:
                cout << text;
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}
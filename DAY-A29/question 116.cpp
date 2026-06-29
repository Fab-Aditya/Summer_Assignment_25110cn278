// Inventory management system
#include <iostream>
using namespace std;
struct Item {
    int id;
    string name;
    int quantity;
};
int main() {
    Item item[100];
    int total = 0, choice;

    do {
        cout << "\n1.Add Item\n2.Display Items\n3.Search Item\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter ID: ";
                cin >> item[total].id;
                cout << "Enter Name: ";
                cin >> item[total].name;
                cout << "Enter Quantity: ";
                cin >> item[total].quantity;
                total++;
                break;

            case 2:
                for (int i = 0; i < total; i++) {
                    cout << "\nID: " << item[i].id;
                    cout << "\nName: " << item[i].name;
                    cout << "\nQuantity: " << item[i].quantity << "\n";
                }
                break;

            case 3: {
                int id, found = 0;
                cout << "Enter ID: ";
                cin >> id;

                for (int i = 0; i < total; i++) {
                    if (item[i].id == id) {
                        cout << "Name: " << item[i].name << endl;
                        cout << "Quantity: " << item[i].quantity << endl;
                        found = 1;
                    }
                }

                if (!found)
                    cout << "Item not found";
                break;
            }

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}
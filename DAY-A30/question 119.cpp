// Mini employee management system
#include <iostream>
using namespace std;
struct Employee {
    int id;
    string name;
    float salary;
};
int main() {
    Employee emp[100];
    int total = 0, choice;

    do {
        cout << "\n1.Add Employee\n2.Display Employees\n3.Search Employee\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter ID: ";
            cin >> emp[total].id;
            cout << "Enter Name: ";
            cin >> emp[total].name;
            cout << "Enter Salary: ";
            cin >> emp[total].salary;
            total++;
            break;

        case 2:
            for (int i = 0; i < total; i++) {
                cout << "\nID: " << emp[i].id;
                cout << "\nName: " << emp[i].name;
                cout << "\nSalary: " << emp[i].salary << endl;
            }
            break;

        case 3: {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            for (int i = 0; i < total; i++) {
                if (emp[i].id == id) {
                    cout << "Name: " << emp[i].name << endl;
                    cout << "Salary: " << emp[i].salary << endl;
                }
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
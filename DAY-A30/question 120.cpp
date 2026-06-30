// Mini project using arrays, strings and functions
#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    int marks;
};

Student s[100];
int total = 0;
void addStudent() {
    cout << "Enter Roll: ";
    cin >> s[total].roll;
    cout << "Enter Name: ";
    cin >> s[total].name;
    cout << "Enter Marks: ";
    cin >> s[total].marks;
    total++;
}

void displayStudents() {
    for (int i = 0; i < total; i++) {
        cout << "\nRoll: " << s[i].roll;
        cout << "\nName: " << s[i].name;
        cout << "\nMarks: " << s[i].marks << endl;
    }
}

void searchStudent() {
    int roll;
    cout << "Enter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < total; i++) {
        if (s[i].roll == roll) {
            cout << "Name: " << s[i].name << endl;
            cout << "Marks: " << s[i].marks << endl;
            return;
        }
    }

    cout << "Student Not Found";
}

int main() {
    int choice;

    do {
        cout << "\n1.Add Student\n2.Display Students\n3.Search Student\n4.Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            cout << "Exit";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}
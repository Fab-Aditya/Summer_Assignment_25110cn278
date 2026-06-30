// Student record system using array and string
#include <iostream>
using namespace std;
struct Student {
    int roll;
    string name;
    int marks;
};
int main() {
    Student s[100];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Roll: ";
        cin >> s[i].roll;
        cout << "Enter Name: ";
        cin >> s[i].name;
        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    cout << "\nStudent Records\n";

    for (int i = 0; i < n; i++) {
        cout << "Roll: " << s[i].roll << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
        cout << endl;
    }

    return 0;
}
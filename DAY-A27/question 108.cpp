// Marksheet Generation System
#include <iostream>
#include <string>
using namespace std;
int main() {
    string studentName;
    int rollNo;
    float english, maths, science, total, percentage;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter English Marks: ";
    cin >> english;

    cout << "Enter Maths Marks: ";
    cin >> maths;

    cout << "Enter Science Marks: ";
    cin >> science;

    total = english + maths + science;
    percentage = total / 3;

    cout << "\n----- Marksheet -----\n";
    cout << "Name       : " << studentName << endl;
    cout << "Roll No    : " << rollNo << endl;
    cout << "English    : " << english << endl;
    cout << "Maths      : " << maths << endl;
    cout << "Science    : " << science << endl;
    cout << "Total      : " << total << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade      : A+";
    else if (percentage >= 75)
        cout << "Grade      : A";
    else if (percentage >= 60)
        cout << "Grade      : B";
    else if (percentage >= 40)
        cout << "Grade      : C";
    else
        cout << "Grade      : Fail";

    return 0;
}
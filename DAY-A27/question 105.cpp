// Student Record Management System
#include <iostream>
#include <string>
using namespace std;
int main() {
   int rollNo;
    string studentName;
    float marks;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

     cin.ignore();

    cout << "Enter Student Name: ";
      getline(cin, studentName);

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\n----- Student Record -----\n";
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << studentName << endl;
    cout << "Marks       : " << marks << endl;

    if (marks >= 40)
        cout << "Result      : Pass";
    else
        cout << "Result      : Fail";

    return 0;
}
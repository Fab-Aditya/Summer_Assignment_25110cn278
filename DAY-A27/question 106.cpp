// Employee Management System
#include <iostream>
#include <string>
using namespace std;
int main() {
    int employeeId;
     string employeeName;
    string employeeDepartment;
    float employeeSalary;
   
    cout << "Enter Employee ID: ";
    cin >> employeeId;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, employeeName);

    cout << "Enter Department: ";
    getline(cin, employeeDepartment);

    cout << "Enter Salary: ";
    cin >> employeeSalary;

    cout << "\n----- Employee Details -----\n";
    cout << "Employee ID : " << employeeId << endl;
    cout << "Name        : " << employeeName << endl;
    cout << "Department  : " << employeeDepartment << endl;
    cout << "Salary      : " << employeeSalary << endl;

    return 0;
}
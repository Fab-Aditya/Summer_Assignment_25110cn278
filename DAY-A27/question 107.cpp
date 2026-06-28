// Salary Management System
#include <iostream>
using namespace std;
int main() {
    float basicSalary, bonus, deduction, netSalary;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Bonus: ";
    cin >> bonus;

    cout << "Enter Deduction: ";
    cin >> deduction;

    netSalary = basicSalary + bonus - deduction;

    cout << "\n----- Salary Details -----\n";
    cout << "Basic Salary : " << basicSalary << endl;
    cout << "Bonus        : " << bonus << endl;
    cout << "Deduction    : " << deduction << endl;
    cout << "Net Salary   : " << netSalary << endl;

    return 0;
}

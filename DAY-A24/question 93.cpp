// WAP to check string rotation

#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, second;

    cout << "Enter first string: ";
    getline(cin, first);

    cout << "Enter second string: ";
    getline(cin, second);

    string temp = first + first;

    if (first.length() == second.length() && temp.find(second) != string::npos)
        cout << "String is rotation";
    else
        cout << "String is not rotation";

    return 0;
}
// find common characters in strings
#include <iostream>
#include <string>
using namespace std;
int main() {
    string first, second;

    cout << "Enter the  first string: ";
    cin >> first;

    cout << "Enter the  second string: ";
    cin >> second;

    cout << "Common characters: ";

    for (int i = 0; i < first.length(); i++) {
        bool found = false;

        for (int j = 0; j < second.length(); j++) {
            if (first[i] == second[j]) {
                found = true;
                break;
            }
        }

        if (found)
            cout << first[i] << " ";
    }

    return 0;
}
//intersection of array
#include<iostream>
using namespace std;
int main() {
    int size1, size2;

    cout << "Enter size of first array: ";
    cin >> size1;

    int first[size1];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> first[i];
    }

    cout << "Enter size of second array: ";
    cin >> size2;

    int second[size2];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> second[i];
    }

    cout << "Intersection elements: ";

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (first[i] == second[j]) {
                cout << first[i] << " ";
                break;
            }
        }
    }

    return 0;
}
//merge array
#include<iostream>
using namespace std;
int main() {
    int size1, size2;

    cout << "Enter the size of first array: ";
    cin >> size1;

    int first[size1];

    cout << "Enter the elements of first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> first[i];
    }

    cout << "Enter the size of second array: ";
    cin >> size2;

    int second[size2];

    cout << "Enter the elements of second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> second[i];
    }

    int merged[size1 + size2];

    for (int i = 0; i < size1; i++) {
        merged[i] = first[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = second[i];
    }

    cout << "merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}
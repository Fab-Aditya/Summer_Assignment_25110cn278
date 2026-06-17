// union of array
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

    cout << "Enter size of second array: ";
    cin >> size2;

    int second[size2];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> second[i];
    }

    int result[size1 + size2];
    int count = 0;

    for (int i = 0; i < size1; i++) {
        result[count++] = first[i];
    }

    for (int i = 0; i < size2; i++) {
        bool found = false;

        for (int j = 0; j < count; j++) {
            if (second[i] == result[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            result[count++] = second[i];
        }
    }

    cout << "Union array: ";
    for (int i = 0; i < count; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
// merge two sorted arrays
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int size1, size2;

    cout << "Enter size of first array: ";
    cin >> size1;

    vector<int> first(size1);

    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < size1; i++)
        cin >> first[i];

    cout << "Enter size of second array: ";
    cin >> size2;

    vector<int> second(size2);

    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < size2; i++)
        cin >> second[i];

    vector<int> merged;
    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        if (first[i] < second[j])
            merged.push_back(first[i++]);
        else
            merged.push_back(second[j++]);
    }

    while (i < size1)
        merged.push_back(first[i++]);

    while (j < size2)
        merged.push_back(second[j++]);

    cout << "Merged Array: ";
    for (int value : merged)
        cout << value << " ";

    return 0;
}
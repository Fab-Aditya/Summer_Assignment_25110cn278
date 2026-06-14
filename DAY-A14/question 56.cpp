//duplicate element in array
#include<iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }

        }
        
    }

    return 0;
}
//binary Search
#include<iostream>
using namespace std;
int main() {
    int size, target;
    cout << "Enter the size: ";
    cin >> size;

    int arr[size];

    cout << "Enter the sorted elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    int start = 0;
    int end = size - 1;
    int position = -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target) {
            position = mid;
            break;
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if(position == -1) {
        cout << "Element not found";
    }
    else {
        cout << "Element found at index " << position;
    }

    return 0;
}
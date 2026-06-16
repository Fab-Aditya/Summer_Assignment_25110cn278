// remove duplicate number in array
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the size:";
    cin >> n;

    int arr[n];
cout<<"enter the numbers:";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
cout <<"new array = ";
    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
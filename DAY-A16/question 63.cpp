//find pair with given sum
#include <iostream>
using namespace std;
int main() {
    int n, target;
    cout<<"enter the size:";
    cin>>n;
      cout<<"enter the target:";
    cin >> target;
  

    int arr[n];
cout<<"enter the numbers:";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Pair: " << arr[i] << " " << arr[j];
                found = true;
            }
        }
    }

    if(!found)
        cout << "no pair found";

    return 0;
}
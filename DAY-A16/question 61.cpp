//find missing number in array (1 to n)
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the size:";
    cin >> n;

    int arr[n-1];
    int sum = 0;
    cout<<"enter the number:";

    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    cout << "missing number: " << total - sum;

    return 0;
}
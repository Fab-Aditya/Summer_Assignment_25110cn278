// rotate array left
#include<iostream>
#include<vector>
using namespace std;
int main(){
int size;
int temp;
cout<<"enter the size:";
cin>>size;
vector<int>arr(size);
cout<<"enter the numbers:";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
temp=arr[0];
for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = temp;
    cout << "Array after left rotation: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
//move zeroes to end
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
int j = 0;  
    for(int i = 0; i < size; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    while(j < size) {
        arr[j] = 0;
        j++;
    }

    cout << "Array after moving zeroes to end: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
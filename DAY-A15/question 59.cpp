//rotate array right 
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
temp=arr[size-1];
for (int i = 0; i <size-1 ; i++) {
        arr[(size-1)-i] = arr[(size-2)-i];
    
    }

    arr[0] = temp;
    cout << "Array after right rotation: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
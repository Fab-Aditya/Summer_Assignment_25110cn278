//second largest element
#include<iostream>
using namespace std;
int main(){
int size;
int largest = INT_MIN;
int second_largest = INT_MIN;
cout<<"enter the size:";
cin>>size;
int arr[size];
cout<<"enter the numbers:";
for(int i=0;i<size;i++){
    cin>>arr[i];
}


for(int i=0;i<size;i++){
  if(arr[i]>largest){
    second_largest = largest;
largest = arr[i];

  }
  else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
}
cout<<"second largest = "<<second_largest;

return 0;
}
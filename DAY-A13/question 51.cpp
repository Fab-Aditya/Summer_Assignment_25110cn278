// find largest and smallest element
#include<iostream>
using namespace std;
int main(){
int size;
int smallest=INT_MAX;
int largest=INT_MIN;
cout<<"enter the size:";
cin>>size;
int arr[size];
cout<<"enter the number:";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
    smallest = min(arr[i],smallest);
    largest = max(arr[i],largest);
}
cout<<"smallest element in array = "<<smallest<<endl;
cout<<"largest element in array = "<<largest;


return 0;
}
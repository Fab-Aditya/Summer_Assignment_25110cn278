//find sum and average of array
#include<iostream>
using namespace std;
int main(){
int size;
int sum=0;
int avg;
cout<<"enter the size:";
cin>>size;
int arr[size];
cout<<"enter the number:";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
    sum +=arr[i];
}
avg=sum/size;
cout<<"sum of array = "<<sum<<endl;
cout<<"average of array = "<<avg;

    return 0;
}

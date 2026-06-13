// count even and odd elements
#include<iostream>
using namespace std;
int main(){
int size;
int odd=0;
int even=0;
cout<<"enter the size:";
cin>>size;
int arr[size];
cout<<"enter the number:";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}
cout<<"even numbers = "<<even<<endl;
cout<<"odd numbers = "<<odd;

return 0;
}
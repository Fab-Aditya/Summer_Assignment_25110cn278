//frecuency of an element
#include<iostream>
using namespace std;
int main(){
int size,count=0;
int target;
cout<<"enter the size:";
cin>>size;
int arr[size];
cout<<"enter the numbers:";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
   cout<<"enter the target:";
cin>>target; 

for(int i=0;i<size;i++){
    if(target==arr[i]){
        count++;
    }
  
}
cout<<"frequency of "<<target<<" is = "<<count<<endl;
return 0;
}
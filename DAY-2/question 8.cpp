//check number is palindrome or not
#include<iostream>
using namespace std;
int main(){
int reverse=0;
int original;
cout<<"enter original value:";
cin>>original;
int temp = original;
while(original > 0 ){
    int rem = original % 10;
    original /=10;
    reverse = reverse*10+rem;
   
}

if(reverse==temp){
    cout<<"it is pelindrom:";
}
    
    else{
        cout<<"it is not pelindrom:";
    }


cout<<reverse<<endl;


    return 0;
}
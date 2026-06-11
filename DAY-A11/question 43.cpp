//write function to check prime number
#include<iostream>
using namespace std;
int  primeNumber(int n,int count=0){
    
    for(int i=2;i<n;i++){
        if(n%i==0){
    
        count++;
        }
    }
    if(count==0){
        cout<<"prime number";
    }
    else{
        cout<<"non prime number";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<n<<" is ";
    primeNumber(n);

    return 0;
}
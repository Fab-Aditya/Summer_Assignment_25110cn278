//write function for armstrong
#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int n,int arm=0){
    int original_value=n;
    int temp=n;
    int digit=0;
    while(temp>0){
        int rem =temp%10;
        temp /=10;
        digit++;
    }
  temp=n;
    while(temp>0){
        int rem=temp%10;
        temp /=10;
        
        int store=pow(rem,digit);
      arm=arm+store;
    }
    if(arm==original_value){
        cout<<"armstrong number";
    }
    else{
        cout<<"not armstrong number";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<n<<" is ";
    armstrong(n);

    return 0;
}
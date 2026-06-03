//find GCD of two numbers
#include<iostream>
using namespace std;
int main(){
  int num ,num1,i,gcd;
  cout<<"enter the number:";
  cin>>num;
  cout<<"enter the number:";
  cin>>num1;

for(i=1;i<=num && i<=num1;i++){
  if(num%i==0 && num1%i==0){
    gcd=i;
  }

}
cout<<"gcd of num and num1:"<<gcd;

return 0;

}

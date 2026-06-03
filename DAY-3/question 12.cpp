//find LCM of two number
#include<iostream>
using namespace std;
int main(){
  int num ,num1,i,gcd ,lcm;
  cout<<"enter the number:";
  cin>>num;
  cout<<"enter the number:";
  cin>>num1;

for(i=1;i<=num && i<=num1;i++){
  if(num%i==0 && num1%i==0){
    gcd=i;
  }
//lcm=(num*num1)/gcd;
}
lcm=(num*num1)/gcd;
cout<<"lcm:"<<lcm;

return 0;

}

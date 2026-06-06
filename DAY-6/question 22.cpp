//convert binary to decimal
#include<iostream>
using namespace std;
int main(){
int n;
int ans=0;
int pow=1;
cout<<"enter the number:";
cin>>n;
while(n>0){
  int rem=n%10;
  n=n/10;
  ans=ans+(rem*pow);
  pow=pow*2;

}
cout<<"decimal nuumber:"<<ans;

    return 0;
}
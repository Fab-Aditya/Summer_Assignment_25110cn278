//convert decimal to binaary
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number:";
cin>>n;
int pow=1;
int ans=0;
while(n>0){
    int rem = n%2;
   n /= 2;
    ans=ans+(rem*pow);
   pow=pow*10;
  
}
   cout<<"binary number:"<<ans;

return 0;
}
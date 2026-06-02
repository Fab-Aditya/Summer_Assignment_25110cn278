//find sum of digit of a number
#include<iostream>
using namespace std;
int main(){
int n,rem;
int digit=0;
cout<<"enter the number:";
cin>>n;
while(n>0){
   rem = n%10;
   n=n/10;
   digit += rem;
}
cout<<"sum of digit:"<<digit<<endl;


return 0;
}
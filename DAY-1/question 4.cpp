//count digit in a number
#include<iostream>
using namespace std;

int main(){
    int n ,digit =0;
    cout<<"enter the number :";
    cin>>n;
    while(n>0){
n=n/10;
digit ++;
}
cout<<"digit of number = "<<digit;

return 0;
}
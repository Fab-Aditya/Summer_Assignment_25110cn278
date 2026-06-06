////cout set bits in a number
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number:";
cin>>n;
int count=0;
while(n>0){
    int rem = n%2;
   n /= 2;
    if(rem==1){
     count++;
}

}
cout<<"set bits:"<<count;

return 0;
}
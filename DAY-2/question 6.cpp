//reverse a number
#include<iostream>
using namespace std;
int main(){
int n;
int rem,reverse = 0;
cout<<"enter the number:";
cin>>n;
while(n>0){
rem = n%10;
n = n/10;
reverse = reverse*10+rem;
}
cout <<"reverse no:"<<reverse;

return 0;

}







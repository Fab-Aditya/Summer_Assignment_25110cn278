//recursive reverse number
#include<iostream>
using namespace std;
int rev=0;
int reverse(int n){
if(n==0){
    return rev;
}
rev=rev*10+(n%10);
return reverse(n/10);
}
int main(){
int n;
cout<<"enter the number:";
cin>>n;
    cout<<"reverse the number of "<<n<<" is = "<<reverse(n);
    return 0;
}
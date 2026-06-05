//print factors of a number
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number:";
cin>>n;
for(int i=1;i<=n;i++){
    int rem = n%i;
if(rem==0){
cout<<i<<" ";
}
}

    return 0;
}
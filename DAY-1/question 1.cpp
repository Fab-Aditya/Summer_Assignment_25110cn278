//sum of first n natural number
#include<iostream>
using namespace std;

int main(){
    int n,  sum=0;
cout<<"enter the nunber:";
cin>>n;

for(int i=0;i<=n;i++){
    sum = sum + i;
}
cout<<"sum of number:"<<sum<<endl;

return 0;
}


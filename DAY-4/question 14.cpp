//find nth fibonacci terms
#include<iostream>
using namespace std;
int main(){
   
    int n,a=0,b=1,sum;
    cout<<"enter the number:";
    cin>>n;

if(n==0){
    cout<<a;
}

else if(n==1){
    cout<<b;
}
else {
    for(int i=2;i<=n;i++){
    sum=a+b;
    a=b;
    b=sum;
    }
    cout<<"nth fibonacci term:"<<b;
}
return 0;

}
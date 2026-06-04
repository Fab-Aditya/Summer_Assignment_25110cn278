//generate fibonacci series
#include<iostream>
using namespace std;
int main(){
   
    int n,a=0,b=1,sum;
    cout<<"enter the number:";
    cin>>n;

if(n<=0){
    cout<<"invalit number";
}

else if(n==1){
    cout<<a<<" ";
}
else {
    cout<<a<<" "<<b<<" ";
}

    for(int i=3;i<=n;i++){
    sum=a+b;
    a=b;
    b=sum;
    cout<<sum<<" ";
    }
    
return 0;

}
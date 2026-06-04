//check armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,digit=0, rem,sum=0 ,temp;
    cout<<"enter the number:";
    cin>>n;
temp=n;
int original_number = n;
    while(n>0){
        n=n/10;
       digit++;
    }

    while(temp>0){
        rem=temp%10;
        temp=temp/10;
    
    sum=sum+pow(rem,digit);
    }
    
cout<<"digit:"<<digit<<endl<<sum<<" ";
if(original_number==sum){
    cout<<"armstrong number";

}
else{
    cout<<"not armstrong number";
}


    return 0;
}
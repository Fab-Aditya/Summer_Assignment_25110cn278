//find armstrong number in a range
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,rem,temp,start,end;
    
    cout<<"enter the number:";
    cin>>start>>end;

    for(n=start;n<=end;n++){
        int digit=0,sum=0;
        temp=n;

int original_number = n;
    while(temp>0){
        temp=temp/10;
       digit++;
    
    }
    
    temp=n;

    while(temp>0){
        rem=temp%10;
        temp=temp/10;
    
    sum=sum+pow(rem,digit);
    }
    
if(original_number==sum){
   
cout<<"digit:"<<digit<<endl<<"armstron no:"<<original_number<<endl;
}
    }

    return 0;
}
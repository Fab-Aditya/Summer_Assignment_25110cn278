//find largest prime factor
#include<iostream>
using namespace std;
int main(){    
int n;
int largest=-1;
cout<<"enter the number:";
cin>>n;
for(int i=1;i<=n;i++){
    int rem = n%i;
int count=0;
if(rem==0){
    for(int s=2;s<i;s++){
        if(i%s==0){
            count++;
        }
    }
    if(count==0){
        largest=i;  
    }   
}
}
 cout<<"largest prime factor:"<<largest;

    return 0;
}
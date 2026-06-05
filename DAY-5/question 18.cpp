//check the storng number
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the number:";
    cin>>n;
    while(n>0){
        int rem=n%10;
        n=n/10;
      int fact=1;
   for(int i=1;i<=rem;i++){
    fact *=i;
   }
     sum += fact;
    }
    if(sum==145){
        cout<<sum<<endl<<"strong number";
}
    else{
        cout<<sum<<endl<<"not strong number";

    }
  
    return 0;
}
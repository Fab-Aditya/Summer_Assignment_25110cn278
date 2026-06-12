//write function for fibonacci 
#include<iostream>
using namespace std;
int fibonacci(int p){
int n=0,s=1;
int next;
    if(n>=0){
        cout<<0;
    }
    if(s>=1){
        cout<<1;
    }
    for(int i=2;i<=p;i++){
        next=n+s;
        n=s;
        s=next;
        cout<<s;
    }
    return 0;
}
int main(){
    int p;
    cout<<"enter the number:";
    cin>>p;
    fibonacci(p);

    return 0;
}

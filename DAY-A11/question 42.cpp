//write function to find maximum number
#include<iostream>
using namespace std;
int maximum(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    cout<<"enter number a:";
    cin>>a;
    cout<<"enter number b:";
    cin>>b;
    cout<<"maximum number is = "<<maximum(a,b);

    return 0;
}
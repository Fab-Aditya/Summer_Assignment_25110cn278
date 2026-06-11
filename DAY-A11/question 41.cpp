//write function to find sum of two numbers
#include<iostream>
using namespace std;
int sumNumber(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"enter number a:";
    cin>>a;
    cout<<"enter number b:";
    cin>>b;
    cout<<"sum of numbers = "<<sumNumber(a,b);

    return 0;
}
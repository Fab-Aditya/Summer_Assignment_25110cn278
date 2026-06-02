//find product of digit
#include<iostream>
using namespace std;
int main(){
    int n;
    int rem , ans = 1;
    cout<<"enter the digit:";
    cin>>n;
    while(n>0){
        rem = n%10;
        n = n/10;
        ans = ans*rem;
    }
    cout<<"product of digits:"<<ans;

    return 0;
}
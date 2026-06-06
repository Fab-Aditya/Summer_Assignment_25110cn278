//find x^n without pow()
#include<iostream>
using namespace std;
int main(){
    int n;
    int x;
    cout<<"enter the base x:";
    cin>>x;
    cout<<"enter the power n:";
    cin>>n;
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*x;

    }
    cout<<"x^n = "<<ans;

    return 0;
}
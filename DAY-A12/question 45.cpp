//write function for palindrome
#include<iostream>
using namespace std;
int palindrome(int n,int rev=0){
    int original_value = n;
    while(n>0){
        int rem = n%10;
        rev=rev*10+rem;
        n /=10;
    }
    if(rev==original_value){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<n<<" is ";
    palindrome(n);

    return 0;
}
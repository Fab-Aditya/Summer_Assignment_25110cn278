//palindrome string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string text,rev="";
    cout<<"Enter the string: ";
    cin>>text;

    for(int i=text.length()-1;i>=0;i--){
        rev+=text[i];
    }

    if(text==rev){
        cout<<"Palindrome string";
    }
    else{
        cout<<"Not palindrome string";
    }

    return 0;
}
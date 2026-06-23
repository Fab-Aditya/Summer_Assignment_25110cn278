//check anagram strings
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string word1,word2;
    cout<<"Enter first string : ";
    cin>>word1;

    cout<<"Enter second string : ";
    cin>>word2;

    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());

    if(word1==word2){
        cout<<"Strings are anagram";
    }
    else{
        cout<<"Strings are not anagram";
    }

    return 0;
}
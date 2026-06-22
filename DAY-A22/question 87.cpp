//charector frequency
#include<iostream>
#include<string>
using namespace std;
int main(){
    string text;
    char ch;
    int total=0;

    cout<<"Enter the string: ";
    getline(cin,text);

    cout<<"Enter the character: ";
    cin>>ch;

    for(int i=0;i<text.length();i++){
        if(text[i]==ch){
            total++;
        }
    }

    cout<<"Frequency = "<<total;

    return 0;
}
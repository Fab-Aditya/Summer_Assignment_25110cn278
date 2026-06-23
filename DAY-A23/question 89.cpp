//find first non-repeating character
#include<iostream>
#include<string>
using namespace std;
int main() {
    string text;
    cout<<"Enter the string : ";
    getline(cin,text);

    bool found=false;

    for(int i=0;i<text.length();i++){
        int count=0;

        for(int j=0;j<text.length();j++){
            if(text[i]==text[j]){
                count++;
            }
        }

        if(count==1){
            cout<<"First non-repeating character is "<<text[i];
            found=true;
            break;
        }
    }

    if(found==false){
        cout<<"No non-repeating character found";
    }

    return 0;
}
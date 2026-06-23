 //find maximum occurring character
#include<iostream>
#include<string>
using namespace std;
int main() {
    string text;
    cout<<"Enter the string : ";
    getline(cin,text);

    char ans;
    int maxCount=0;

    for(int i=0;i<text.length();i++){
        int count=0;

        for(int j=0;j<text.length();j++){
            if(text[i]==text[j]){
                count++;
            }
        }

        if(count>maxCount){
            maxCount=count;
            ans=text[i];
        }
    }

    cout<<"Maximum occurring character is "<<ans;

    return 0;
}
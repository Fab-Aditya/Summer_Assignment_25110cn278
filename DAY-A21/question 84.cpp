 // convert  lower case to upper case
#include<iostream>
using namespace std;
int main(){
    char text[100];
    cout<<"Enter the string: ";
    cin.getline(text,100);

    for(int i=0;text[i]!='\0';i++){
        if(text[i]>='a' && text[i]<='z'){
            text[i]=text[i]-32;
        }
    }

    cout<<"Uppercase string = "<<text;

    return 0;
}
 // WAP to reverse string 
#include<iostream>
using namespace std;
int main(){
    char text[100];
    cout<<"Enter the string: ";
    cin.getline(text,100);

    int length=0;

    while(text[length]!='\0'){
        length++;
    }

    for(int i=0,j=length-1;i<j;i++,j--){
        char temp=text[i];
        text[i]=text[j];
        text[j]=temp;
    }

    cout<<"Reversed string = "<<text;

    return 0;
}
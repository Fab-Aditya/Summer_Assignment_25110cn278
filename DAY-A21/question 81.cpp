// WAP to find string length without strlen ()
 #include<iostream>
using namespace std;
int main(){
    char text[100];
    int length=0;

    cout<<"Enter the string: ";
    cin.getline(text,100);

    while(text[length]!='\0'){
        length++;
    }

    cout<<"Length = "<<length;

    return 0;
}
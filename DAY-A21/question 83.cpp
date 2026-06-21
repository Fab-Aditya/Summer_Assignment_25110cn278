// counts vowel and consonent
#include<iostream>
using namespace std;
int main(){
    char text[100];
    int vowel=0, consonant=0;
    cout<<"Enter the string: ";
    cin.getline(text,100);

    for(int i=0;text[i]!='\0';i++){
        char ch=text[i];

        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                vowel++;
            }
            else{
                consonant++;
            }
        }
    }

    cout<<"Vowels = "<<vowel<<endl;
    cout<<"Consonants = "<<consonant;

    return 0;
}
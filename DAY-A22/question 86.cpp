//count words in a sentence
#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    int words=1;

    cout<<"Enter the sentence: ";
    getline(cin,line);

    for(int i=0;i<line.length();i++){
        if(line[i]==' '){
            words++;
        }
    }

    cout<<"Total words = "<<words;

    return 0;
}
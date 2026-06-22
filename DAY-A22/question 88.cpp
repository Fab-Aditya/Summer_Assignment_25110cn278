//remove space from string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string line,ans="";

    cout<<"Enter the string: ";
    getline(cin,line);

    for(int i=0;i<line.length();i++){
        if(line[i]!=' '){
            ans+=line[i];
        }
    }

    cout<<"String after removing spaces: "<<ans;

    return 0;
}
//print repeated character pattern
#include<iostream>
using namespace std;
int main(){
char ch=65;
int n;
cout<<"enter the number:";
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
         cout<<ch<<" ";
    }
    ch++;
    cout<<endl;
}

    return 0;
}
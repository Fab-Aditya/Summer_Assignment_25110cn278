//print charecter pyramid
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number:";
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";    
    }
   char ch=65;
    for(int j=1;j<i+1;j++){
        cout<<ch;
        ch++;
    }
    for(int j=i;j>=0;j--){
        cout<<ch;
        ch--;
    }
    cout<<endl;
}

    return 0;
}
//write function for perfect number
#include<iostream>
using namespace std;
int perfectNumber(int n){
    int perfect_number=n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum +=i;
              
        }
    }
        if(sum==perfect_number){
            cout<<"perfect number";
        }
            else{
                cout<<"not perfect number";
            } 
    
    return 0;
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<n<<" is ";
    perfectNumber(n);

    return 0;
}
// check symmetric matrix
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the order of matrix: ";
    cin>>n;

    int arr[10][10];

    cout<<"Enter the elements of matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int s=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                s=0;
            }
        }
    }

    if(s==1){
        cout<<"Symmetric Matrix";
    }
    else{
        cout<<"Not Symmetric Matrix";
    }

    return 0;
}
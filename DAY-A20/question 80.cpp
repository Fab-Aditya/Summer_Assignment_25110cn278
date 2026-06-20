// WAP to find column wise sum
#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of rows and columns: ";
    cin>>r>>c;

    int arr[10][10];

    cout<<"Enter the elements of matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Column wise sum:"<<endl;
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }

    return 0;
}
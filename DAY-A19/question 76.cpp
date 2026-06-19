 // wap to find diagonal sum
#include<iostream>
using namespace std;
int main() {
  
    int n, sum=0;

    cout<<"Enter size of matrix: ";
    cin>>n;

    int a[n][n];

    cout<<"Enter matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        sum+=a[i][i];
    }

    cout<<"Diagonal sum = "<<sum;

    return 0;
}
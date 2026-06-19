  // wap to add matrices
#include<iostream>
using namespace std;
int main() {
    int r, c;
    cout<<"Enter rows and columns: ";
    cin>>r>>c;

    int a[r][c], b[r][c], ans[r][c];

    cout<<"Enter first matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter second matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            ans[i][j]=a[i][j]+b[i][j];
        }
    }

    cout<<"Sum matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
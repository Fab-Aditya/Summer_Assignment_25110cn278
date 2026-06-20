 // multiply matrices
 #include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter the number of rows and columns of first matrix: ";
    cin>>r1>>c1;

    int a[10][10],b[10][10],ans[10][10];

    cout<<"Enter the elements of first matrix:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter the number of rows and columns of second matrix: ";
    cin>>r2>>c2;

    cout<<"Enter the elements of second matrix:"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            ans[i][j]=0;
            for(int k=0;k<c1;k++){
                ans[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    cout<<"Result matrix:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
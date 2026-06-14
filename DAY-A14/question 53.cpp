//linear search
#include<iostream>
using namespace std;
int main(){
int size,found;
int target;
cout<<"enter the size:";
cin>>size;
int arr[size];
cout<<"enter the numbers:";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
   cout<<"enter the target:";
cin>>target; 

for(int i=0;i<size;i++){
    if(target==arr[i]){
        cout<<"target index = "<<i<<endl;
        found=true;
    }    
}
if(found==false){
    cout<<"target no exist";
}

return 0;
}
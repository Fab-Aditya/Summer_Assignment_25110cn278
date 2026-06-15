//reverse array
#include<iostream>
#include<vector>
using namespace std;
int main(){
int size;
cout<<"enter the size:";
cin>>size;
vector<int>arr(size);
cout<<"enter the numbers:";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
int start=0,end=size-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

return 0;
}
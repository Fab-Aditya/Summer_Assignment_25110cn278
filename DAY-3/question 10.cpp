//check the prime number in a range
#include<iostream>
using namespace std;
int main(){
int n,i,start,end ;
cout<<"enter the number:";
cin>>start>> end;
for(n=start;n<=end;n++){
   int count=0;
for(i=2;i<n;i++){
if(n%i==0){
   count++;
}
}
if(count==0){
    cout<<"prime number:"<<n<<" "<<endl;
}
}
return 0;

}
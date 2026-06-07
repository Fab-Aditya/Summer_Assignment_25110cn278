//recursive factorial
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
      return 1;
    }
    return n=n*factorial(n-1);
   }
   int main(){
      int n;
      cout<<"enter the number:";
      cin>>n;
      cout<<"factorial of "<<n<<" is = "<<factorial(n);

      return 0;

   }
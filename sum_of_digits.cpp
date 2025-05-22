#include<iostream>
using namespace std;
int main(){
      int n,rem;
      int sum=0;
      cout<<"Enter a number: ";
      cin>>n;
      while(n>0){ 
      rem=n%10;
      sum=sum+rem;
      n=n/10;
      }
      cout<<"Sum of digits is: "<<sum<<endl;
      return 0;
}
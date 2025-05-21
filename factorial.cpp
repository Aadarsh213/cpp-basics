#include<iostream>
using namespace std;
int main(){
 int n;
 int fact = 1;
      cout<<"enter number : ";
      cin>>n;
      if(n==0 || n==1)
      cout<<"factotrial is 1";
      else{
            for(int i=1;i<=n;i++)
            {
                  fact = fact*i;
            }
            cout<<"factotrial is : "<<fact;
      }
}
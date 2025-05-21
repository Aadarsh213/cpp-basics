#include<iostream>
using namespace std;
int main(){
      int a,b,c;
      cout<<"enter 1st number:"<<endl;
      cin>>a;
      cout<<"enter 2nd number:"<<endl;
      cin>>b;     
      cout<<"enter 3rd number:"<<endl;   
      cin>>c;
      if(a>b && a>c)
          cout<<"max is;"<<a<<endl;
      else if(b>a && b>c)
            cout<<"max is :"<<b<<endl;
      else
            cout<<"max is :"<<c<<endl;

      return 0;

}
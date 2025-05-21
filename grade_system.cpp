#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"Enter Marks :";
cin>>marks;
if (marks>=90)
      cout<<"Excellent";
else if(marks>=75)
      cout<<"very good";
else if(marks>=40)
      cout<<"average";
else
      cout<<"fail";

}
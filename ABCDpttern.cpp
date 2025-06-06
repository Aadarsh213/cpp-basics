#include<iostream>
using namespace std;
int main(){
int m, n;
cout<<"Enter length of rectangle: ";
cin>>m;
cout<<"Enter breadth of rectangle: ";
cin>>n;
for(int i=1;i<=m; i++){
    for(int j=0; j<n; j++){
        cout<<(char)(65+j);
    }
      cout<<endl;
}

}
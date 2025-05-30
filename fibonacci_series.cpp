#include<iostream>
using namespace std;
int main(){
int n;
cout << "Enter the number of terms in the Fibonacci series: ";
cin >> n;
//set karenge a aur b ko
// in dono ko consecutively add karte rahnge
for(int i = 0, a = 0, b = 1; i < n; i++){
    cout << a << " ";
    int next = a + b; // next term is the sum of the previous two
    a = b;           // update a to the next term
    b = next;       // update b to the next term
}


}
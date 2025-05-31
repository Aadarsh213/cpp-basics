#include<iostream>
using namespace std;
int main(){
      int a,b;
      int min = (a<b)? a : b; // Find the minimum of a and b
      cout << "Enter two numbers: ";      
      cin >> a >> b;
      int gcd = 1; // Initialize gcd to 1
      for(int i = 1; i <= min; i++){
          if(a % i == 0 && b % i == 0){ // Check if i is a divisor of both a and b
              gcd = i; // Update gcd if i is a common divisor
          }
      }
      cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;
}
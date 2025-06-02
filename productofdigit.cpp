#include<iostream>
using namespace std;
int main(){
      int n;
      int product = 1;
      int ld;
      cout<< "Enter a number: ";
      cin>> n;
      while(n > 0){
            ld=n % 10;
            product *= ld;
            n /= 10;
      }
      cout << "Product of digits: " << product;
      return 0;

}
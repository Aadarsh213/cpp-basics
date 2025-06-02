#include<iostream>
using namespace std;
int main(){
      int num;
      cout << "Enter a number: ";
      cin >> num;
      int ld = 0; // Last digit
      int rev = 0; // Reverse of the number
      while(num > 0){
          ld = num % 10; // Get the last digit
          rev = rev * 10 + ld; // Build the reverse number
          num = num / 10; // Remove the last digit from the original number
      }
      cout << "Reversed number is: " << rev << endl; // Output the reversed number
      
          
}
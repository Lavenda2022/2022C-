//Write a program that reads in two real numbers
//and finds the square root of the difference between them.
//Use the fabs function from the cmath library
//to find the absolute value of the difference between the numbers
//(cannot square root a negative number).
//Format of a call to fabs:
//value = fabs(x); /* where value and x are floats */
//Test your program on a case where the difference is negative
//and a case where the difference is positive.

#include <iostream>
#include <cmath>
using namespace std;

float difference,num1,num2,square_root;

int main() {
  cout << "Enter two real numbers: ";
  cin >> num1 >> num2;
  difference = fabs(num1 - num2);
  square_root = sqrt(difference);
  cout << square_root << endl;
}

//Write a program that reads in a 4-digit integer and use a mix of the operators / and %,
// together with suitable powers of 10, to store and print out each digit in the number.
//The display should look something like this:
//Type in a 4-digit integer: 1682
//The first digit is 1
//The second digit is 6
//The third digit is 8
//The fourth digit is 2

#include <iostream>
using namespace std;

int number, a, b, c, d;

int main() {
  cout << "Type in a 4-digit integer: ";
  cin >> number;
  a = number / 1000;
  cout << "The first digit is " << a << endl;
  b = (number - a*1000) / 100;
  cout << "The second digit is " << b << endl;
  c = (number - a*1000 - b*100) / 10;
  cout << "The third digit is " << c << endl;
  d = number - a*1000 - b*100 - c*10;
  cout << "The fourth digit is " << d << endl;
}

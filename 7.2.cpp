// Write a function with the prototype int max(int a, int b, int c) which returns the
// largest of the three values.
// The values must be read inside main – do not read values inside the function.
#include <iostream>
using namespace std;

int max(int a, int b, int c);

int main() {
  int num1, num2, num3, maxi;
  cout << "Enter three integer numbers: ";
  cin >> num1 >> num2 >> num3;
  maxi = max(num1, num2, num3);
  cout << "The largest of three number is " << maxi << endl;
}

int max(int a, int b, int c){
  if ((a >= b) && (a >= c)){
    return a;
  }
  if ((b >= a) && (b >= c)){
    return b;
  }
  return c;
}

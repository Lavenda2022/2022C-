// Write a function called square, that has a real number argument.
// The function should return the square of the number,
// for example, if the function is called with 5.0 then main should display:
// The square of the number is 25.0
#include <iostream>
#include <iomanip>
using namespace std;

float square(float x);

int main() {
  float number,value;
  cout << "Enter a real number: ";
  cin >> number;
  value = square(number);
  cout << "The square of the number is ";
  cout << setprecision(1)<< fixed << value << endl;
}

float square(float x) {
  float y;
  y = x * x;
  return y;
}

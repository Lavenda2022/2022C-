/*Write a program that reads in three integers,
finds their reciprocals (eg integer 2 would be displayed as 1/2),
converts these fractions to decimals and adds them. An example would be:
Enter 3 integers: 2 5 10
Reciprocals: 1/2, 1/5, 1/10
Converting to decimals: 0.500000, 0.200000, 0.100000
Sum = 0.800000
*/

#include <iostream>
#include <iomanip>
using namespace std;

int a,b,c;
float sum,a1,b1,c1;

int main() {
  cout << "Enter three integers: ";
  cin >> a >> b >> c;
  a1 = 1.0 / a;
  b1 = 1.0 / b;
  c1 = 1.0 / c;
  cout << "Reciprocals: 1/" << a;
  cout << ", 1/" << b << ", 1/" << c << endl;
  cout << "Converting to decimals: ";
  cout << setprecision(6) << fixed << a1 << ",";
  cout << setprecision(6) << fixed << b1 << ",";
  cout << setprecision(6) << fixed << c1 << endl;
  sum = a1 + b1 + c1;
  cout << "Sum" << "=";
  cout << setprecision(6) << fixed << sum << endl;
}

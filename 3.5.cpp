/*. Write a program to print out the table below, with the exact spacing shown:
Number Square
03         9
06        36
09        81
12       144
*/
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
  cout << "Number Square" << endl;
  cout.width(11);
  cout << left << "03" << right << "9" << endl;
  cout.width(10);
  cout << left << "06" << right << "36" << endl;
  cout.width(10);
  cout << left << "09" << right << "81" << endl;
  cout.width(9);
  cout << left << "12" << right << "144" << endl;
}

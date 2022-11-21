/*Write a program that will print all the even numbers from 180 to 200 inclusive, one number per line.
Place a heading, "Even Numbers between 180 and 200" above the list,
and the sum of the numbers below the list. (Sum should be 2090.)*/
#include <iostream>
using namespace std;

int count,sum;

int main() {
  cout << "Even Numbers between 180 and 200" << endl;
  for (count = 180; count <= 200; count++) {
    if (count % 2 == 0) {
      cout << count << endl;
      sum = sum + count;
    }
  }
  cout << "The sum of numbers is " << sum << endl;
}

// Write a function that counts and returns the number of digits in a positive integer
// eg for the integers 43, 105 and 6, the return should be 2, 3 and 1 respectively.
#include <iostream>
using namespace std;

int re(int a);

int main(){
  int x=105;
  int y;
  y = re(x);
  cout << x << " has " << y << " digits";
}

int re(int a){
  int count = 0;
  while (a > 0){
    a = a / 10;
    count++;
  }
  return count;
}

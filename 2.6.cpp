// week2 #6
//Write a program that displays 3 different numbers in numerical order.

//Sample output:   The three numbers in order are 6, 25, 91.
//Test all possible starting orders of the three numbers.
#include <iostream>
using namespace std;

int a, b, c;

int main() {
  cout << "Enter three different integer: ";
  cin >> a >> b >> c;
  if ((a>b) && (a>c)) {
    if (b>c) {
      cout << "The three numbers in order are " << c <<","<< b <<","<<a<<".";
    }else {
      cout << "The three numbers in order are " << b <<"," << c <<","<< a<<".";
    }
  }
  if ((b>a) && (b>c)) {
    if (a>c) {
      cout <<  "The three numbers in order are " << c <<","<< a <<"," << b<<"." ;
    }else {
       cout << "The three numbers in order are " << a <<""<< c <<""<<b<<"." ;
    }
  }
  if ((c>a) && (c>b)) {
    if (a>b) {
      cout <<  "The three numbers in order are " << b <<","<< a <<"," << c <<".";
    }else {
      cout <<  "The three numbers in order are " << a <<","<< b <<","<< c <<".";
    }
  }
}

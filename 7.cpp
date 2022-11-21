//Write a program that reads in a year then prints out only one of the following:

//Divisible by 100 – new century.
//Divisible by 10 – new decade.
//Ordinary year.

#include <iostream>
using namespace std;

int year;

int main() {
  cout << "Enter a year: ";
  cin >> year;
  if (year % 100 == 0) {
    cout << "Divisible by 100 - new century\n";
  } else if (year % 10 == 0) {
    cout << "Divisible by 10 - new decade\n";
  } else {
    cout << "Ordinary year\n";
  }
}

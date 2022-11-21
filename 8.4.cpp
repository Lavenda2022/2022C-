// Write a function that has two letters of the alphabet passed to it
// and returns the difference between their ascii codes, which main must display.
// Test the program with several examples including 'A' and 'a'.
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int difference(char a, char b);

int main() {

  char letter1,letter2;

  cout << "Type in two letters of the alphabet: ";
  cin >> letter1 >> letter2;
  int d = difference(letter1, letter2);
  cout << letter1 << " and " << letter2 << " has " << d;
  cout << " difference in ascii codes." << endl;
}

int difference(char a, char b){
  int d = abs(a-b);
  return d;
}

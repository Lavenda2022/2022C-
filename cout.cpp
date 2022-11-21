// Write an efficient program to display the following.
// The challenge is to think about how to reduce the number of cout instructions by appropriate use of functions.
// Set up several functions and use each function several times (or as needed).
// What is the minimum number of cout instructions that are needed?
// on the first day of Christmas my true love gave to me a partridge in a pear tree.
// on the second day of Christmas my true love gave to me two turtle doves, and a partridge in a pear tree
// on the third day of Christmas my true love gave to me three French hens, two turtle doves,and a partridge in a pear tree.
// on the fourth day of Christmas my true love gave to me four calling birds,
//three French hens, two turtle doves, and a partridge in a pear tree.

#include <iostream>
using namespace std;

void partridge();
void turtle();
void hens();

int main() {
  cout << "on the first day of Christmas my true love gave to me\n";
  partridge();
  cout << "on the second day of Christmas my true love gave to me\n";
  turtle();
  cout << "on the third day of Christmas my true love gave to me\n";
  hens();
  cout << "on the fourth day of Christmas my true love gave to me\n";
  cout << "four calling birds\n";
  hens();
}

void partridge() {
  cout << "a partridge in a pear tree.\n\n";
}

void turtle() {
  cout << "two turtle doves,\nand ";
  partridge();
}

void hens() {
  cout << "three French hens,\n";
  turtle();
}

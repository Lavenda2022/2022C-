// Write a program that asks the user for three words, then display the lengths of the three words.
// Display the sum of these three lengths and the length of the three words concatenated (which should be identical).
#include<iostream>
#include<string>
using namespace std;

string s[5],c;
int length;

int main() {
  int n=3;
  int i;
  c = "";
  cout << "Enter three words: ";
  for(i=0; i<n; i++){
    cin >> s[i];
    cout << "The length for the word " << i;
    cout << " is " << s[i].length() << endl;
    c = c + s[i];
  }
  cout << "The legth of the three word concatenated is " << c.length() << endl;
}

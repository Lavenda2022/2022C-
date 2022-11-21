// Write a program that reads in a string and sets up a second string
// that is the first string with all vowels (upper or lower case) deleted.
// Example output:
// The quick brown fox jumped Over the lazy dog.
// Th qck brwn fx jmpd vr th lzy dg.
#include<iostream>
#include<string>
#include <regex>
using namespace std;

string remove(string s);

int main() {

  string text;

  cout << "Enter a string: ";
  getline(cin, text);

  cout << (remove(text));
}


string remove(string s){

  regex r("[aeiouAEIOU]");
  return regex_replace(s, r, "");
}

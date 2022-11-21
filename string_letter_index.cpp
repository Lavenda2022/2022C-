// Write a program that reads in a string and a letter, then prints the index of the second occurrence of the letter in the string.
//  Two examples of output:
// 2nd 't' in "computer science at Massey" at position 18.
// There are not two 'm's in "computer science at Massey."

#include<iostream>
#include<string>
using namespace std;

int find(string s, char c);

int main() {

  string s;
  char c;

  cout << "Enter a string: ";
  getline(cin, s);
  cout << "Enter a letter: ";
  cin >> c;
  int position = find (s,c);
  if(position == -1){
    cout << "There are not two " << "\'m\'s in \"" << s << ".\""<< endl;
  }else{
    cout << "2 end \'" << c << "\' in \"" << s << "\" at position " << position;
  }
}

int find(string s, char c){
  int count = 0;

  for(int i=0; i < s.length(); i++){
    if (s[i]==c){
      count++;
    }
    if (count == 2){
      return i;
    }
  }
  return -1;
}

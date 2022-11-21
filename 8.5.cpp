// A line of arithmetic is balanced if there is the correct number of parentheses in the line.
// Examples:  (3 + 5) * 2 is balanced.  (2 + 4 * 3 is not balanced.  1 + 6)) * 3 is not balanced.
// Write a program that reads in a line of arithmetic, as a string, and states whether it is balanced or not.
#include<iostream>
#include<string>
using namespace std;

int count(string c, char a);

int main() {
  string ari;
  int count1,count2;

  cout << "Enter a line of arithmetic: "<<endl;

  getline(cin, ari);

  count1 = count(ari, '(');
  count2 = count(ari, ')');

  if(count1 == count2){
    cout << "The line of arithmetic you typed is balanced." << endl;
  }else{
    cout << "The line of arithmetic you typed is not balanced." << endl;
  }
}

int count(string c, char a){
  int i,count,t;
  t = c.length();
  count = 0;
  for(i = 0; i < t; i++){
    if(c[i]== a){
      count++;
    }
  }
  return count;
}

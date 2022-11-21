//Write a function  bool lowercase(char c);
//that returns true if a character is a lowercase letter (‘a’ to ‘z’) and false if it isn’t.
//Test your function in a main that repeatedly reads characters until the user enters #.

#include <iostream>
#include <string>
using namespace std;

bool lowercase(char c);

int main() {

  char letter;

  cout << "Enter a characters to check(stop with #): ";
  cin >> letter;

  while (letter != '#'){
    if(lowercase (letter) == true){
      cout << letter << " is a lowercase character." << endl;
    }else{
      cout << letter << " is not a lowercase character." << endl;
    }
    cin >> letter;
  }
}

bool lowercase(char c){
  if((c>='a') && (c <= 'z')){
    return true;
  }
  return false;
}

// Write a program that checks if a character is a lowercase letter, an uppercase letter, or some other character.
// Use your function from question 2 and create a function for uppercase.
// The program should repeat as long as the user reads any character other than Q, which should stop the program.
// The display should look something like this:
// Enter a character: &
// & is not a letter.
// Enter another character or Q to quit: ?
// Enter a character: d
// d is a lowercase letter.
// Enter another character or Q to quit: Q

#include<iostream>
#include<string>
using namespace std;

bool lowercase(char c);
bool uppercase(char c);

int main() {
  char letter;
  cout << "Enter a character: ";
  letter = getchar();
  getchar();

  while ((letter != 'Q') || (letter != 'q')){
    if (lowercase(letter) == true){
      cout << letter << " is a lowercase character."<< endl;
    }
    else if(uppercase(letter) == true){
      cout << letter << " is a uppercase character." << endl;
    }
    else{
      cout << letter << " is not a letter."<< endl;
    }
    cout << "Enter another character or Q to quit: " << endl;
    letter = getchar();
    getchar();
  }
}


bool lowercase(char c){
  if((c>='a') && (c <= 'z')){
    return true;
  }
  return false;
}

bool uppercase(char c){
  if((c>='A') && (c <= 'Z')){
    return true;
  }
  return false;
}

// Write a program that reads in a line of text and prints out how many characters and how many words are in the text.
// (Characters include punctuation and spaces between words.)
#include<iostream>
#include<string>
using namespace std;

bool is_letter(char c);
int word(string c);

int main(){
  string text;

  cout << "Enter a line of text: ";
  getline(cin, text);

  int countchar = text.length();
  int countword = word(text);

  cout << "The line of " << text << " includes " << countchar << " characters ";
  cout << " and " << countword << " words " << endl;

}

int word(string c){

  bool previous_char_was_letter = false;
  int count = 0;

  for(int i = 0;i < c.length(); i++){

    bool this_char_is_letter=is_letter(c[i]);

    if((previous_char_was_letter==false)&&(this_char_is_letter==true)){
      count++;
    }
    previous_char_was_letter = this_char_is_letter;
  }
  return count;
}

bool is_letter(char c){
  if((c>='a'&& c<='z')||(c>='A'&& c<='Z')||c=='\''){
    return true;
  }
  return false;
}

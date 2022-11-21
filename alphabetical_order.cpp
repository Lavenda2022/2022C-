// Write a program that asks the user for three words and prints out the words in alphabetical order,
// then the words concatenated in alphabetical order (stored in a fourth string).

#include<iostream>
#include<string>
using namespace std;

string s[5];
int i;
void sortnames(int a);

int main() {
  cout << "Enter three words: ";
  for(i=0;i<3;i++){
    cin >> s[i];
  }
  sortnames(3);
  cout << "\nHere is the list in alphabetical order\n";
  for (i = 0; i < 4; i++) {
    cout << s[i] << endl;
  }
  s[3] = s[0]+s[1]+s[2];
  cout << s[3] << endl;

}

void sortnames(int a) {
  int pass, i;
  string temp;
  for (pass = 0; pass < a; pass++) {
    for (i = 0; i < a - 1; i++) {
      if (s[i] > s[i+1]) {
        temp = s[i];
        s[i] = s[i+1];
        s[i+1] = temp;
      }
    }
  }
}

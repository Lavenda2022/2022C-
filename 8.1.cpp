// Write a program that reads in a character,
//encrypts it as a real number (see how in next sentence) and then stores the encrypted value in an array (max of 100).
// To encrypt a character, subtract the position/ index it will be stored at in the array, then divide by 2.
//The program should do this repeatedly until * is entered and it should print out the array values.
//Example of the display:
// Enter several characters (end input with *):
// A
// c
// e
// *
// 32.5 49 49.5
#include<iostream>
#include <cstdio>
using namespace std;

char letter;
float array[100];
int i,count;

int main() {

  cout << "Enter several characters (end input with *): " << endl;

  cin >> letter;

  i = 0;

  while (letter != '*'){

      array[i]= (letter - i) / 2.0;

      i++;

      cin >> letter;

  }

  count = i;

  for (i=0; i < count; i++){

    cout << array[i] << " ";
  }

}

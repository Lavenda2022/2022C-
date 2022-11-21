// Write a program that reads in a positive integer up to nine digits long,
// and sets up an array to store a count of the number of times each of the digits 0 - 9 appears in the number.
// Store the number of times 0 appears, in position 0 in your array, the number of times 1 appears,
// in position 1 of your array and so on.
// Display the results in the format:
// 0 occurs 2 times
// 1 occurs 0 times
// :
// 9 occurs 1 times

#include <iostream>
using namespace std;

int number,i;
int total[10];

int main() {
  //initialise the ttoal array element to 0
  for(i = 0; i < 10; i++){
    total[i] = 0;
  }
  
  //read in valid number
  cout << "Enter a positive integer (up to nine digits): ";
  cin >> number;
  if (number > 999999999){
    cout << "ERROR: number must not be more than 9 digits\n";
    exit(2);
  }

  //count the appears time of each digit
  while(number > 0){
    i = number % 10;
    total[i]++;
    number = number / 10;
  }

  //display the result
  for(i=0;i < 10; i++){
    cout << i << " occurs " << total[i] << " times" << endl;
  }
}

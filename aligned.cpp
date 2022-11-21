/*Write a program that reads in a 4-digit number and reads in
whether it is to be printed out right(0) or left(1) aligned.
If right aligned, read in whether there are to be leading zeroes(0) or not(1).
The program should then print out the number in 6 positions on the screen,
in the way the user selected.*/
#include <iostream>
#include <iomanip>
using namespace std;

int number,aligned,zeroes;

int main() {
    cout << "Enter a four digit number: ";
    cin >> number;
    cout << "Enter 0 printed out right or enter 1 printed out left:";
    cin >> aligned;
    if(aligned == 0) {
      cout << "Enter 0 to be leading zeroes or enter 1 to be not:";
      cin >> zeroes;
      if (zeroes == 0){
        cout << "The number is ";
        cout.fill('0');
        cout.width(6);
        cout << right << number << endl;
      }
      }else {
        cout << "The number is ";
        cout.fill('0');
        cout.width(6);
        cout << left << number << endl;
    }
}

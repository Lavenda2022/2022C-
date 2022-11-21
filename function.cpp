// Write a function that has an integer passed to it and displays a line containing that number of asterisks on one line.
// For example, if main passes 4 to the function, the output will be:          ****

#include<iostream>
using namespace std;

void display(int a);

int main() {
  int num;
  cout << "Enter an integer: "<< endl;
  cin >> num;
  cout << "The output will be: ";
  display(num);
  cout << endl;
}

void display (int a){
  int i;
  for (i = 1; i <= a; i++){
    cout << "*";
  }
}

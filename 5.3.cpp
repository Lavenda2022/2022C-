// Write a program that reads in two arrays each with 4 integer elements,
// then adds them to form the
// Corresponding elements of a third array.
// The program must display the results in this form:
// Index 0: 4 + 15 = 19
// Index 1: 67 + 3 = 70     etc

#include <iostream>
using namespace std;

int i;
int array1[4], array2[4], array3[4];

int main() {
  cout << "Enter 4 intergers for array1: ";
  for(i = 0; i < 4; i++){
    cin >> array1[i];
  }

  cout << "Enter 4 intergers for array2: ";
  for(i = 0; i < 4; i++){
    cin >> array2[i];
  }

  for(i = 0; i < 4; i++){
    array3[i] = array1[i] + array2[i];
    cout << "Index " << i << ": ";
    cout << array1[i] << " + " << array2[i] <<" = " << array3[i] << endl;
  }
}

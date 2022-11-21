// Write a program that reads 7 real numbers into an array,
// sorts them into descending order, then displays the sorted numbers.
// What case would test the program most fully?
#include <iostream>
using namespace std;

int i,pass;
float array[7],temp;

int main() {
  for (i = 0; i < 7; i++){
    cout << "Enter seven numbers: ";
    cin >> array[i];
  }

  for (pass = 0; pass < 7; pass++){
    for (i = 0; i <6; i++){
      if (array[i] < array[i+1]){
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
      }
    }
  }

  cout << "The sorted array is ";
  for(i=0; i<7; i++){
    cout << array[i] << ",";
  }
  cout << endl;
}

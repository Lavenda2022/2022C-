// Write a program that reads in an array of 6 real numbers,
// deletes the value at index 2 and displays the changed contents of the array,
// then inserts 6.75 at index 1 and displays the contents again.
#include<iostream>
using namespace std;

void display(float a[], int n);

float array[100];
int i,num;

int main() {
  num = 6;
  for (i = 0; i < num; i++) {
    cout << "Enter the number " << i+1 << ": ";
    cin >> array[i];
  }

  for(i=2; i<num; i++){
    array[i] = array[i+1];
  }
  num = num -1;
  display(array,num);


  for(i= num +1; i>=2; i--){
    array[i] = array[i-1];
  }
  array[1] = 6.75;
  num = num + 1;
  display(array,num);
}

void display(float a[], int n){
  int i;
  for (i=0; i<n; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}

// Write a function that reads 5 real numbers from 0.0 to 100.0 into an array,
// checking that input is valid,
// and displaying any values between 50.0 and 60.0 to 2 decimal places.
#include<iostream>
#include<iomanip>
using namespace std;

void display();
float num[5];

int main() {
  int i;
  float temp;
  for(i=0;i<5;i++){
    cout << "Please enter into 5 real number from 0.0 to 100.0: ";
    cin >> temp;
    while ((temp < 0.0)||(temp > 100.0)){
      cout << "ERROR: the real number must be from 0.0 to 100.0: " << endl;
      cout << "Please enter into 5 real number from 0.0 to 100.0: " << endl;
      cin >> temp;
    }
    num[i] = temp;
  }
  display();
}

void display() {
  int i;
  cout << "The values between 50.0 and 60.0 are: ";
  for(i=0;i<5;i++){
    if((num[i] > 50.0) && (num[i] < 60.0)){
      cout << setprecision(2) << fixed << num[i] << endl;
    }
  }
}

/*Write a program that uses a for loop to display a conversion table for temperatures.
The formula is
Fahrenheit = Celsius * 1.8 + 32.
Your program should display a table that looks like this:
Conversion from degrees Celsius to Fahrenheit
Celsius        Fahrenheit
   0              32.0
   5              41.0
  10              50.0
You can decide how far your table will go.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int Celsius;
float Fahrenheit;

int main() {
  cout << "Conversion from degrees Celsius to Fahrenheit" << endl;
  cout << "Celsius        Fahrenheit" << endl;
  for (Celsius = 0; Celsius <= 60; Celsius = Celsius +5){
    Fahrenheit = Celsius * 1.8 + 32;
    cout.width(4);
    cout << right << Celsius;
    cout.width(18);
    cout << setprecision(1) << fixed << Fahrenheit << endl;
  }
}

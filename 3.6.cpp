/*Write a program that reads in a country (1 for NZ, 0 for the USA),
then reads in a real number temperature
and converts it to the equivalent temperature in the other country, to 2 decimal places.
New Zealand uses degrees Celsius and the USA uses degrees Fahrenheit.

The conversion formula is:
Fahrenheit = Celsius * 1.8 + 32    Note: 0°C = 32°F      and     100°C = 212°F
*/

#include <iostream>
#include <iomanip>
using namespace std;

int country;
float teperature1,teperature2;

int main() {
  cout << "Enter 1 for NZ or enter 0 for USA: ";
  cin >> country;
  cout << "Enter a real number temperature: ";
  cin >> teperature1;
  if (country == 1){
    teperature2 = teperature1 * 1.8 + 32;
    cout << "The temperature in NZ is ";
    cout << setprecision(2) << teperature2 << "°F" <<endl;
  }else {
    teperature2 = (teperature1 - 32) / 18;
    cout << "The temperature in USA is ";
    cout << setprecision(2) << teperature2 << "°C" <<endl;
  }
}

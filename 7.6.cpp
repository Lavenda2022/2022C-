// Write a program that reads in lengths for the two shorter sides,
// x and y, of a right-angled triangle,
// then calls a function called hypotenuse
// that calculates and returns the length of the third side, h,  according to Pythagoras’ formula:
// 	        ______
// 	h = √ x2 + y2
// Your program should include the square function from Q1, with hypotenuse calling square.
#include<iostream>
#include<cmath>
using namespace std;

float hypotenuse(float a, float b);
float square(float c);

int main() {
  float x,y,h;
  cout << "Enter two shorter sides of this triangle: "<<endl;
  cin >> x >> y;
  h = hypotenuse(x,y);
  cout << "The length of the third side is " << h << endl;
}

float hypotenuse(float a, float b){
  float i = square(a);
  float j = square(b);
  return sqrt(i+j);
}

float square(float c) {
  return c*c;
}

// A prime number is an integer greater than one that is only divisible by itself and 1.
// Write a function is_prime,
// that returns true if the parameter is a prime number and false if it is not.

#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int a);

int main() {
  int a = is_prime(17);
  cout << a << endl;
}


bool is_prime(int a){
    for (int i = 2; i < sqrt(a); i++){
        if (a % i == 0){
            return false;
        }
    }
    return true;
}

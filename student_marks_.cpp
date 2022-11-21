/*Each student in a class has received a test mark out of 30.
Write a program that first reads in the number of students in the class
and then reads in the test mark for each student and calculates the average mark for the test.
Check that each mark is a valid mark from 0 to 30.
The test marks are integers but the average
should be a real number displayed to one decimal place.
Your program should look something like this
when it runs:
Number of students in the class: 14
Enter the mark for student 1: 27
Enter the mark for student 2: 11
etc…
Average: 18.7
*/

#include <iostream>
#include <iomanip>
using namespace std;

int numbers, mark, count;
float average,total;

int main() {
  cout << "Number of students in the class: ";
  cin >> numbers;
  total = 0.0;
  for (count=1;count<=numbers;count++){
    cout << "Enter the mark for student " << count << ": ";
    cin >> mark;
    while ((mark<0) || (mark > 30)){
      cout << "ERRO: mark must be from 0 to 30." << endl;
      cout << "Enter the mark for student " << count << ": ";
      cin >> mark;
    }
    total = total + mark;
  }
  average = total / count;
  cout << "Average: ";
  cout << setprecision(1) << fixed << average << endl;
}

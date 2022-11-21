// There are 7 students in a class.
// Write a program that reads the student ID number and a test mark for each student.
// Find the average test mark for the class.
// Set up two new corresponding arrays that store the ID numbers and marks of only those students
// who scored higher than the average mark.
// Display the ID numbers and marks of students who scored above average, with ID numbers in ascending order.
// What would you have to change if the data had to be printed out in ascending mark order?

#include <iostream>
using namespace std;

int id[100], mark[100];
int average, i, totalmark, num, pass, temp;

int main() {

  //read in student ID and mark
  totalmark = 0;
  num = 7;
  for(i=0; i<num; i++){
    cout << "Enter the 7 student ID: ";
    cin >> id[i];
    cout << "End the mark for student" << id[i] << ":";
    cin >> mark[i];
    totalmark = totalmark + mark[i];
  }
  average = totalmark / 7;

  //sorting the ID array
  for(pass=0; pass < num; pass++){
    for(i=0; i < num-1; i++){
      if(id[i] > id[i+1]){
        temp = id[i];
        id[i] =id[i+1];
        id[i+1] = temp;
        temp = mark[i];
        mark[i] = mark[i+1];
        mark[i+1] = temp;
      }
    }
  }
  //display the result
  cout << "Students with marks above average\n";
  for (i = 0; i < num; i++) {
    if (mark[i] > average) {
      cout << "Student " << id[i];
      cout << " has a mark of " << mark[i] << endl;
    }
  }
}

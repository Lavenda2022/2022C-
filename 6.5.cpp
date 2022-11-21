// Write a program that reads in an array of student IDs in ascending order,
// then reads in 0 for Delete, 1 for Insert or 2 for Quit and carries out the appropriate action.
// It must repeatedly read in a choice and carry out an action until 2 is entered.
//  Display the array after each action. The screen should look like:
// Type in student ID numbers in ascending order: 276 481 517 682 994 -1
// Enter an integer to Delete(0) Insert(1) or Quit(2): 1
// Enter a new ID number to insert: 503
// 276   481   503   517   682   994
// Enter an integer to Delete(0) Insert(1) or Quit(2): 0
// Enter the ID number to delete: 481
// 276   503   517   682   994
// Enter an integer to Delete(0) Insert(1) or Quit(2): 2
// End of Program
#include <iostream>
using namespace std;

void iddelete();
void idinsert();

int id[300];
int num;

int main() {
  int i, temp, integer;
  i = 0;
  cout << "Type in student ID numbers in ascending order: ";
  cin >> temp;
  while (temp > 0){
    id[i] = temp;
    i++;
    cin >> temp;
  }
  num = i;

  cout << "Enter an integer to Delete(0) Insert(1) or Quit(2): ";
  cin >> integer;
  while(integer != 2){
    if (integer == 0){
      iddelete();
    }
    if (integer == 1){
      idinsert();
    }
    for (i = 0; i < num; i++) {
      cout << id[i] << "   ";
    }
    cout << "\nEnter an integer to Delete(0) Insert(1) or Quit(2): ";
    cin >> integer;
  }
  cout << "End of Program." << endl;
}

void iddelete(){
  int i, posi,temp;
  cout << "Enter the ID number to delete: ";
  cin >> temp;
  posi = -1;
  for (i=0; i < num; i++){
    if (id[i] == temp){
      posi = i;
    }
  }
  if(posi > 0){
    for (i = posi; i < num; i ++){
      id[i] = id[i+1];
    }
    num = num -1;
  }
}

void idinsert() {
  int i, posn, newid;
  cout << "Enter a new ID number to insert: ";
  cin >> newid;
  i = 0;
  while (newid > id[i]) {
    i++;
    if (i == num) {
      break;
    }
  }
  posn = i;  // posn holds the index where the new ID will be inserted
  for (i = num; i > posn; i--) {
    id[i] = id[i - 1];
  }
  id[posn] = newid;
  num++;
}

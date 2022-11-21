// Write a function with 3 real numbers passed to it,
// that checks if the last value lies between the first two,
// returning true if it does and false if it doesn’t.
// For example, for arguments 4.6, 8.3 and 5.25, it should return true,
// for 4.6, 8.3 and 10.0 it should return false and for 7.7, 3.5 and 4.9 it should return true.
// (If the case of three identical numbers bothers you, it should return true.)
// Sample output:
// 5.25 lies between 4.60 and 8.30
// 10.00 does not lie between 4.60 and 8.30
// 4.90 lies between 7.70 and 3.50

bool function (float a, float b, float c){
  if((c>=a)&&(c<=b)){
    return true;
  }
  if ((c>=b)&&(c<=a)){
    return true;
  }
  return false;
}

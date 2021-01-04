// Version 2: Better specification

#include <limits.h>

/*@ requires x > INT_MIN;

    behavior positive:
    assumes x > 0;
    ensures \result == \old(x);
    
    behavior negative:
    assumes x < 0;
    ensures \result == \old(-x);
*/

int abs(int x) {
  if (x < 0)
	return -x;
  else
	return x;
}  

int main() {

abs(10);
abs(-20);
return 0;
}

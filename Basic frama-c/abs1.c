

#include <limits.h>

/*@ requires x > 0 || x < 0;
  @ ensures x >= 0 ==> \result == x;
  @ ensures x < 0 ==> \result == -x;
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

#include <stdio.h>

/*@
  requires  n >= 1;
  ensures   \result == n*(n+1)/2;
  assigns   \nothing ; 
                       
*/

int sum(int n) {

  int s = 0;
  int i = 1;
  /*@
    loop invariant s == i*(i-1)/2 &&
    		   1 <= i <= n+1;
    loop assigns i, s;
  */
  while (i<=n) {
    s = s + i;
    i = i + 1;
  }
  return s;
}


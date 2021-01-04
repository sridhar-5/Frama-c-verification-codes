#include <limits.h>
/*@
  requires  n>=0;
  requires s<INT_MAX && s>INT_MIN && k<INT_MAX && k>INT_MIN;
  ensures   \result == n*(n+1)/2;
  assigns   \nothing;
*/
int sum(int n) {
  int s = 0;
  int k;
  k = 1;
  /*@
    loop invariant s == k*(k-1)/2;
    loop assigns k,s;
  */
  while (k != n+1){
    s = s + k;
    k = k + 1;
  }
  return s;
}
int main()
{
  sum(5);
  
}

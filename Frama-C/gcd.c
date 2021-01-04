#include <stdio.h>
/*@
  axiomatic GCD {
  logic integer Gcd(integer p, integer q);

  axiom Gcd1:
    \forall integer m, n;
    m > n ==> Gcd(m,n) == Gcd(m-n, n);
  axiom Gcd2:
    \forall integer m, n;
    n > m ==> Gcd(m,n) == Gcd(m, n-m);
  axiom Gcd3:
    \forall integer m, n;
    m == n ==> Gcd(m,n) == m;
  }
*/
/*@
  requires  p >= 1;
  requires  p >= 1;
  ensures   \result == Gcd(\old(p), \old(q));
  assigns   \nothing; 
*/

int gcd(int p, int q) {

/*@ loop invariant Gcd(p,q) == 
	           Gcd(\at(p,Pre), \at(q,Pre));
    loop assigns p, q;
*/

while (p != q) {
  if (p > q) 
	p = p - q;
  if (q > p) 
	q = q - p;
}

return p;
}


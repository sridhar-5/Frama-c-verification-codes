#include <stdio.h>

/*@
 axiomatic Factorial {
 logic integer fact(integer m);
 axiom case_m:
 \forall integer m;
 m >= 1 ==> fact(m) == m*fact(m-1);
 axiom case_m0:
 fact(0) == 1;
 }
*/
/*@
 requires m >= 0;
 ensures \result == fact(m);
 assigns \nothing ;
*/
int factorial(int m) {
 int i = 1;
 int f = 1;
 /*@
 loop invariant f == fact(i-1);
 loop invariant 0 < i;
 loop invariant i <= m+1;
 loop assigns i, f; // other variables are invariant
 */
 while (i <= m) {
 f = f * i;
 i = i + 1;
 }
 return f;
}

/*@
 axiomatic Power {
 logic integer powr(integer n);
 axiom case_n:
 \forall integer n;
 n >= 1 ==> (powr(n) == 2*powr(n-1));
 axiom case_n0:
 powr(0) == 1;
 }
*/
/*@
 requires n >= 0;
 ensures \result == powr(n);
 assigns \nothing ;
*/

int power(int n) {
 int i = 1;
 int p = 1;

 /*@
 loop invariant p == powr(i-1);
 loop invariant i > 0;
 loop invariant i <= n+1;
 loop assigns i, p;
 */

 while (i <= n) {
 p = 2*p;
 i++;
 }
 return p;
}

/*@
 requires n > 0;
 ensures \result == powr(n/2)*fact(n/2);
*/
int pdt(int n) {
 int prod = 1;
 int i = 4;
 /*@
 loop invariant prod == powr(i/2)*fact(i/2);
 loop invariant i >= 2;
 loop invariant i<=n;
 loop assigns i, prod;
 */
 while(i < n) {
 prod = prod*i;
 i = i+2;
 }
 return prod;
}

int main() {
 int result = pdt(10);
}

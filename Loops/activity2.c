#include <stdio.h>
/*@
 requires n>0;
 ensures 3*\result == (n-4);
 assigns \nothing;
*/
int fun(int n) {
 int i = 7;
 int x = 1;
 /*@
 loop invariant  ;
 loop assigns x, i;
 */
 while(i <= n) {
 x += 1;
 i += 3;
 }
 return x;
}

int main() {
 int ret = fun(20);
 return 0;
}

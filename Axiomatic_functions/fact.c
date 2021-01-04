/*@
 requires n >= 0;
 ensures \result == \fact(n);
 assigns \nothing;
*/

int factorial(int n)
{
	 int i = 1;

    int f = 1;

     /*@
		 loop invariant f==\fact(i-1);
		 loop assigns f,i;
		 */

     while (i<=n) {

           f = f * i;

           i = i + 1;

     }

   return f;
}

int main(void) {
  int n = 5;
  int ret = factorial(n);
  return 0;
}

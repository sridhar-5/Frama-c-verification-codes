/*@
 requires m > 0 && n > 0;
 requires n > m;
 ensures \result == (n*(n+1)/2) - (m*(m+1)/2);
*/

int test(int m,int n)
{
 int z= 0;
 int k= m;
 /*@
  loop invariant z==k*(k-1)/2 - (m*(m-1))/2 && k<n+1 && k>0;
  loop assigns z,k;
  */
 while (k <= n) {
 z= z + k;
 k= k + 1;
 }
 /*@ assert z == 45; */
 return z;
}

int main()
{
 int num = test(5,10);
}

/*@ 

requires n > 0;
requires \valid_read(a + (0..n-1));

requires \forall integer k;  0 <= k < n ==> a[k] == k;

ensures \forall integer k;  0 <= k < n ==> 
				\old(a)[k] % 2 == 0 ==> a[k] == 0;
ensures \forall integer k;  0 <= k < n ==> 
				\old(a)[k] % 2 != 0 ==> a[k] == k;
*/

void arrayreplace(int* a, int n) {

  /*@ 
     	loop invariant 0 <= p <= n;

	loop invariant \forall integer k;  0 <= k < p ==> 
				\at(a,Pre)[k] % 2 == 0 ==> a[k] == 0;

	loop invariant \forall integer k;  0 <= k < p ==> 
				\at(a,Pre)[k] % 2 != 0 ==> a[k] == k;

        loop invariant \forall integer k;  p <= k <= n-1 ==> a[k] == k;

     	loop assigns p, a[0..n-1];
 */

  for (int p = 0; p < n; p++) {
	  if (a[p] % 2 == 0) 
		a[p] = 0;
  }

}  


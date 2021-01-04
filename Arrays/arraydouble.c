/*@ 
requires n > 0;

requires \valid_read(a + (0..n-1));

requires \forall integer k;  0 <= k < n ==> a[k] == a[k];

ensures  \forall integer k;  0 <= k < n ==> a[k] == 2*a[k];
*/

void arraydouble(int* a, int n) {

  /*@ 
     loop invariant 0 <= p <= n;
     loop invariant \forall integer k;  0 <= k < p ==> a[k] == 2*a[k];
     loop invariant \forall integer k;  p <= k < n ==> a[k] == a[k];
     loop assigns p, a[0..n-1];
 */

  for (int p = 0; p < n; p++) {
	  a[p] = a[p] * 2; 
  }
}  

int main(){
int a[] = {1,2,3,4,5};
arraydouble(a,5);
return 0;
}


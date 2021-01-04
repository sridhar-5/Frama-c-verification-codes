// #include <stdio.h>
 
/*@ requires \valid(a+(0..n-1));
    requires n > 1;
    ensures \forall integer k; 0<= k <=\result-1   ==> a[k] <= pivot;
    ensures \forall integer k; \result+1 <= k<= n-1 ==> a[k] > pivot;

*/
 
int partition(int *a, int n, int pivot) {

    int low, high, temp;
    low = 0;
    high = n-1;

    /*@ 
        loop invariant 0 <= low <= high <= n-1; 
        loop invariant \forall integer k; 0<=k<=low-1 ==> a[k] <= pivot;
	loop invariant \forall integer k; high+1<=k<=n-1 ==> a[k] > pivot;
	loop assigns low, high, temp, a[0..n-1];
        loop variant high-low;
    */
    while (low < high) {     

    // the code below ensures that both inner loops
    // will not break without changing low/high
    if (a[low] > pivot && a[high] <= pivot) {
	temp = a[low];
	a[low] = a[high];
	a[high] = temp;
    }

    /*@  
        loop invariant 0 <= low <= high <= n-1;
        loop invariant \forall integer k; 0<=k<=low-1 ==> a[k]<=pivot;
	loop invariant \forall integer k; high+1<=k<=n-1 ==> a[k]>pivot;
        loop assigns low;
        loop variant high-low;
     */

	while (low < high) {
            if (a[low] > pivot)
            	  break;
            low = low + 1;
        }

    /*@  
        loop invariant 0 <= low <= high <= n-1;
        loop invariant \forall integer k; 0<=k<=low-1 ==> a[k] <= pivot;
	loop invariant \forall integer k; high+1<=k<=n-1 ==> a[k] > pivot;
        loop assigns high;
        loop variant high-low;
     */

	while (low < high) {
            if (a[high] <= pivot)
            	  break;
            high = high - 1;
        }

        temp = a[low];
	a[low] = a[high];
	a[high] = temp;
     
    }
    return high;
}


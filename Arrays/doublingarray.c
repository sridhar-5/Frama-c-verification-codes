#include <stdio.h>
#include <stdlib.h>

/*@
    requires n >= 0;
    requires \valid_read(a+(0..n-1));
    ensures \forall integer k; 0 <= k < n ==> a[k] == \old(a[k]) * 2;
    assigns a[0..n-1];
*/
void doublear(int *a,int n){
    int i;
    i = 0;
    /*@
        loop invariant \forall integer k; 0 <= k < i ==> a[k] == \at(a[k],Pre)*2;
        loop invariant \forall integer k; i <= k < n ==> a[k] == \at(a[k],Pre);
        loop invariant 0 <= i <= n;
        loop assigns i,a[0..n-1];
    */
    while(i < n){
        a[i] = 2 * a[i];
        i = i + 1;
    }
}
int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    doublear(a,n);
    return 0;
}
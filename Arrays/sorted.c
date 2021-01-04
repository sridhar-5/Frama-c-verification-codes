#include <stdio.h>
#include <stdlib.h>

/*@
   requires n > 0;
   requires \valid_read(a+(0..n-1));
   
   behavior if_less:
   assumes \forall integer k; 0 <= k < n ==> a[k] < a[k+1];
   ensures \result == 1;

   behavior if_greater:
   assumes \exists integer k; 0 <= k < n && a[k] > a[k+1];
   ensures \result == 0; 
*/

int ifsorted(int *a,int n){
    int i;
    i = 0;
    /*@
       loop invariant 0 <= i < n;
       loop invariant \forall integer k; 0 <= k < i ==> a[k] < a[k+1];
       loop assigns i;
    */
    while(i < n){
        if(a[i] > a[i+1]){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(void){
    int a[] = {1,2,3,4,5};
    int n = 5;
    ifsorted(a,n);
    return 0;
}
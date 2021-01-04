#include <stdio.h>
#include <stdlib.h>

/*@
 requires n>=0;
 requires \valid_read(a + (0..n-1));
 assigns \nothing;

 behavior sorted:
 assumes \forall integer k; 0 <= k < n && a[k]< a[k+1];
 ensures \result==1;

 behavior not_sorted:
 assumes \forall integer k; 0 <= k < n && a[k]>a[k+1];
 ensures \result==0;
 
*/
int arraySorted(int a[], int n){
 int i ;
 i=0;
 
 while (i < n-1){

/*@
  loop invariant \forall integer k; 0<=k<=i ==> a[k]<a[k+1];
  loop invariant 0 <= i <= n;
  loop assigns i;
*/


    if(a[i] > a[i+1]){
        return 0;
    }
    i = i + 1;
    
    return 1;
}
}
int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    arraySorted(a,n);
    return 0;
}        

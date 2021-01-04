#include <stdio.h>
#include <math.h>



/*@
   requires n >= 0;
   ensures \result == n/2*(2*a + (n-1)*d);
   assigns \nothing;
*/



int algo(int d,int n,int a)
{
    int sum = 0;
    int i = 0;
    /*@
       loop invariant sum == i/2*(2*a + (i-1)*d);
       loop assigns sum,i;
    */
    while (i <= n)
    {
         sum = sum + i;
         i = i + d;
    }
    return sum;

}



int main()
{
    int sum = algo(1,4,1);
    // asserts sum == 10;
}

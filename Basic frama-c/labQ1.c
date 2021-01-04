#include<limits.h>

/*@
 requires \valid(q) && \valid(r);
 requires y!=0;
 requires x>=INT_MIN && y>=INT_MIN;
 requires x<=INT_MAX && y<=INT_MAX;
 ensures *q == x/y && *r==x%y;
*/

void div_rem(unsigned x, unsigned y, unsigned* q, unsigned* r){
*q = x / y ;
*r = x % y ;
}

int main()
{
   int x=13,y=14;
   int* q,r;
   div_rem(x,y,&q,&r);
}

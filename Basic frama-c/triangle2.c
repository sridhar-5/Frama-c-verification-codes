#include<limits.h>

/*@ requires x >= 0;
 requires y>= 0;
 requires z>= 0;
 requires x<=INT_MAX && y<=INT_MAX && z<=INT_MAX;
 requires x+y<=INT_MAX && y+z<=INT_MAX && z+x<=INT_MAX;
 ensures \result=1 && ((x+y+z==360)||(x == y) || (y == z) || (x==z))&&((x!=y)&&(y!=z)&&(z!=x)));
@*/



int triangle(int x,int y,int z)
{

 if(x+y+z==360)
 {
     if(x == y && y == z){
     return 1;
     }
     else if(x == y || y == z || x==z){
     return 0;
     }
     else if((x!=y)&&(y!=z)&&(z!=x)) {
     return 0;
     }
   }
    return 0;
}

int main()
{
 int t = triangle(60,60,60);
 return 0;
}

goal exit:
((i=n) and
(prod=(prod*(i-1))) ->
     prod=prod*n)

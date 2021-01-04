#include<stdio.h>
#include<math.h>

/*@
    requires n>=0 && n<=50;
    ensures \result == ((n*n) +(2*n))/4 && \result >= 0 ;
 */

int loop(int n)
{
    int i=0,s=0;
    /*@
        loop invariant ((i*i) + (2*i))/4 >= s && i<=n && i>=0  && s>=0;
        loop invariant ((i+1)*(i+1) + (2*(i+1)))/4 ==> s+i+2;

        loop assigns i,s;
    */
    for(i=0;i<=n;i=i+2)
    {
        s=s+i;
    }
    return s;
}

int main()
{
    int x= loop(10);
    return 0;
}


#include<stdio.h>

int func(int a, int b)
{
 int prod = 1;
 int i = a;
 while(i <= b) {
 prod = prod*i;
 i = i+2;
 }
 return prod;

}

int main()
{ 
    int a, b;
   cin >> a >> b;
   int res = func(a,b);
}

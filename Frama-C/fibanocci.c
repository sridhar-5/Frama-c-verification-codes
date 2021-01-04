#include<stdio.h>  

/*@
   axiomatic fibanocci{
       logic integer fib(integer n);

       axiom case_n:
       \forall integer n;
        n > 1 ==> fib(n) == fib(n-1) + fib(n-2);
        axiom case_1:
        fib(1) == 1;
        axiom case_0:
        fib(0) == 1;
   }
*/
/*@
    requires n >= 0;
    ensures \result == fib(number);
    assigns \nothing;
*/    
int fibanocci(int number){
    
    int n1=0,n2=1,n3;
    for(i=2;i<number;++i)    
    {   
        /*@
            loop invariant n3 == fib(i-1) + fib(i-2);
            loop invariant i >= 2;
            loop invariant i <= n;
            loop assigns i,n3;
        */ 
        n3=n1+n2;        
        n1=n2;    
        n2=n3;    
    }  
}

int main()    
{      
    int no_of_elements = 5;
    fibanocci(no_of_elements);
    return 0;  
}    
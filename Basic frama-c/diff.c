/*@
  requires a>INT_MIN;
  requires b>INT_MIN;
  ensures (b == a - \result);
*/  
int sub(int a,int b)
{
  int diff =  a - b;
  return diff;
}
int main(void)
{
   int a = 7;
   int b = 6;
   sub(a,b);
}     

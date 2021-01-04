/*@
ensures (((((b*b)-4*a*c)>=0)&&(\result==0))||((((b*b)-4*a*c)<0)&&(\result==1)));
*/


int check(int a, int b, int c)
{
  if(((b*b)-(4*a*c))>=0)
  return 0;
  else
  return 1;
}

int main()
{
  int ret = check(2,1,1);
  return 0;
}

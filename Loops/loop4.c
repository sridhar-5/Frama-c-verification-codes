

/*@
requires y>=0 && i>=0;
ensures (i<=n)&&(y==((2^(i+1))-1));
assigns \nothing;
*/



int loop(int n)
{
    /*@
    loop invariant
    loop assigns
    */
    int y=0, i=0;
	  while (i<=n)
    {
        y = y + 2^i;
        i = i + 1;
    }

    return y;
}


int main()
{
  int ret = loop(5);
  return 0;
}

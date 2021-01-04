/*@
 requires \valid(a) && \valid(b);
 ensures *a == \old(*b) && *b == \old(*a);
*/

void swap(int* a, int* b){

  int tmp = *a;
  *a = *b;
  *b = tmp;
 }

 int main()
 {
   int a=13,b=14;
   swap(&a,&b);
 }

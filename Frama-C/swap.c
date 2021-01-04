/*@ requires \valid(a) && \valid(b);
  @ ensures A: *a == \old(*b) ;
  @ ensures B: *b == \old(*a) ;
  @ assigns *a, *b ;
*/

void swap(int *a, int *b) {

  int tmp = *a ;
  *a = *b ;
  *b = tmp ;
  return ;

}  

int main() {

 int x = 10;
 int y = 20;
 swap(&x, &y);

}



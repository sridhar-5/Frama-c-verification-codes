int main(){
    int i=0;
    int s=27;
    /*@
        loop invariant 0 <= i <= 30;
    */
   
    while (i<30){
        ++i;
    }
    //@assert i == 30;
    //@assert s == 27;
   
}

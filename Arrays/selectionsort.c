
void selectionsort(int *arr,int n){

    int i,j,min;

    /*@
       loop 
       loop invariant \forall integer p,q; 0<=p<=q<=i ==> arr[p] <= a[q];
       loop invariant \for all ineger p,q; 0<=p<=q<=i ==> 
       loop assigns arr[0..n-1],min;

    */
    for(i = 0;i < n-1;i++){
        min = i;
        /*@
           loop invariant 0<=i<j<n;
           loop invariant \forall integer k; 0<=k<=i ==> arr[k] <= arr[i];
           loop invariant \forall integer k; 0<=k<=i ==> arr[k] <= arr[min];
           loop invariant \forall integer k; i<=k<=j ==> arr[min] <= arr[k];
           loop invariant \exists integer k; i<= k <= j && arr[min] == arr[k];
           loop assigns j,min,arr[i+1..n-1];
           loop variant i-j; 
        */  
        for(j = i+1;j < n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
}
int main(){
   int arr[] = {1,2,3,4,5};
   selectionsort(arr,5);
   return 0;
}
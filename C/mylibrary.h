long factorial(int n) {
     
    int i;
    long result = 1;
    for (i = 2; i <= n; i++){
        result *= i;
    }
     
    return result;
}
 
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
 
void quickSort(int *a, int l, int r) {
    srand(time(NULL)); 
    int key = a[l + rand() % (r-l+1)]; 
    int i = l, j = r;
  
    while(i <= j) {
        while(a[i] < key) i++;      
        while(a[j] > key) j--;     
        if(i <= j) {
            if (i < j)
                swap(&a[i], &a[j]);
            i++;
            j--;
        }
    }
 
    if (l < j) quickSort(a, l, j); 
    if (i < r) quickSort(a, i, r);
}
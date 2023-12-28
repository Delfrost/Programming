insertionsort(int *A,n){
    int key,j;
    for(int i=1;i<n-1;i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j]=A[j+1];

            j--;
        }
        A[j+1]=key;
    }
}
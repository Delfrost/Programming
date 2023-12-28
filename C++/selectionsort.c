selectionsort(int *A,n){
    int minIndex;
    
    for(int i=0;i<n-1;i++){
        minIndex=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[minIndex]){
                minIndex=j;
            }

        }
        int temp=A[j];
        A[j]=A[minIndex];
        A[minIndex]=A[j];
    }
}
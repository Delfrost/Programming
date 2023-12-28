#include <stdio.h>
#include <stdlib.h>
void bubblesort(int* A,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

void printArray(int* A,int n)
{
    for(int a=0;a<n;a++)
    {
        printf(" %d ",A[a]);
    }
}

void main(){
    int A[]={12,56,78,23,72,55};
    int n=6;
    printArray(A,n);
    printf("");
    bubblesort(A,n);
    printf("");
    printArray(A,n);
}

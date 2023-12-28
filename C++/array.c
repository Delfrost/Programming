#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int *arr = (int*)malloc(sizeof(int)*5);
    int n;
    printf("Enter elements:");
    for(int i=0;i<=5;i++){
        
        scanf("%d",arr[i]);
    }
    printf("Here are the elements of the array:");
    for(int j=0;j<=5;j++){
        printf("%d",arr[j]);
    }

    return 0;
}

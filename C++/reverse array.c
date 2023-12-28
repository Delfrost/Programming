#include<stdio.h>
#include<conio.h>
int main(){
    int n=7,a;
    int array[]={50,60,70,10,30,45,66};
    for(int i=0,j=n-1;i<j;i++,j--){
        
            a=array[j];
            array[j]=array[i];
            array[i]=a;

        }
    
    for(int f=0;f<n;f++){
        printf(" %d ",array[f]);

    }
    
    return 0;
}
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int *stack;
int top=-1;
void push()
{   
    int data;
    if(top==-1){
        stack=(int*)malloc(sizeof(int));
    
    }
    else{
        stack=(int*)realloc(stack,top+2);
    }
    printf("Enter data");
    scanf("%d",&data);
    top++;
    *(stack+top)=data;
}


void pop(){
    if(top==-1){
        printf("underflow");

    }
    else{
        stack=(int*)realloc(stack,top -1);
    }
    top--;
}
void peek()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("%d",*(stack+top));
    }

}

void display()
{
    if(top==-1)
    {
        printf("Empty stack");
    }
    else
    {
        printf("%d",*(stack));
    }
}int main()
{
    int choice;

    while(1)
    {
        printf("1.Push() \n2.Pop() \n3.Peek() \n4.Display() \n5.Exit:\n\n ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("\nEnter valid operation\n");

        }
    }




    return 0;
}

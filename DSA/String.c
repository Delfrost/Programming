#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack{
    char data;
    struct stack *next;
};
typedef struct stack stack;
stack *createstack(){
    return NULL;
}
bool isEmpty(stack *stack){
    return stack==NULL;
}
stack *push(stack *stack,char item){
   struct stack *newNode=(struct stack*)malloc(sizeof(stack));
    newNode->data=item;
    newNode->next=stack;
    return newNode;
}
stack *pop(stack *stack){
    
}
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next,*prev;
};
struct node* head=NULL;

void printlist(){
    if(head==NULL){
        printf("The list is empty");
    }
    else{
        struct node *p=head;
        p=(struct node*) malloc(sizeof(struct node));
        do{
            printf("%d",p->data);
            p=p->next;
        }while(p->next!=head);
    }   
}
void main(){
    struct node *node1=malloc(sizeof(struct node));

    struct node *node2=malloc(sizeof(struct node));
    struct node *node3=malloc(sizeof(struct node));

    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;

    node3->prev=node2;
    node2->prev=node1;
    node1->prev=NULL;

    node1->data=10;
    node2->data=20;
    node3->data=30;

    head=node1;
    printlist();
}


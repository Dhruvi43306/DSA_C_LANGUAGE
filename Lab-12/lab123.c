//WAP to swap Kth node from beginning with Kth node from end in a singly linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
};
struct node*first = NULL,*last= NULL;
void LastnumberSwep(){
    struct node*save = first;
    if(first == NULL && first->link == NULL){
        return;
    }
    while(save->link != NULL){
        save = save->link;

    }
    
        // int temp = first->info;
        // first->info = save->info;
        // save->info = temp;

        struct node*temp = first->link;
        first->link = save->link;
        save->link = temp;
}
void printList(){
    struct node*save = first;
    while(save != NULL){
        printf(" %d ",save->info);
        save=save->link;
    }
}
void main(){
    int n,val;
    printf("Enter a Number of size:");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&val);
        struct node*newnode = (struct node*)(malloc(sizeof(struct node)));
        newnode->info = val;
        newnode->link = NULL;
    if(first == NULL){
        first = last = newnode;
    } 
    else{
        last->link = newnode;
        last = newnode;
    } 
  
    }
    LastnumberSwep();

    printList();
}
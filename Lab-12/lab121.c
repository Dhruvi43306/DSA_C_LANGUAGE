//Write a program to copy a linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
};
struct node*first = NULL,*last = NULL;
void copiedList(){
    struct node*save = first;
    if(first == NULL){
        return;
    }
    struct node*newfirst = (struct node*)(malloc(sizeof(struct node)));
    struct node*newlast = NULL;
    if(newfirst == NULL){
        newfirst = newlast; 
    }
    else{
        newfirst->info = save->info;
        newfirst->link = NULL;
        save = save->link;
        newlast = newfirst;
    }  
    struct node*temp = (struct node*)(malloc(sizeof(struct node)));
    while(save != NULL){
        temp->info = save->info;
        temp->link = NULL;
        newlast->link = temp;
        newlast = temp;
        save = save->link;
    }
    struct node*print = newfirst;
    printf("\ncopied list\n");
    while(print != NULL){
        printf(" %d ",print->info);
        print = print->link;
    }
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
    copiedList();
    printList();
}
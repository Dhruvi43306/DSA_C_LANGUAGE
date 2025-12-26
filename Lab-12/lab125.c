//Write a program to reverse a linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
};
struct node*first = NULL,*last = NULL;
void Reversed(){
struct node*save,*pre = NULL;
struct node*newnode = (struct node*)(malloc(sizeof(struct node)));
  while(first != NULL)
  {
    save = first->link;
    first->link = pre;
    pre = first;
    first = save;
  }
    first = pre;
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
    Reversed();
    printList();
}
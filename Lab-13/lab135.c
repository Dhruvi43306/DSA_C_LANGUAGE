//2.Method Write a program to swap two consecutive nodes in the linked list. Don’t change the values of nodes, implement by changing the link of the nodes.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
};
struct node*first = NULL,*last = NULL;
void SwepNumber(){
    struct node*second = NULL;
    struct node*third = NULL;
        second = first->link;
        third = second->link;

        while(first != NULL){
            first->link = third;
            second->link = first;

            first = first->link;
            first = third;
            third->link = second;
        }
}
void PrintList(){
    struct node*save = first;
    while(save != NULL){
    printf(" %d ",save->info);
    save = save->link;
    }
}
void main(){
    int n,val;
    printf("Enter a Number of size:");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&val);
        struct node *newnode = (struct node*)(malloc(sizeof(struct node)));
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
    SwepNumber();
    PrintList();
}

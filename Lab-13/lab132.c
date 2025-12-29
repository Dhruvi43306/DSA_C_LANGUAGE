// WAP to perform given operation in the linked list. There exist a Linked List. Add a node that contains the GCD of that two nodes between every pair adjacent node of Linked List.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
};
struct node*first = NULL,*last = NULL;

void FindGcd(){
    struct node*current = first;
    while(current != NULL && current->link != NULL){
    struct node*save = current->link;
    struct node*newnode = (struct node*)(malloc(sizeof(struct node)));

    newnode->info = current->info % save->info;
    current->link = newnode;

    newnode->link = save;

    // current->link = newnode;
    current=save;
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
    FindGcd();
    PrintList();
}

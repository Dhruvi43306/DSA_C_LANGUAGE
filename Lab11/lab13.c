// WAP to remove duplicate elements from a singly linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
};
struct node*first = NULL,*last;
void Duplicate(){
    struct node*save = first;
    while(save != NULL && save->link != NULL){
    struct node*pre = save;
    struct node*temp = save->link;

    while(temp != NULL)
    {
        if(save->info == temp->info)
        {
            pre->link = temp->link;
            free(temp);
            temp = pre->link;

        }
        else{
            pre = temp;
            temp = temp->link;
        }
    }
        save = save->link;

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
    Duplicate();
    printList();
}
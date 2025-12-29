// Write a program to sort elements of a linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
};
struct node*sorted(struct node*first){
    for(struct node* i = first; i->link != NULL; i = i->link){
        for(struct node* j = i->link; j != NULL; j=j->link){
           if(i->info > j->info){
            int temp = i->info;
            i->info = j->info;
            j->info = temp;
           }
        }
    }
    return first;

}
struct node*PrintList(struct node*save){
    while(save != NULL){
    printf(" %d ",save->info);
    save = save->link;
    }
}
void main(){
    int n,val;
    struct node*first = NULL,*last = NULL;
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
    first = sorted(first);
    PrintList(first);
}

#include<stdio.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *link;
};

//case 1:
struct node*insertFirst( struct node*first,int x){
   struct node *newnode = (struct node *)(malloc(sizeof(struct node)));
    newnode->info = x;
    newnode->link = first;
    return newnode;
}

//case 2:
struct node *insertLast(struct node*first,int x){
   struct node*save = first;
    struct node *newnode = (struct node *)(malloc(sizeof(struct node)));
    newnode->info = x;
    newnode->link = NULL;
    if (first == NULL) {
        return newnode;
    }
    while(save->link != NULL){
        save = save->link;
    }
    save->link = newnode;
    return first;
}

//case 3:
    struct node *insertMiddle(struct node*first,int x){
    struct node *newnode = (struct node *)(malloc(sizeof(struct node)));
    newnode->info = x;
    newnode->link = NULL;
    if (first == NULL) {
        return newnode;
    }
    //first position
    if(first->info  > newnode->info){
        newnode->link = first;
        return newnode;
    }
    //middle position
    struct node*save=first;
    while(save->link != NULL && save->link->info < newnode->info){
        save= save->link;
    }
    newnode->link = save->link;
    save->link = newnode;
    return first;

    //error revers nthi jodvanu
    // save->link = newnode;
    // newnode->link = save->link;
    // newnode = save;
    }

    //case 4: Delet
    struct node*insertDelete(struct node*first,int x){
    struct node *newnode = (struct node *)(malloc(sizeof(struct node)));
    newnode->info = x;
    newnode->link = NULL;
    if (first == NULL) {
        return newnode;
    }
    struct node*save = first;
    //delete first node
    if( save->info == x){
        first = save->link;
        free(save);
        return first;
    }
    while(save != NULL && save->info != x){
        struct node*pre = save;
        save = save->link;
    
    if(save->info != x){
        printf("Not found\n");
    }
    else{
      
        pre->link = save->link;
        free(save);
        return first;

    }
    }
    }

    //case 5:
     struct node*insertReverse(struct node*first){
    struct node *newnode = (struct node *)(malloc(sizeof(struct node)));
   
    if (first == NULL) {
        return newnode;
    }
    struct node*last = NULL,*save;
    while(first != NULL){
        save = first->link;
        first->link = last;
        last = first;
        first = save;

    }
    return last;    

}

    //case 6:
    struct node*insertcopy(struct node*first){
    struct node *newnode = (struct node *)(malloc(sizeof(struct node)));
   
    if (first == NULL) {
        return newnode;
    }
    struct node *newfirst = (struct node *)(malloc(sizeof(struct node)));

    newfirst->info = first->info;
    newfirst->link = NULL;

    struct node*newlast = newfirst;

    first = first->link;


        while(first != NULL){
        struct node*temp = (struct node*)(malloc(sizeof(struct node)));
        temp->info = first->info;
        temp->link = NULL;
        newlast->link = temp;
        newlast = temp;

          first = first->link;
            
        }
       return newfirst;

    }

    int countedList(struct node*first){
        int count = 0;
        while(first != NULL){
            count++;
            first = first->link;
        }
        return count;
    }   
    
    
    //printList
    struct node*printList(struct node*save){
        while(save != NULL){
            printf(" %d ",save->info);
            save = save->link;
        }
        printf("\n");
    }
void main(){
  int n,val;
    struct node *first = NULL,*last;
    printf("Enter a number of size:");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
    struct node* newnode = (malloc(sizeof(struct node)));

    printf("Enter a %d Element:",i+1);
    scanf("%d",&val);

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
    int choise;
    printf("\nMenu:\n");
    printf("case 1: Enter a inserted first position:\n");
    printf("case 2: Enter a inserted last position:\n");
    printf("case 3: Enter a inserted middle position:\n");
    printf("case 4: Enter a inserted delete position:\n");
    printf("case 5: Enter a Reverse position:\n");
    printf("case 6: Enter a inserted copy position:\n");
    printf("case 7: Enter a counted number:\n");

    printf("Enter a choise:\n");
    scanf("%d",&choise);
    switch (choise){
        case 1:
            first = insertFirst(first,10);
            break;

         case 2:
            first = insertLast(first,25);
           break;

        case 3:
            first = insertMiddle(first,50);
            break;
        case 4:
            first = insertDelete(first,30);
            break;
            
        case 5:
            first = insertReverse(first);
            break;
        case 6:
            first = insertcopy(first);
            break;

        case 7:
            printf("count:%d\n",countedList(first)) ;    
         default:
            printf("Invalid Linkedlist:");       
    }
        printf("Final list:");
        printList(first);
    }
    

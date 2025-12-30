// 69.
// Write a menu driven program to implement following operations on the circular linked list.
// •
// Insert a node at the front of the linked list.
// •
// Delete a node from specified position.
// •
// Insert a node at the end of the linked list.
// •
// Display all nodes.
#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};


struct node* first = NULL;
struct node* last = NULL;


void insertFirst(int x) {
   
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(first == NULL){
    newnode->link = newnode;
    first = last = newnode;
    }
        newnode->info = x;
        newnode->link = first;
        last->link = newnode;
        first = newnode;
    
}

void insertLast(int x){
    struct node*newnode = (struct node*)(malloc(sizeof(struct node)));
    newnode->info = x;
    if(first == NULL){
    newnode->link = newnode;
    first = last = newnode;
    }
    else{
    newnode->link = first;
    last->link = newnode;
    last = newnode;
    } 

}
void insertDelete(int x){
    struct node*save = first;
  
    //first position
    if(save->info == x)
    {
        first = save->link;
        free(save);
        last->link = first;
    }
    while(save != NULL && save->info != x)
    {
        struct node*pre = save;
        
        if(save->info != x)
        {
            printf("Not found");
        }
        else{
            pre->link = save->link;
            free(save);
            last->link = first;
        }
    }
    save = save->link; 
    
    //insertedlast
    
}
// Print circular list
void printList() {
  struct node* save = first;
    do {
        printf(" %d ", save->info);
        save = save->link;
    } while (save != first);
    printf("\n");
}

void main() {
    int n, val;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &val);

        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->info = val;

        if (first == NULL) {
            first = last = newnode;
            newnode->link = newnode; // first node points to itself
        } else {
            newnode->link = first;
            last->link = newnode;
            last = newnode;
        }
    }
    int x;
   
    while (1) 
    {
    int choice;
   
    printf("\nMenu:\n");
    printf("1: Insert at first position\n");
    printf("2: Insert at last position\n");
    printf("3: Insert at Delet position\n");
    

    printf("Enter your choice: ");
    scanf("%d", &choice);
  
    switch(choice){        
        case 1:
        printf("Enter your Insert At First Element: ");
        scanf("%d", &x); 
            insertFirst(x);
            break;
        case 2:
        printf("Enter your Insert At Last Element: ");
        scanf("%d", &x);
            insertLast(x);
            break;
        case 3:
        printf("Enter your Insert At Delet Element: ");
        scanf("%d", &x);
            insertDelete(x);
            break;         
        case -1:
            exit(0);
       
            
    }
    
    printf("\nFinal list: ");
    printList();
    }
}

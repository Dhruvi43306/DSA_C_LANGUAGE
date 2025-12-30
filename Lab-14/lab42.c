// WAP to split a circular linked list into two halves.
#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
};

// insert at first
struct node* insertFirst(struct node* first, int x, struct node* last) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = x;

    newnode->link = first;       
    last->link = newnode;        
    first = newnode;             

    return first;
}

// print circular list
void printList(struct node* first) {
    struct node* temp = first;
   do {
        printf(" %d ", temp->info);
        temp = temp->link;
    } while (temp != first);
    printf("\n");
}

void main() {
    int n, val;
    struct node* first = NULL;
    struct node* last = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode->info = val;

        if (first == NULL) {
            first = last = newnode;
            newnode->link = newnode;
        } else {
            newnode->link = first;
            last->link = newnode;
            last = newnode;
        }
    }

    int choice, x;

    while (1) {
        printf("\nMenu:\n1. Insert at first\n-1. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == -1) 
        break;

        if (choice == 1) {
            printf("Enter value to insert: ");
            scanf("%d", &x);
            first = insertFirst(first, x, last);  
        }

        printf("Current List: ");
        printList(first);
    }

}

//Write a program to copy a linked list.
#include <stdio.h>
#include <stdlib.h>


struct node {
    int info;
    struct node *link;
};

struct node* copy(struct node *first) {
    if (first == NULL)
        return NULL;

    struct node *newFirst = NULL, *newLast = NULL, *temp;

    newFirst = (struct node*)malloc(sizeof(struct node));
    newFirst->info = first->info;
    newFirst->link = NULL;
    newLast = newFirst;

    first = first->link;

   
    while (first != NULL) {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->info = first->info;
        temp->link = NULL;

        newLast->link = temp;
        newLast = temp;

        first = first->link;
    }

    return newFirst;
}


void printList(struct node *start) {
    while (start != NULL) {
        printf("%d ", start->info);
        start = start->link;
    }
    printf("\n");
}

void main() {
    int n;
    printf("Enter size of list: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    struct node *first = NULL, *last = NULL;

    
    for (int i = 0; i < n; i++) {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        newnode->info = a[i];
        newnode->link = NULL;

        if (first == NULL) {
            first = last = newnode;
        } else {
            last->link = newnode;
            last = newnode;
        }
    }

  
    struct node *copiedList = copy(first);


    printf("Original list: ");
    printList(first);

    printf("Copied list:   ");
    printList(copiedList);
}

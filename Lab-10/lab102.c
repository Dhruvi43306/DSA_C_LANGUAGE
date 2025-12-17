#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
};

// Correct insert function
struct node* insertedlast(struct node* first, int val) 
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = val;
    newnode->link = NULL;

    if (first == NULL) 
    {
        return newnode;
    }

    struct node* save = first;
    while (save->link != NULL) 
    {
        save = save->link;
    }
    save->link = newnode;
    return first;

    
}


// Correct print function
void printList(struct node* save) {
  while (save != NULL) {
        printf(" %d ", save->info);
        save = save->link;
    }
    printf("\n");
}

void main() {
    struct node* firstA = NULL;
    struct node* firstB = NULL;
    int n, val;

    // Input List A
    printf("Enter the size of List A: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d for List A: ", i + 1);
        scanf("%d", &val);
        firstA = insertedlast(firstA, val);
    }

    // Input List B
    printf("Enter the size of List B: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d for List B: ", i + 1);
        scanf("%d", &val);
        firstB = insertedlast(firstB, val);
    }
    printf("\n");
    if(firstA->info == firstB->info)
    {
        printf("Linkdlist is Same.\n");
    }
    else{
        printf("Linked list is Not same.\n");
    }

    // Display both lists
    printf("\nList A:\n");
    printList(firstA);

    printf("List B:\n");
    printList(firstB);
}

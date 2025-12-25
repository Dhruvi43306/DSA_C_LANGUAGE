// Write a program to implement stack using singly linked list.
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int info;
    struct node* link;
};

struct node* top = NULL; // Global top pointer (head of the list)

// Push operation
void push(int x) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = x;
    newnode->link = top;
    top = newnode;
    printf("%d pushed to stack.\n", x);
}

// Pop operation
void pop() {
    if (top == NULL) {
        printf("Stack Underflow! Cannot pop.\n");
        return;
    }
    struct node* temp = top;
    printf("Popped: %d\n", temp->info);
    top = top->link;
    free(temp);
}

// Peek operation
void peek() {
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element: %d\n", top->info);
    }
}

// Display stack
void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct node* temp = top;
    printf("Stack: ");
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

// Main function
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("Exiting program.\n");
            exit(0);

        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

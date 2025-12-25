// Write a program to implement queue using singly linked list.
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int info;
    struct node* link;
};

// Global pointers for front and rear
struct node* first = NULL;
struct node* last = NULL;

// Enqueue operation (insert at rear)
void enqueue(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = value;
    newnode->link = NULL;

    if (last == NULL) {
        first = last = newnode;
    } else {
        last->link = newnode;
        last = newnode;
    }

    printf("%d enqueued to queue.\n", value);
}

// Dequeue operation (delete from front)
void dequeue() {
    if (first == NULL) {
        printf("Queue Underflow! Cannot dequeue.\n");
        return;
    }

    struct node* temp = first;
    printf("Dequeued: %d\n", temp->info);
    first = first->link;

    if (first == NULL) {
        last = NULL;
    }

    free(temp);
}

// Display queue
void display() {
    if (first == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct node* temp = first;
    printf("Queue: ");
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

// Peek (show front element)
void peek() {
    if (first == NULL) {
        printf("Queue is empty.\n");
    } else {
        printf("Front element: %d\n", first->info);
    }
}

// Main function with menu
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 2:
            dequeue();
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


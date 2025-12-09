//26. Write a program to insert a number in an array that is already sorted in an ascending order.
#include <stdio.h>

void main() {
    int n;
    printf("Enter a Size of Array: ");
    scanf("%d", &n);

    int a[n+1],b[n+1];  // One extra space for insertion

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
    printf("Enter [%d] Element:",i);
    scanf("%d", &a[i]);
    }

    int number, pos = n;  // Default position = end
    printf("Enter a Number to insert: ");
    scanf("%d", &number);

    // Find position to insert number (keep array sorted)
    for (int i = 0; i < n; i++) {
        if (number < a[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    // for (int i = n; i > pos; i--) {
    //     a[i] = a[i - 1];
    // }
    for(int i = 0; i < pos; i++){
        b[i] = a[i];
    }
    b[pos] = number;

    for(int i = pos; i < n; i++){
        b[i+1] = a[i];
    }

    // Print updated array
    printf("Updated array:\n");
    for (int i = 0; i <= n ; i++) {
        printf("%d ", b[i]);
    }

    
}

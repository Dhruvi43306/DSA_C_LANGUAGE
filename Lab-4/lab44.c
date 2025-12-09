//27.Write a program to delete a number from an array that is already sorted in an
// ascending order.
#include <stdio.h>

void main() {
    int n;
    printf("Enter a Size of Array: ");
    scanf("%d", &n);

    int a[n-1];  // One extra space for insertion

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int number, pos = n;  // Default position = end
    printf("Enter a Number to delet: ");
    scanf("%d", &number);

       for (int i = 0; i < n; i++) {
        if (number <= a[i]) {
            pos = i;
            break;
        }
    }
      for (int i = pos; i < n; i++) {
        a[i] = a[i + 1];
     }
     

    // Print updated array
    printf("Updated array:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", a[i]);
    }

  
}

//WAP to sort the N names in an alphabetical order.
#include <stdio.h>
#include <string.h>

void main() {
    int n;
    char names[100][50], temp[50];

    printf("Enter number of names: ");
    scanf("%d", &n);

    // Read N names
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Alphabetical Sorting using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names[i] and names[j]
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Output sorted names
    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    
}

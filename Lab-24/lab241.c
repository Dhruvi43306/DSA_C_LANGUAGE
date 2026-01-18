#include <stdio.h>

void Quick(int a[], int low, int high) {
    if (low < high) {
        int i = low, j = high, key = a[low];

        while (i < j) {
            while (i <= high && a[i] < key) {
                i++;
            }
            while (j >= low && a[j] > key) {
                j--;
            }
            if (i < j) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        int temp = a[low];
        a[low] = a[j];
        a[j] = temp;

        Quick(a, low, j - 1);
        Quick(a, j + 1, high);
    }
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element [%d]: ", i);
        scanf("%d", &a[i]);
    }

    Quick(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

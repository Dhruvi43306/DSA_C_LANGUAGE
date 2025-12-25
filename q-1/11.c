// Move all zeroes to end while keeping order of non-zero
// elements.
// [0,1,0,3,12] [1,3,12,0,0]

#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int index = 0; 

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[index++] = a[i];
        }
    }
    for(int i = 0; i < index; i++){
        for(int j = 0; j < index-i-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    while (index < n) {
        a[index++] = 0;
    }

    printf("Result: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    
}

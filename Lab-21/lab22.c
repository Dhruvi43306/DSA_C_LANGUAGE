#include <stdio.h>
void main()
{
    int n;
    printf("Enter a Size:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a [%d] Element:", i);
        scanf("%d", &a[i]);
    }
    int search;
    printf("Enter a Searching Elemet:");
    scanf("%d", &search);
    int high = n - 1, low = 0, mid;
    while(low <= high)
    {
        mid = (high + low) / 2;
        if (search == a[mid])
        {
        printf("Binary searching Elemet:%d ", mid);
        return;
        }
        else if (search > a[mid])
        {
            low = mid + 1;
        }
        else if (search < a[mid])
        {
            high = mid - 1;
        }
    }
}
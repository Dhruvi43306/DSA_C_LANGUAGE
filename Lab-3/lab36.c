// 21.Read n numbers in an array then read two different numbers, 
//replace 1st number with 2nd number in an array and print its index and final array.
#include <stdio.h>
void main()
{
    int n;

    printf("Enter a Size of Array:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter a Element of Array:\n");
    for (int i = 0; i < n; i++)
    {
        print("Enter a [%d] Elment:",i);
        scanf("%d", &arr[i]);
    }

    int a, b;
    printf("Enter a First Number:");
    scanf("%d", &a);
    printf("Enter a second Number:");
    scanf("%d", &b);
    //if i want target to index throw swep the element
//    if (a >= 0 && a < n && b >= 0 && b < n)
//     {

//             int temp = arr[a];
//             arr[a] = arr[b];
//             arr[b] = temp;
//         }
    for(int i = 0; i < n; i++){
        if(arr[i] == a){
            arr[i] = b;
            printf("print the index:%d\n",i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] : %d \n", i, arr[i]);
    }
}

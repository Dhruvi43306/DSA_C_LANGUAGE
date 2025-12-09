// 29.Write a program to merge two unsorted arrays.
#include <stdio.h>
void main()
{
    int n1,n2;
    printf("Enter a First size of Array:");
    scanf("%d", &n1);
       
   
    int a[n1];
   
    printf("Enter a First Array of Elemet:\n");
    for (int i = 0; i < n1; i++)
    {
        printf("Enter First array of Element [%d]",i);
        scanf("%d", &a[i]);
    }
    printf("Enter a second size of Array:");
    scanf("%d", &n2);
    int b[n2];
   
    printf("Enter a second Array of Elemet:\n");
    for (int i = 0; i < n2; i++)
    {
    printf("Enter second array of Element [%d]",i);
    scanf("%d", &b[i]);
    }
    int c[n1+n2];
    int i = 0, j = 0, k = 0;
       for (int i = 0; i < n1; i++)
        c[k++] = a[i];

      for (int i = 0; i < n2; i++)
        c[k++] = b[i];

      printf("Merged array:\n");           
    for(int i = 0; i < n1+n2; i++){
        printf("%d",a[i]);
    }

}
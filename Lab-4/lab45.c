//28.Write a program to delete duplicate numbers from an array.
#include <stdio.h>
void main()
{
    int n, flag = 0;
    printf("Enter a size of array:");
    scanf("%d", &n);

   
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a [%d] Element:",i);
        scanf("%d", &a[i]);
    }
    int pos = n;
   
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1){
     printf("Enter a duplicate Position of number:");
    scanf("%d",&pos);    
    for(int i = pos; i < n; i++){
        a[i] = a[i+1];
    }
     for(int i = 0; i < n-1; i++){
        printf("%d ",a[i]);
    }
}
else{
    printf("Your Elment are Not Duplicate.");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}
   
}

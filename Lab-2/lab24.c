//11.WAP to find factors of a given number.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    //   for(int i = 2; i <= n; i++){
    int i = 2;
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("Factor Number:%d\n", i);
        }
        i++;
    }
}
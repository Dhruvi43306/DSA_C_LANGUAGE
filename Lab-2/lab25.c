//12.WAP to check whether a number is prime or not.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    int i = 1,count = 0;
    while(i <= n){
        if(n % i == 0){
            count++;
        }
        i++;
    }
    if(count == 2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}
// Convert a binary number (given as a string) to its decimal (base-
// 10) equivalent.
#include<stdio.h>
void main(){
    int n;
    int sum = 0;
    int place = 1;
    printf("Enter a Binary Number:");
    scanf("%d",&n);
    while(n > 0){
        int rem = n % 2;
        sum = sum+place*rem;
        place = place*2;
        n = n / 10;
    }
    printf("%d",sum);
}
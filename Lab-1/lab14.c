// 4.WAP to find the largest among the given three numbers by user.
#include<stdio.h>
void main(){
    int a, b, c;
    printf("Enter a First Number:-");
    scanf("%d",&a);
    printf("Enter a second Number:-");
    scanf("%d",&b);
    printf("Enter a Third Number:-");
    scanf("%d",&c);
    int ans = ((a > b)  ? (b > c ? b : c):(a > c ? a : c));
    printf("Larjest Number: %d ",ans);
}
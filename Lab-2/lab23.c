//10.WAP to reverse a number.
#include<stdio.h>
void main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int rem,sum=0;
    while(n != 0){
    rem = n % 10;
    sum = sum * 10 + rem;
    n = n / 10;
    }
    printf("Revers Number:%d",sum);

}
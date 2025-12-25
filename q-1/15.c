// Given an integer num, return the number of steps to reduce it to
// zero.
// In one step, if the current number is even, you have to divide it
// by 2, otherwise, you have to subtract 1 from it.
#include<stdio.h>
void main(){
    int n;
    int count= 0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(n != 0){
        if(n % 2 == 0){
             n = n / 2;
             count++;
        }
        else{
            n = n-1;
            count++;
        }
    }
    printf("%d",count);
}
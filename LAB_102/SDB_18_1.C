// WAP to find weather given number is Ugly or not.
// An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
// Input: n = 6 Output: true Explana􀆟on: 6 = 2 × 3

#include<stdio.h>
void main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    if(n <= 0){
        printf("Not An ugly Number.");
    }
    while(n % 2 == 0){
        n = n/2;
    }
    while(n % 3 == 0){
        n = n/3;
    }
    while(n % 5 == 0){
        n = n/5;
    }
    if(n == 1){
        printf("true");
    }
    else{
        printf("false");
    }
}
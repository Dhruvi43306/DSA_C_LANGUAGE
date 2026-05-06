// WAP to find weather given number is Automorphic or not.
// An automorphic number is a number whose square ends with the same digits as the number
// itself.
// For example, 5 is automorphic because 5² = 25, which ends in 5.
// Similarly, 76 is automorphic because 76² = 5776, which ends in 76.


#include<stdio.h>
void main(){
   int n,div = 1,rem;
    printf("Enter Number:");
    scanf("%d",&n);

    int seq = n*n;
    int temp = n;

    while(temp > 0){
        div *=10;
        rem = seq % div;
        temp/=10;
    }
    if(rem == n){
        printf("Automorphic Number.");
    }
    else{
        printf("Not an Automorphic Number.");
    }



}
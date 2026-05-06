// WAP to find weather given number is Kaprekar or not.
// A Kaprekar number is a non-negative integer that, when squared, can be split into two parts
// whose sum equals the original number.
// For E.g. 45 is a Kaprekar number because 45 squared (2025) can be split into 20 and 25, and 20 +
// 25 = 45.

#include<stdio.h>
void main(){
   int n,div = 1;
    printf("Enter Number:");
    scanf("%d",&n);
   
    int seq = n*n;
    int temp = n;
    while(temp > 0){
        div = div*10;
        temp = temp / 10;
    }
    int quotation = seq / div;
    int reminder = seq % div;
   
    if(quotation + reminder == n){
        printf("Kapreker Number.");
    }
    else{
        printf("Not An Kapreker Number.");
    }

}
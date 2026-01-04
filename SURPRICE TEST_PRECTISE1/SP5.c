#include<stdio.h>
void main(){
    int n;
    int rem;
    printf("Enter Number:");
    scanf("%d",&n);
    int temp = n;
    while(n > 0){
        rem = n % 10;
        n = n / 10;
    }
     if((temp)%(n+rem) == 0){
        printf("Whole Number!");
     }
     else{
        printf("Not Whole Number!");
     }
}
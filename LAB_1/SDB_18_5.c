// WAP TO FIND PRIME NUMBER BETWEEN RANGE.

#include<stdio.h>
void main(){
    int start,end;
    printf("Enter a start Number:");
    scanf("%d",&start);
    printf("Enter a end Number:");
    scanf("%d",&end);
    for(int i = start; i <= end; i++){
        if(i <= 1){
            continue;
        }
        int isPrime = 1;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d,",i);
        }
    }
}
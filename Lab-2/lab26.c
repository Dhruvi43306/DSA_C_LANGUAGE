//13.WAP to print prime numbers between given interval.
#include<stdio.h>
void main(){
    int start,end;
    printf("Enter a strating Number:");
    scanf("%d",&start);
     printf("Enter a ending Number:");
    scanf("%d",&end);
   
    for(int i = start; i <= end; i++){
        int count = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 2){
        printf("%d\n",i);
        }
    
    }
}
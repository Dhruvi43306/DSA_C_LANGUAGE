// Create a Pascal Triangle
#include<stdio.h>
void main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            printf(" ");
        }
        int num = 1;
        for(int j = 1; j <= i; j++){
        if(j == 1)
            num = 1;
        else   
        num = num*(i-j+1)/(j-1);
        printf("%d ",num);    
    
        }
     printf("\n");

    }
}
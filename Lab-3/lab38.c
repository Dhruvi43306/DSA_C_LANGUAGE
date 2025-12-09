// 22.WAP to print Pascal triangle.
#include<stdio.h>
void main(){
    int n;
    printf("Enter a Rowes:");
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        int num = 1;
        for(int j = 0; j <= n-i; j++){
            printf(" ");
        }
          
        for(int j = 0; j <= i; j++){
             printf("%d ",num);
            num = num * (i-j)/(j+1);
        }
        printf("\n");
    }
}
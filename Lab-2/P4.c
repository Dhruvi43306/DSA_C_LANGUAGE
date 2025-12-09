//     1 
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
#include<stdio.h>
void main(){
    int n ;
    printf("Enter a Number:-");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
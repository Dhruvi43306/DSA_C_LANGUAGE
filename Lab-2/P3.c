//      * 
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
#include<stdio.h>
void main(){
    int n ;
    printf("Enter a Number:-");
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            printf(" ");
        }
        for(int j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}
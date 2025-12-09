// 1 * 
// 1 * 2 *
// 1 * 2 * 3 *
// 1 * 2 * 3 * 4 *
// 1 * 2 * 3 * 4 * 5 *
#include<stdio.h>
void main(){
    int n = 5;
    
    for(int i = 0; i < n; i++){
        int num = 1;
       for(int j = 0; j <= i; j++){
        printf("%d",num);

            printf(" * ");
            num++;
        }
        printf("\n");
    }
}
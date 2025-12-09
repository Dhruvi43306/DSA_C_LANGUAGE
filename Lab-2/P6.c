// 1
// 01
// 010
// 1010
// 10101
#include<stdio.h>
void main(){
    int n , m = 0;
    printf("Enter a Number:-");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            m++; 
            if(m%2==0){
                printf("0");
            }else{
                printf("1");
            }
        }
        printf("\n");
    }
}
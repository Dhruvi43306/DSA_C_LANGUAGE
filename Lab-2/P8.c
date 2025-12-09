//     1 
//    A B
//   1 2 3
//  C D E F
// 1 2 3 4 5
#include<stdio.h>
void main(){
    int n ;
    char c = 'A';
    printf("Enter a Number:-");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            if(i % 2 == 0){
                
                printf("%C ",c);
                c++;
            }
            else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}
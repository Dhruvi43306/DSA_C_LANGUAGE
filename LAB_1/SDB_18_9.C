// WAP TO FIND A POWER A^B.
//(WITHOUT USING POWER AND MULTIPLICATION OPERATION)
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    int res = 1;
    for(int i = 0; i < b; i++){
        int sum = 0;
       for(int j = 0; j < a; j++){
            sum = sum + res;
       }
       res = sum; 
    }
    printf("Multiplication (a^b) : %d",res);
}
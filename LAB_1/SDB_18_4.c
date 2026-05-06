#include<stdio.h>
void main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n); 
    if((n/2)*2  == n){
        printf("EVEN NUMBER");
    }
    else{
        printf("ODD NUMBER");
    } 
}
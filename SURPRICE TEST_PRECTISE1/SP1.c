//find kth fector number.
#include<stdio.h>
void main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int k;
    printf("Enter Kth Number:");
    scanf("%d",&k);
    int count=0;
    int i = 1;
    while(i <= n){
        if(n % i == 0){
            count++;
        if(count == k)
        printf("%d",i);    
    }
    i++;
    }

}
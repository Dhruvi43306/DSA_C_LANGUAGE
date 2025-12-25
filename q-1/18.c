// Happy number
#include<stdio.h>
void happy(int num){
   
    int sum = 0;
    while(num != 0){
        int rem = num % 10;
        sum = sum + rem*rem;
        num = num/10;
    }
    int temp = sum;
    if(temp == 1){
       printf("True");
       return;  
    }
    if(temp == 4){
       printf("False");
       return;
    }
 happy(temp);
    
}

void main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    happy(n);
}
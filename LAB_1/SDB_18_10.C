// WAP TO FIND A QUOTIENT AND REMINDER OF 2 NUMBER.(BIGGER NO.SHOULD BE DIVIDE
// BY LOWER NUMBER) AND YOU ARE NOT ALLOWED TO USE A DIVISION AND QUOTIENT OPERATOR.

#include<stdio.h>
void main(){
    int n1,n2;
    int big,small,count = 0;;
    printf("Enter a Number1:");
    scanf("%d",&n1);
    printf("Enter a Number2:");
    scanf("%d",&n2);

    if(n1 > n2){
        big = n1;
        small = n2;
    }
    else{
        big = n2;
        small = n1;
    }
    while(big >= small){
        big = big - small;
        count++;
    }
    printf("Quotient = %d\n",count);
    printf("Reminder = %d\n",big);
}
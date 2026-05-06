// WAP for following Scenario.
// Given n rupees and a chocolate price of m for each chocolate, with a wrapper exchange offer of 1
// chocolate per k wrappers, calculate the total number of chocolates you can eat with n rupees.

#include<stdio.h>
void main(){
    int money,cost,wrapper,chocolate,total,wrappers,extra;
    printf("Enter a Money of chocolate:");
    scanf("%d",&money);

    printf("Enter a Cost of chocolate:");
    scanf("%d",&cost);

    printf("Enter a Wrapper of chocolate:");
    scanf("%d",&wrapper);

    chocolate = money / cost;
    wrappers = chocolate;
    total = chocolate;

    while(wrappers >= wrapper){
        extra = wrappers / wrapper;
        total = total + extra;

        wrappers = (wrappers % wrapper) + extra;

    }
    printf("Total chocolate = %d",total);

}
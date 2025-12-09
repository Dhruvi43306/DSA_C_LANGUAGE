//7.WAP to convert number of days into year, week & days 
//[e.g. 375 days mean 1 year, 1 week and 3 days].
#include<stdio.h>
void main(){
    int y,d,w,td;
    printf("Enter a Total Days:-");
    scanf("%d",&td);
    y = td / 365;
    w = (td % 365) / 7;
    d = (td % 365) % 7;
    printf("time in YY:DD:WW:%.2d:%.2d:%.2d\n",y,w,d);

}
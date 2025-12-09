//6.WAP to convert seconds into hours, minutes & seconds and print
// in HH:MM:SS [e.g. 10000 seconds mean 2:46:40 (2 Hours, 46 Minutes, 40 Seconds)].
#include<stdio.h>
void main(){
    int h,m,s,ts;
    printf("enter a value:");
    scanf("%d",&ts);
    h=ts/3600;
    m=(ts%3600)/60;
    s=ts%60;
    printf("time in HH:MM:SS:%.2d:%.2d:%.2d\n",h,m,s);
}

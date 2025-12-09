// 1.WAP to calculate area of a Circle (A = πr2).
#include<stdio.h>
void main(){
//Define PI;
float PI = 3.14;
int redaious;
printf("Enter a Redaious:-");
scanf("%d",&redaious);
float ans = PI * redaious * redaious;
printf("Print the Circle Area: %.2f",ans);
}
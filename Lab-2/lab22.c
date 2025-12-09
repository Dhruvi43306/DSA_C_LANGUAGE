//9.WAP to find power of a number using loop.
#include<stdio.h>
#include<math.h>
void main(){
    int a , b, c;
    printf("Enter a Base:");
    scanf("%d",&a);
    printf("Enter a Base of Power:");
    scanf("%d",&b);
    for(int i = 0; i < b; i++){
         c = pow(a,b);
       
    }
     printf("%d",c);
}
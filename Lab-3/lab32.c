// 17.Write a program to calculate sum of numbers from m to n.
#include<stdio.h>
void main(){
    int n;
   
    printf("Enter a Size of Array:\n");
    scanf("%d",&n);
     int a[n],sum = 0;
     printf("Enter a Element of Array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++){
         sum+=a[i];
        
    }
   printf("Sum of the Array:%d\n",sum);
}
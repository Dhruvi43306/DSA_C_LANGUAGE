// 16.Write a program to read and display n numbers using an array.
#include<stdio.h>
void main(){
    int n;
   
    printf("Enter a Size of Array:\n");
    scanf("%d",&n);
     int a[n];
     printf("Enter a Element of Array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("a[%d] : %d\n",i,a[i]);
    }
}
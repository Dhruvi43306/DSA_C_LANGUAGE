#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter a Size of Array:");
    scanf("%d",&n);
    int *ptr = (int*)(malloc(n*sizeof(int)));
     int sum = 0;
 
     for(int i = 0; i < n; i++){
        scanf("%d",ptr+i);
     }
     for(int i = 0; i < n; i++){
      sum =  sum + *(ptr+i);
     }
     printf("sum:%d",sum);
}
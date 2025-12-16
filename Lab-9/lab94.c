#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter a Size of Array:");
    scanf("%d",&n);
    int *ptr = (int*)(malloc(n*sizeof(int)));

    for(int i = 0; i < n; i++){
        scanf("%d",ptr+i);
     }
    int max = 0;
     for(int i = 0; i < n; i++){
        if(max < *(ptr + i)){
            max = *(ptr+i);
        }
      
     }
     printf("max:%d ",max);
}
#include<stdio.h>
#include<stdlib.h>
void main(){
int n = 5;

int *ptr = (int*)(malloc(n*sizeof(int)));
printf("Enter a Element of Array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",ptr+i);
    }
    for(int i = 0; i < n; i++){
        printf(" %d ",*(ptr+i));
    }
}
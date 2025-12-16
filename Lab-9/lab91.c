#include<stdio.h>
#include<stdlib.h>
void main(){
    
    int *ptr = (int*)(malloc(sizeof(int)));
    char *ctr = (char*)(malloc(sizeof(char)));
    float *ftr = (float*)(malloc(sizeof(float)));
    if(*ptr && *ctr && *ftr){
    *ptr = 7;
    *ctr = 'D';
    *ftr = 2.3;
    printf("%d",*ptr);
    printf("%c",*ctr);
    printf("%.2f",*ftr);

    free(ptr);
    free(ctr);
    free(ftr);
    }
    else{
        printf("Faild the memory.");
    }
}
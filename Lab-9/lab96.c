#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    int isPalingdron = 1;
    char *ptr = (char*)(malloc((n+1) *sizeof(char)));
    char *start = ptr;
    char *end = ptr + strlen(ptr)-1;
    while(start < end)
    {
        if(*start != *end)
        {
            isPalingdron = 0;
            break;
        }
        start++;
        end--;
    }
    if(isPalingdron){
        printf("String is Palingdron.");
    }
    else{
        printf("String is not Palingdron.");
    }
}
// CHECK WHTHER STRING IS PALINGDRONE OR NOT.

#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("Enter a string:");
    scanf("%s",s);

    int i = 0;
    int start = 0, end = strlen(s)-1;
    int isPalingdrone = 1;
    while(start < end){
        if(s[start] != s[end]){
            isPalingdrone = 0;
            break;
        }
        start++;
        end--;
    }
    if(isPalingdrone == 1){
        printf("PalingDrone");
    }
    else{
        printf("Not PalingDrone");
    }
}
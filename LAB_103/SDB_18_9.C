//WCWR PATTERN
//W = ANY STRING 
//C = SINGLE MIDDLE CHRACTER
//WR = REVERSE OF W

#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    printf("Enter a string:");
    scanf("%s",s);

    int len = strlen(s);
    if(len % 2 == 0){
        printf("Invalid");
        return 0;

    }
    int flag = 1;
    int mid = len / 2;
    for(int i = 0; i < mid; i++){
        if(s[i] != s[len - i - 1]){
            flag = 0;
            break;
        }
    }
    if(flag){
        printf("valid WCWR Pattern");
    }
    else{
        printf("Invalid WCWR Pattern");
    }

}


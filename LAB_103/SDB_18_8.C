#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[100];
    printf("Enter a string:");
    scanf("%s",s);
    int start = 0;
    int end = strlen(s)-1;

    while(start < end){
        if(!isalpha(s[start])){
            start++;
        }
        else if(!isalpha(s[start])){
            end--;
        }
        else{
            int temp = s[start];
            s[start] = s[end];
            s[end] = temp;

            start++;
            end--;
        }
    }
    printf("%s",s);
}
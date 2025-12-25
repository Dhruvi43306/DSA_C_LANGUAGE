// Compress a string. "aaabbc" "a3b2c1"
#include<stdio.h>
void main(){
    char s[100];
    printf("Enter a String:");
    scanf("%s",s);
    int i = 0;
    int count = 1;
    while(s[i] != '\0'){
        char ch = s[i];
        if(ch != s[i+1]){
        printf("%c%d",ch,count);
        count = 1;
        }
        else if(ch == s[i+1]){
            count = count+1;
        }
        i++;

    }
}
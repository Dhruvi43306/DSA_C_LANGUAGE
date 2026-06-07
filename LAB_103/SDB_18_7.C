#include<stdio.h>
#include<ctype.h>

int main(){
    char s[100];
    printf("Enter a string:");
    scanf("%s",s);

    int i = 0;
    while(s[i] != '\0'){
        char ch = s[i+1];
        if(isdigit(s[i])){
            int count  = s[i] - '0';
            for(int j = 0; j < count; j++){
                printf("%c",ch);
            }
            i+=2;
            
        }
        else{
        printf("%c",s[i]);
        i++;
        }
    }
    
}
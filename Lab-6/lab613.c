#include<stdio.h>
#include<string.h>
#define SIZE 100
int s[SIZE];
int top = -1;
void push(char x){
    
    s[++top] = x;
}

void main(){
    
    char input[100];
    int a_count = 0,b_count = 0;
    printf("Enter a string :");
    scanf("%s",input);
    for(int i = 0; i < strlen(input); i++){
        if(input[i] == 'a'){
            push(input[i]);
            a_count++;
           
        }
        else if(input[i] == 'b'){
            push(input[i]);
            b_count++;
        }
    }
    if(a_count == b_count && a_count>=1){
        printf("valid");
    }
    else{
        printf("invalid");
    }
}
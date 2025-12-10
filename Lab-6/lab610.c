#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int Top = -1;
int s[SIZE];
void push(char x);
int pop();
void push(char x)
{
    if (Top >= SIZE)
    {
        printf("Overflow");
        return;
    }
    s[++Top] = x;
}
int pop()
{
    if (Top == -1)
    {
        printf("Stack UnderFlow");
    }
    Top = Top - 1;
    return s[Top+1];
}
void check(){
    for(int i = 0; i <= Top; i++){
        printf("%c",s[i]);
    }
}
void main(){
    char str[SIZE],x;
    printf("Enter a string:");
    scanf("%s",str);
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != '*'){
            push(str[i]);
        }
        else{
           x = pop();
        }
    }
    printf("final output:");
    check();
    printf("\n");
}
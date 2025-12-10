#include <stdio.h>
#include<string.h>
#define SIZE 100
int Top = -1;
char s[SIZE];
int i;
char next;
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

void main()
{
    int i=0;
    char x ;
    char str[SIZE];
    printf("Enter a string:");
    scanf("%s", str);

    // char next = str[i];
    while (str[i] != 'c')
    {
        if (str[i] == '\0')
        {
            printf("Invalid string");
        }
        else
        {
            push(str[i]);
            i++;
             str[i];
        }
    }

    i++;
    str[i];
  

    while(Top != -1){
        x = pop();
        if(str[i] != x){
            printf("Invalid string");
            return;
        }
        i++;
        str[i];
    }
    
    if (str[i] == '\0')
    {
        printf("Valid string");
    }
    else
    {
        printf("Invalid string");
    }
}

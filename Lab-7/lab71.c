//Write a program to convert infix notation to postfix notation using stack.
#include <stdio.h>
#include <string.h>
#define size 100
int top = -1;
char s[size];
int rank = 0;
char polish[size];
char pop()
{
    top = top - 1;
    return s[top+1];
}
void push(char x)
{
    s[++top] = x;
}
int input_pre(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 3;
    }
    else if (c == '^')
    {
        return 6;
    }
    else if (c == '(')
    {
        return 9;
    }
    else if (c == ')')
    {
        return 0;
    }
    else
    {
        return 7;
    }
}
int stack_pre(char c)
{
    if (c == '+' || c == '-')
    {
        return 2;
    }
    else if (c == '*' || c == '/')
    {
        return 4;
    }
    else if (c == '^')
    {
        return 5;
    }
    else if (c == '(')
    {
        return 0;
    }
    else
    {
        return 8;
    }
}
int R(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
void rev_pol(char infix[])
{
    char next;
    int j = 0;
    int i = 0;
    push('(');

    while (i != strlen(infix))
    {
        next = infix[i];

        if (top < 0)
        {
            printf("Invalid:");
            return;
        }
        while (stack_pre(s[top]) > input_pre(next))
        {
            char temp = pop();
            polish[j++] = temp;
            rank = rank + R(temp);
            if (rank < 1)
            {
                printf("invlaid");
                return;
            }
        }
        if (input_pre(next) != stack_pre(s[top]))
        {
            push(next);
        }
        else
        {
            char temp = pop();
        }
        i++;
    }
    polish[j] = '\0';
    if (top != -1 || rank != 1)
    {
        printf("Invalid");
    }
    else
    {
        printf("valid\n %s", polish);
    }
}

void main()
{
    char infix[size];

    printf("Enter the infix expression: ");
    scanf("%s", infix);
    strcat(infix, ")");

    rev_pol(infix);
}
// 37.
// Valid Parenthesis Problem
// Chef has a string which contains only the characters '{', '}', '[', ']', '(' and ')'.
// Now Chef wants to know if the given string is balanced or not.
// If is balanced then print 1, otherwise print 0.
// A balanced parenthesis string is defined as follows:
// •
// The empty string is balanced
// •
// If P is balanced then (P), {P}, [P] is also balanced
// •
// if P and Q are balanced PQ is also balanced
// •
// "([])", "({})[()]" are balanced parenthesis strings
// •
// "([{]})", "())" are not balanced.
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int Top = -1;
int s[SIZE];
void push(char x);
int pop();
int ismatching(char open,char close);
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
int ismatching(char open,char close){
    return(open == '(' && close == ')'||
    open == '[' && close == ']'||
    open == '{' && close == '}');
  

}

int valid(char str[]){
      for(int i = 0; str[i] != '\0'; i++){
       if(str[i] != ')' && str[i] != '}' && str[i] != ']'){
        push(str[i]);
       }
       else {
        char next = str[i];
        char x = pop();
        if(!ismatching(x,next)){
            return 0;
        }
       }
    }
    return Top==-1;
}    

void main(){
 char next;
char str[SIZE];
printf("Enter a string:");
scanf("%s", str);

  
    if(valid(str)){
        printf("valid");
    }
    else{
        printf("Invalid");
    }
}

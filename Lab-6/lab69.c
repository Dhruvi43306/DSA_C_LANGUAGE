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

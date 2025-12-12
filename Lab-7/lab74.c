#include<stdio.h>
#define SIZE 100
#include<ctype.h>
#include<math.h>
#include<string.h>
int s[SIZE];
int top = -1;
void push(int x){
    if(top >= SIZE - 1){
        return;
    }
    s[++top] = x;
}
int pop(){
    return s[top--];
}
void evalute_prefix(char infix[]){
    for(int i = strlen(infix) - 1; i >= 0; i--){ 

        if(isdigit(infix[i])){
            push(infix[i] - '0');
        }
        else{
            int oprand1 = pop();
            int oprand2 = pop();
            switch(infix[i]){
                case '+':
                push(oprand1 + oprand2);
                 break;
                case '-': 
                push(oprand1-oprand2);
                break;  
                case '*':
                push(oprand1*oprand2);
                break;
                case '/':
                if(oprand2 != 0){
                push(oprand1/oprand2);
                }
                else{
                printf("Division by zero!\n");
                return;                    
                }
                break;
                case '^':
                push(pow(oprand1,oprand2));
                break;
            }
        }
    }
}
void main(){
    char infix[SIZE];
    printf("Enter a string:");
    scanf("%s",infix);
    evalute_prefix(infix);
    printf("Anser: %d",pop());
}
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define SIZE 100
int s[SIZE];
int top = -1;
void push(int x){
    if(top >= SIZE - 1){
        printf("overflow");
        return;
    }
    s[++top] = x;
}
int pop(){
    if(top == -1){
        printf("underflow");
        return -1;
    }
    return s[top--];
}
void evalute_postfix(char infix[]){
    int i = 0;
    for(int i = 0; i < strlen(infix); i++){
        if(isdigit(infix[i])){
            push(infix[i] - '0');
        }
        else{
            int oprand2 = pop();
            int oprand1 = pop();
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
    evalute_postfix(infix);
    printf("Anser: %d",pop());
}
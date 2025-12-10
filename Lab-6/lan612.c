#include <stdio.h>
#include <string.h>
#define SIZE 100

char stack[SIZE];
int Top = -1;


void push(char ch) {
    if (Top >= SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++Top] = ch;
}


char pop() {
    if (Top == -1) {
        printf("Stack Underflow\n");
        return '\0';
    }
    return stack[Top--];
}
void reverse(char str[],int n){
    for(int i = 0; i < n; i++){
        push(str[i]);
    }
    for(int i = 0; i < n; i++){
        str[i] = pop();
    }
}


int vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void main() {
    char str[SIZE];
    char result[SIZE];
    int ind = 0;
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {
      
      if(vowel(str[i])){
        reverse(str,i);
      }
        
    }
    printf("After conversion: %s\n\n", str);

}
   

    





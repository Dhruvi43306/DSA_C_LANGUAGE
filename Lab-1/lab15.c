//3.WAP to determine whether the entered character is vowel or not.
#include<stdio.h>
void main(){
    char c ;
    printf("Enter a Character:-");
    scanf("%C",&c);
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i'|| c == 'o' || c == 'u'){
        printf("Character is Vowel.");
    }
        else{
            printf("Character is not vowel.");
        }
    
}
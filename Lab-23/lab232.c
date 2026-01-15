#include<stdio.h>
void main(){
    char str[100];
    int length = 0;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            length++;

        }
    }
    // printf(" %d ",length);
    // printf("%s",str);


}

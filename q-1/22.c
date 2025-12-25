// Convert a numeric string into an integer without using parseInt,
// or in-built conversion methods/class etc.
#include<stdio.h>
void main(){
    char s[100];
    int n = 0;
    printf("Enter Numeric String:");
    scanf("%s",s);
    for(int i = 0; s[i] != '\0'; i++){
        n = n * 10 + (s[i]-'0');
    }
    printf("Integer value: %d", n);

}
// WAP to convert a Binary to Decimal.
#include<stdio.h>
int main(){
    int binary,decimal = 0,base = 1;
    printf("Enter Binary Number:");
    scanf("%d",&binary);

    while(binary > 0){
        int rem = binary % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        binary /= 10;
    }

    printf("Decimal = %d",decimal);

    return 0;
}
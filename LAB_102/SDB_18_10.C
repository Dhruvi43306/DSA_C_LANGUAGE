// WAP to Convert a Decimal to Octal and Vice versa.

#include<stdio.h>
int main(){
    int octal = 0,decimal,rem,base = 1;
    printf("Enter a Dcimal Number:");
    scanf("%d",&decimal);
    while(decimal > 0){
        rem = decimal % 8;
        octal = octal + rem*base;
        base = base*10;
        decimal /= 8;
    }
    printf("Ocatal = %d",octal);

    return 0;
}
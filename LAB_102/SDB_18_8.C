// WAP to convert an Octal into hexa-decimal.

#include<stdio.h>
int main(){
  int octal,decimal = 0,base = 1,rem;
    printf("Enter octal Number:");
    scanf("%d",&octal);


//step 1 - octal to decimal    
    while(octal > 0){
        rem = octal % 10;
        decimal = decimal + rem * base;
        base = base * 8;
        octal /= 10;
    }


//step 2 - decimal to hexa decimal

    int hex[20],i = 0;
    while(decimal > 0){
        rem = decimal % 16;
        if(rem < 10)
            hex[i++] = rem + '0';
        else
            hex[i++] = rem - 10 + 'A'; 
        decimal /= 16;
    }

    printf("Hexadecimal: ");

    for(int j = i-1; j >=0; j--){
         printf("%c",hex[j]);  
    }
    return 0;
}
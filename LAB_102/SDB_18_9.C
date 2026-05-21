// WAP to convert a hexa-decimal to Octal.

#include<stdio.h>
int main(){
    char hex[20];
    int rem,decimal = 0,i = 0;
    printf("Enter hexaDecimal Number:");
    scanf("%s",&hex);

    //step 1 :- hex -> Decimal
    while(hex[i] != '\0'){
        char ch = hex[i];
        if(ch  >= '0' && ch <= '9')
            rem = ch - '0';
        
        else
            rem = ch - 'A' + 10;
        
            decimal = decimal*16 + rem;
        i++;
    }

    //setp 2 :- Decimal to octal

    int oct[20], j = 0;
    while(decimal > 0){
        oct[j++] = decimal % 8;
        decimal /= 8;
    }

    printf("Octal:");
    for(int k = j-1; k >= 0; k++){
        printf("%d",oct[k]);
    }
    return 0;

}
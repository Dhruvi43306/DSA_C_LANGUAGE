// 5.WAP to check for the leap year.
#include<stdio.h>
void main(){
    int Year;
    printf("Enter a Leap Year:-");
    scanf("%d",&Year);
    if(Year % 4 == 0 && Year % 400 != 0 || Year % 100 == 0){
        printf("Print the Leap Year.");
    }
    else{
        printf("Print the not Leap Year.");
    }
}
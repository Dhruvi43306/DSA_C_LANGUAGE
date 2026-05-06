// WAP TO FIND A SUMMATION OF A DIGIT OF A GIVEN NUMBER
// #include<stdio.h>
// void main(){
//     int n;
    
//     printf("Enter number: ");
//     scanf("%d", &n);

//     int sum = 0;
//     while(n != 0){
//         int rem = n % 10;
//         sum = sum + rem;
//         n = n / 10;
//     }
//     printf("SUMMATION OF DIGIT: %d",sum);
// }

//RECURSIVE

#include<stdio.h>
int summation(int n);
void main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int SUM_OF_DIGIT = summation(n);
    printf("SUMMATION OF DIGIT: %d",SUM_OF_DIGIT);
    
}
int summation(int n){
    if(n == 0){
        return 0;
    }
    else{
        return (n % 10) + summation(n/10);
    }
}
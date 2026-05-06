// WAP TO FIND A FACTORIAL OF A GIVEN NUMBER(ITTRETIVE AND RECURSIVE)
#include <stdio.h>
void main()
{
    int n, ans = 1;

    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    printf("FACTORIAL: %d", ans);
}

// RECURSIVE
//  #include<stdio.h>

// int fact(int n);
// void main(){
//     int num, result;

//     printf("Enter number: ");
//     scanf("%d", &num);

//     result = fact(num);

//     printf("Factorial = %d", result);
// }

// int fact(int n){
//     if(n == 0){
//         return 1;
//     }
//     else{
//         return n * fact(n - 1);
//     }
// }
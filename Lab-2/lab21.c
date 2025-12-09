// 8.WAP to find factorial of a number. (Using loop & recursion)
#include<stdio.h>
int fact(int n);
int main(){
    int n = 5;
     fact(n);
     return 0;
}
int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fact(n - 1);
}



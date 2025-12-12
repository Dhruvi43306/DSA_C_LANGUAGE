
// You have an array A of integers of size N, an array B (initially empty) and a stack S (initially empty). You are allowed to do the following operations:
// •
// Take the first element of array A and push it into S and remove it from A.
// •
// Take the top element from stack S, append it to the end of array B and remove it from S.
// You have to tell if it possible to move all the elements of array A to array B using the above operations such that finally the array B is sorted in ascending order.

#include<stdio.h>
#define size 100
int s[size];
int top = -1;
void push(int x){
    if(top >= size-1){
        return;
    }
    s[++top] = x;
}
int pop(){
      return s[top--];
}
    
   
void main(){
    int n;
    printf("Enter a Size:");
    scanf("%d",&n);
    int A[n],sorted[n],B[n];
    printf("Enter a Elment:");
    for(int i = 0; i < n; i++){
        printf("Enter a %d element:",i);
        scanf("%d",&A[i]);
        sorted[i] = A[i];

    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(sorted[j] > sorted[j+1]){
                int temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
            }
        }
    }   
    top = -1;

    int i = 0;
    int b = 0;
    int index = 0;
    while(i < n){
    push(A[i]);
        while(top >= 0 && s[top] == sorted[index]){
            B[b++] = pop();
            index++;
        }
        i++;
    }

        if(b == n){
            printf("YES");
        }
        else{
            printf("NO");
        }
    
}

//20.Write a program to find whether the array contains a duplicate number or not.
#include<stdio.h>
void main(){
    int n,flag = 0;
   
    printf("Enter a Size of Array:\n");
    scanf("%d",&n);
     int a[n];
     printf("Enter a Element of Array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
   
    for(int i = 0; i < n; i++){
        if(a[i] == a[i+1]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Duplicate Number is exits.");
    }
    else{
        printf("Duplicate Number is not exits.");
    }
}
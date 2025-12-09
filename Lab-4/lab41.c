//24.Write a program to insert a number at a given location in an array.
#include<stdio.h>
void main(){
    int n;
    printf("Enter a Size of Array:");
    scanf("%d",&n);
    int a[n];
    // int b[n+1];
    printf("Enter a Element:\n");
    for(int i = 0; i < n; i++){
        printf("Enter [%d] Element:",i);
        scanf("%d",&a[i]);
    }
    int number,index;
    printf("Enter a index:");
    scanf("%d",&index);
    printf("Enter a Number:");
    scanf("%d",&number);

    //case1:forword loop
    //  for(int i = 0; i < index; i++)
    //  {
    //     b[i] = a[i];
    // }
    //  b[index] = number;
    // for(int i = index; i < n; i++)
    // {
    //     b[i+1] = a[i];
         
    // }
    // case 2:backword loop
    for(int i = n; i > index; i--){
    a[i] = a[i-1];
    }
    a[index] = number;
    for(int i = 0; i < n+1; i++){
        printf(" %d",a[i]);
    }
}
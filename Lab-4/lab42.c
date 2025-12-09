//25.Write a program to delete a number from a given location in an array.
#include<stdio.h>
void main(){
    int n;
    printf("Enter a Size of Array:");
    scanf("%d",&n);
    int a[n],b[n-1];
    for(int i = 0; i < n; i++){
      printf("Enter [%d] Element:",i);
        scanf("%d",&a[i]);
    }
    int index;
    printf("Enter a index:");
    scanf("%d",&index);
    
    //case 1:forword loop
    for(int i = 0; i < index; i++){
        b[i] = a[i];
    }
    
    for(int i = index; i < n-1; i++){
        b[i] = a[i+1];
    }
    //case 2: backword loop
    // for(int i = index; i < n-1; i++){
    //     a[i] = a[i+1];
    // }
   
    for(int i = 0; i < n-1; i++){
       printf(" %d ",b[i]);
    }
}
// 19.Write a program to find position of the 
//smallest number & the largest number from given n numbers.
#include<stdio.h>
void main(){
    int n;
   
    printf("Enter a Size of Array:\n");
    scanf("%d",&n);
     int a[n];
     printf("Enter a Element of Array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    
    for(int i = 0; i < n; i++){
        printf("a[%d] : %d\n",i,a[i]);
    }
    int max = a[0];
    int min = a[0];
    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
        else{
            min = a[i];
        }
    }
    printf("Maximum Number:%d\n",max);
    printf("Minimum Number:%d\n",min);

}
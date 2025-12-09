// 18.Write a program to calculate average of first n numbers.
#include<stdio.h>
void main(){
    int n;
   
    printf("Enter a Size of Array:\n");
    scanf("%d",&n);
     int a[n],sum = 0;
     printf("Enter a Element of Array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++){
         sum+=a[i];
        
    }
    float avg = (float) sum / n;
  
    printf("Avrage of the Array:%.2f\n",avg);

}
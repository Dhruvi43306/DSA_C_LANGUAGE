// Maximum Subarray Sum (Given an integer array nums, find the
// contiguous subarray (containing at least one number) which has
// the largest sum and return its sum.)
#include<stdio.h>
void main(){
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int maxsum = a[0],sum = a[0];
    for(int i = 0; i < n; i++){
        if(sum >= 0){
        sum = sum + a[i];
    }
    else{
        sum = a[i];
    }
    if(sum > maxsum){
    maxsum = sum;
} 
}
 
   
    printf("maxsum:%d",maxsum);
}
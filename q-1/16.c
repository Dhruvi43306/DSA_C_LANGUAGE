    // You are given an integer n and an integer start. Define an array
    // nums where nums[i] = start + 2 * i
    // Return the bitwise XOR of all elements of nums.
#include<stdio.h>
void main(){
    int n;
    int start;
    int res = 0;
     printf("Enter a Start Number:");
    scanf("%d",&start);
    printf("Enter a size:");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        res = res ^ (start+2*i);
       
    }
    printf("%d",res);

}
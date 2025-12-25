// You are given an integer array nums. The unique elements of an
// array are the elements that appear exactly once in the array.
// Return the sum of all the unique elements of nums.
#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter a size:");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++){
        int count = 0;
       for(int j = 0; j < n; j++){
            if(a[i] == a[j])
            count++;
        }
        if(count == 1)
        sum+=a[i];
    }
    printf("%d",sum);
}
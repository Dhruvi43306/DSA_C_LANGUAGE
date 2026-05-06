// WAP TO FIND WEATHER  GIVEN NUMBER IS ARMSTROMG NUMBER IS NOT.
#include<stdio.h>
#include<math.h>
void main(){
    int n,count=0;
    printf("Enter Number:");
    scanf("%d",&n);
   int temp = n;
   int temp1 = n;
   while(temp1 != 0){
        count++;
        temp1/=10;
    }
    int temp2 = n;
    int sum = 0;
    while(temp2 != 0){
        int rem = n % 10;
        sum = sum + pow(rem,count);
        temp2/=10;
    }
    if(sum == temp){
        printf("Armstrong Number");
    }
    else{
        printf("Not An Armstrong Number");
    }
}
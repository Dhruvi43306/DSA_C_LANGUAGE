#include <stdio.h>
#include<math.h>
void main()
{
    int n,count = 0;
    printf("Enter a Number:");
    scanf("%d", &n);
   int original_No = n;

    int temp = n;
    while(temp != 0){
        count++;
        temp /= 10;
    }
    int res = temp;
    int d, sum = 0;
    while(res != 0){
        d =  res % 10;
        sum = sum + (int)pow(d,count);
        res = res / 10;
    }

    if(original_No == sum){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
   
}
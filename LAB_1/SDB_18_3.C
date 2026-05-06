// WAP TO FIND A TOTAL ODD AND TOTAL EVEN DIGIT OF A GIVEN NUMBER

#include<stdio.h>
void main(){
    int n;
    int total_even = 0,total_odd = 0;
    printf("Enter Number:");
    scanf("%d",&n);
    while(n != 0){
    int rem = n % 10;
    if(rem % 2 == 0){
        total_even++;
    }
    else{
        total_odd++;
    }
    n = n/10;
}
    printf("Total EVEN Number:%d\n",total_even);
    printf("Total ODD Number:%d",total_odd);

}
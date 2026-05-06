// WAP TO FIND MAX,MIN,AVG OF A NUMBER N SHOULD BE TAKEN FROM USER AND ALL N VALUE
// SHOULD BE TAKEN FROM USER(YOU NOT ALLOWED TO USE AN ARRAY FOR THIS)
#include<stdio.h>
void main(){
    int n,num,min,max,sum=0,avg;
    printf("Enter Length Number:");
    scanf("%d",&num);
    for(int i = 1; i <= num; i++){
        printf("Enter a Number:");
        scanf("%d",&n);

        if(i == 1){
            min = max = n;
        }
        else{
            if(n > max)
            max = n;
            if(n < min)
            min = n;
        }
        sum = sum + n;
    }
    avg = sum/n;
    printf("Minimum:%d\n",min);
    printf("Maximum:%d\n",max);
    printf("Aevrage:%d",avg);
}
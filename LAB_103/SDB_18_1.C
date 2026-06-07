// wap to find sum of even no. into 1D array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int a[n],sum = 0;

    for(int i = 0; i < n; i++){
        printf("Enter %d element:",i);
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            sum = sum + a[i];
        }
    }
    printf("%d",sum);
}
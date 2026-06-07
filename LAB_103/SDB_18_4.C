#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int a[n],k,count = 0;

    for(int i = 0; i < n; i++){
        printf("Enter %d element:",i);
        scanf("%d",&a[i]);
    }

    printf("Enter a sum of Number:");
    scanf("%d",&k);

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] + a[j] == k){
                count++;
            }
        }
    }
    printf("Pairs = %d",count);
}
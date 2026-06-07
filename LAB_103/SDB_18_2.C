// WAP TO ENTER AN ELEMNT AT SPECIFIC POSITION INTO ARRAY.(DO NOT TAKE NEW ARRAY)

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

    int pos,value;
    printf("Enter a Position of element:");
    scanf("%d",&pos);

    printf("Enter a value of element:");
    scanf("%d",&value);

    for(int i = n-1; i >= pos; i--){
        a[i+1] = a[i];
    }
    a[pos] = value;

    for(int i = 0; i < n+1; i++){
        printf("%d ",a[i]);
    }
}
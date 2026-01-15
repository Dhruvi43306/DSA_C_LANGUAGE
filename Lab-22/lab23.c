#include<stdio.h>
void main(){

int n;
printf("Enter a Size:");
scanf("%d",&n);
int a[n];
for(int i = 0; i < n; i++){
    printf("Enter a [%d] Element:",i);
    scanf("%d",&a[i]);
}

    for(int i = 0; i < n; i++){
        int minindex = i;
        for(int j = i+1; j < n-1; j++){
            if(a[j] < a[minindex]){
                 minindex = j;
            }
        }
        if(minindex != i){
            int temp = a[i];
            a[i] = a[minindex];
            a[minindex] = temp;
        }

    }
    
    for(int i = 0; i < n; i++){
        printf(" %d ",a[i]);
    }
}
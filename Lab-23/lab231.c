#include<stdio.h>
void main(){
    int n;
    printf("Enter a size:");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("Enter %d Element:",i);
        scanf("%d",&a[i]);
    }
    int i = 1, j,key;
    while(i <= n){
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            j--;
        }

        a[j+1] = key;
        i++;
        
    }
    for(int i = 0; i < n; i++){
        printf(" %d ",a[i]);
    }
    
}
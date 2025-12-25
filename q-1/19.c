// Find the kth largest element in an array. (Without using in-built
// sorting function)
#include<stdio.h>
void main(){
    int k;
    printf("Enter kth Elmenent:");
    scanf("%d",&k);
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
        printf("%d",a[n-k]);
    
}
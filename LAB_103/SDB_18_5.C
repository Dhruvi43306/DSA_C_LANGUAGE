#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int a[n],count = 1;

    for(int i = 0; i < n; i++){
        printf("Enter %d element:",i);
        scanf("%d",&a[i]);
    }
    for(int i = 1; i <= n; i++){
        if(a[i] < a[i-1]){
        printf("0");
            return 0;
        }
        if(a[i] == a[i-1]){
            count++;
        }
        else{
            if(count < 3){
                printf("0");
                return 0;
            }
            count = 1;
        }
        
    }
    if(count < 3)
    {
        printf("0");
        return 0;
    }

    printf("1");
    
    return 0;

}
#include<stdio.h>
void main(){
 int n;
 printf("Enter size:");
 scanf("%d",&n);
 int a[n];
 for(int i = 0; i < n; i++){
 printf("Enter %d Element:",i);
 scanf("%d",&a[i]);
 }
for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
        if(a[i] == a[j]){
            printf("%d",a[j]);
        }
    }
}

}
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
int search;
printf("Enter a Searching Elemet:");
scanf("%d",&search);
for(int i = 0; i < n; i++){
    if(a[i] == search){
        printf("Searching Index: %d ",i);
    }
}
}
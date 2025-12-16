#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter a Size of Array:");
    scanf("%d",&n);
    int *ptr = (int*)(malloc(n*sizeof(int)));

    for(int i = 0; i < n; i++){
        scanf("%d",ptr+i);
     }

     for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i- 1; j++){
         if(*(ptr+j) > *(ptr+j+1)){
            int temp = *(ptr+j);
            *(ptr+j) = *(ptr+j+1);

            *(ptr+j+1) = temp;
        
    }
}
       printf(" %d ",*(ptr+i)); 
     }
     
    }
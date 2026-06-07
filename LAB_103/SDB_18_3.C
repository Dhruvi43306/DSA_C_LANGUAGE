// WAP TO DELETE AN ELEMENT AT SPECIFIC BY USER.IF ELEMENT IS NOT FOUND PRINT A MESSAGE
//ELEMENT IS NOT FOUND.(DO NOT TAKE NEW ARRAY)

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

    int pos;
    printf("Enter a Position of element:");
    scanf("%d",&pos);

    if(pos < 0 || pos >= n)
    {
        printf("Position not found");
        return 0;
    }

    for(int i = pos; i < n; i++){
        a[i] = a[i+1];

    }
    n--;
    printf("Array after deletion:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}



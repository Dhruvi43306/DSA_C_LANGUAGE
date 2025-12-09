#include<stdio.h>
void main(){
    int m,n;
    printf("Enter a First Array of size:");
    scanf("%d",&m);
    printf("Enter a second Array of size:");
    scanf("%d",&n);
    int a[m][n],b[m][n];
    printf("Enter a First array of Element:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter a second array of Element:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&b[i][j]);
        }
    }

    int c[m][n];
     for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Sum:%d\n",c[i][j]);
           
        }
    }
}
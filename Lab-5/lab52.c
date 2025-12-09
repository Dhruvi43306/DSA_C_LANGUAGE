#include<stdio.h>
void main(){
    int m;
    printf("Enter size of square matrices (m x m): ");
    scanf("%d", &m);

    int a[m][m], b[m][m], c[m][m];
    printf("Enter a First array of Element:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter a second array of Element:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&b[i][j]);
        }
    }

  
     for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            c[i][j] = 0;
            for(int k = 0; k < m; k++){
            c[i][j] += a[i][k] * b[k][j];
        }
    }
}
 printf("Result of Matrix Multiplication:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%4d ",c[i][j]);
           
        }
        printf("\n");
    }
}
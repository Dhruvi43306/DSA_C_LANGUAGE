#include<stdio.h>
void main(){
    int n,k;
    printf("Enter kth elemnt:");
    scanf("%d",&k);
    printf("Enter a size:");
    scanf("%d",&n);
    int a[n],freq[n],visited[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        visited[i] = 0;
        freq[i] = 0;
    }
    for(int i = 0; i < n; i++){
        if(visited[i] == 1){
            continue;
        }
        int count=1;
        for(int j = i+1; j < n; j++){
            if(a[i] == a[j]){
                count++;
                visited[j] = 1;
            }
        }
        freq[i] = count;
    }
    for(int x = 0; x < k; x++){
        int max = 0;
        int index = -1;
        for(int i = 0; i < n; i++){
            if(freq[i] > max){
                max = freq[i];
                index = i;
            }
        }
        if(index != -1){
            printf("%d (freq = %d)\n", a[index], freq[index]);
            freq[index] = 0;
        }
    }
}
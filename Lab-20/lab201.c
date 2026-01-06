#include<stdio.h>
#define n 20
int hashset[n];
void init(){
    for(int i = 0; i <= n; i++){
        hashset[i] = -1;
        
    }
}
int f(int key){
    return key % n;
}
void add(int key){
    int index = f(key);
    if(hashset[index] == -1){
        hashset[index] = key;
        return;
    }
    else if(hashset[index] == key){
        printf("already Exits.\n");
        return;
    }
    else{
        for(int probe = 1; probe < n; probe++){
            int i = (index + probe) % n;
            if(hashset[i] == -1){
                hashset[i] = key;
                return;
            }
        }
    }
}
void display(){
    for(int i = 0; i < n; i++){
        printf("%d ",hashset[i]);
    }
}
void main(){
    init();
    add(10);
    add(10);
    add(20);
    display();
}
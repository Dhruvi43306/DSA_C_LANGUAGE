#include<stdio.h>
#include<string.h>
#define n 10
struct pair{
    char key[10];
    int value;
};
struct pair hashmap[n];
void init(){
    for(int i = 0; i < n; i++){
        hashmap[i].key[0] = '\0';
         hashmap[i].value = 0;

    }
}
int f(char key[]){
    int index = 0;
    for(int i = 0; i < strlen(key); i++){
        index = index + key[i];
    }
    return index % n;
}
void add(char k[],int v){
    int index = f(k);
    if(hashmap[index].key[0] == '\0'){
        // hashmap[index].key[i] = k;
        strcpy(hashmap[index].key,k);
        hashmap[index].value = v;
        return;
    }
    else if(strcmp(hashmap[index].key,k)==0){
        hashmap[index].value = v;
        return;
    }
    else{
    //collision
    for(int probe = 1; probe <= n; probe++){
        int i = (index+probe) % n;
        if(hashmap[i].key[0] == '\0'){
            strcpy(hashmap[i].key,k);
            hashmap[i].value = v;
            return;
        }
        else if(strcmp(hashmap[i].key,k) == 0){
            hashmap[i].value = v;
            return;
        }
    }
}
}

    int find(char k[]) {
    int index = f(k);

    if (strcmp(hashmap[index].key, k) == 0) {
        return hashmap[index].value;
    }
    else {
        for (int probe = 1; probe < n; probe++) {
            int i = (index + probe) % n;
            if (hashmap[i].key[0] == '\0') {
                return -1; 
            }
            if (strcmp(hashmap[i].key, k) == 0) {
                return hashmap[i].value;
            }
        }
    }
    return -1; 
}

void display() {
    for (int i = 0; i < n; i++) {
        if (hashmap[i].key[0] != '\0') {
            printf("%s %d\n", hashmap[i].key, hashmap[i].value);
        }
    }
}
void main(){
   init();
    add("abcd",10);
    add("abcd",20);
    add("bcda",30);

    display();

    printf("Find abcd -> %d\n", find("abcd"));
    printf("Find bcda -> %d\n", find("bcda"));
    printf("Find xyz  -> %d\n", find("xyz")); 

}
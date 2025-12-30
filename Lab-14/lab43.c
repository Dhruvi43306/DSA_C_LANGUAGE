#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
};


int countNode(struct node*first){

    int count = 0;
    while(first != NULL){
        count++;
        first = first->link;
        
    }
    
    return count;
  
    
}
struct node*secondhalf = NULL;

void spiltList(struct node*first){
   
    int ans=countNode(first);
    int mid = ans / 2;
     struct node*temp = first;
    for(int i = 0; i < mid-1; i++){
       temp = temp->link;
    }
    secondhalf = temp->link;
    temp->link = NULL;

}
void printList(struct node*save ){
    
    while(save != NULL){
        printf(" %d ",save->info);
        save = save->link;
    }
}
int main(){
    struct node*first = NULL,*last = NULL;
    int n,val;
    printf("Enter a size of Array:");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        scanf("%d",&val);
        struct node*newnode = (struct node*)(malloc(sizeof(struct node)));
        newnode->info = val;
        newnode->link = NULL;
        if(first == NULL){
            first = last = newnode;
        }
        else{
            last->link = newnode;
            last = newnode;
        }
    }
    

    spiltList(first);
    
    printf("\nfirst half:\n");
    printList(first);

    printf("\nsecond half:\n");
    printList(secondhalf);
    
}

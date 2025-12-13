
// Write a menu driven program to implement following operations on the Doubled Ended Queue using an Array
// •Insert at front end, Insert at rear end
// •Delete from front end, Delete from rear end
// • Display all elements of the queue
#include<stdio.h>
#define size 5
int Double_Queue[size];
int front = -1;
int rear = -1;
void Insert_Front(int x){
    if(front == 0){
        printf("Overflow\n");
        return;
    }
    if(front == -1){
        front = rear = 0;
    }
    else{
        front = front - 1;
    }
    Double_Queue[front] = x;
}
void Insert_Rear(int x){
    
    if(rear == size){
        rear = 0;
    }
    else{
        rear = rear + 1;
    }
     if(rear == front){
        printf("Overflow\n");
        return;
    }
    Double_Queue[rear] = x;
}
int Delete_Front(){
    if(front == -1){
        printf("UnderFolow.\n");
        return 0;
    }
    int y = Double_Queue[front];
    if(front == rear){
        front = rear = -1;
        
    } 
    else{
        front = front + 1;
    } 
    return y; 

}
int Delete_Rear(){
    if(rear == -1){
        printf("UnderFolow.\n");
        return 0;
    }
    int y = Double_Queue[rear];
    if(front == rear){
        front = rear = -1;
    }
    else{
        rear = rear - 1;
    }
    return y;
}
void display(){
    if(rear==-1){
        printf("underFlow.\n");
        return;
    }
    for(int i = front; i <= rear; i++){
        printf("%d ",Double_Queue[i]);
    }
}
void main(){
    int x,choice;
    do{
        printf("Enter a choise:\n1.insert_front\n2.insert_rear\n3.Delete_Front\n4.Delte_Rear\n5.display\n6.Exits.");
        scanf("%d",&choice);
    
    switch(choice){
        case 1: 
        printf("Enter a Enque Number.\n");
        scanf("%d",&x);
        Insert_Front(x);
        break;

        case 2:
        printf("Enter a Enque Number.\n");
        scanf("%d",&x);
        Insert_Rear(x);
        break;

        case 3:
        x = Delete_Front(x);
        break;

        case 4:
        x = Delete_Rear(x);
        break;

        case 5:
        display();
        break;

        case 6:
        printf("----------------------------------------------Exits.-----------------------------------------------");
    }
}
    while(choice != 6);
}
#include<stdio.h>
#define n 100
int Queue[n];
int front = -1,rear = -1;
void Circuler_Enqueue(int x){
    if(rear == n){
        rear = 0;
    }
    else{
        rear = rear + 1;
    }
    if(front == rear){
        printf("OverFlow");
        return;
    }
    Queue[rear] = x;
    if(front == -1){
        front = 0;
    }
}
int Cicular_DeQueue(){
    if(front == -1){
        printf("UnderFlow.");
    }
    int y = Queue[front];
    if(front == rear){
        front = rear = -1;
        return y;
    }
    if(front == n){
        front = 0;
    }
    else{
        front = front + 1;
    }
    return y;
}
void display(){
    if(rear==-1){
        printf("underFlow.");
        return;
    }
    for(int i = front; i <= rear; i++){
        printf("%d ",Queue[i]);
    }
}
void main(){
    int x,choise;
    do{
        printf("Enter a choise.\n1.C_Queue\n2.C_DeQue\n3.Display\n4.Exits.\n");
        scanf("%d",&choise);

       switch(choise){
        case 1:
          printf("Enter a Enque Number.\n");
        scanf("%d",&x);
        Circuler_Enqueue(x);
      
        break;        
        
        case 2:
        x = Cicular_DeQueue();
        printf("The Circular_Element Deque is %d\n",x);
        break;
        
        case 3:
        display();
        break;

        case 4:
        printf("......................................Exits........................................");
        break;
    }
}
    while(choise != 4);

    
}

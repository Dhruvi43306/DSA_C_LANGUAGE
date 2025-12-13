#include<stdio.h>
#define n 5
int Queue[n];
int front = -1,rear = -1;

void queue(int x){
    if(rear >= n){
        printf("OverFlow");
        return;
    }
    if(front == -1){
        front = front + 1;
    }
    rear = rear + 1;
    Queue[rear] = x;
}
int deqeue(){
    if(front == -1){
        printf("Queue UnderFlow.");
    }
    int y = Queue[front];

    if(front == rear){
        front = rear = -1;
    }

    else{
        front  = front + 1;
    }
    return y;
}
void display(){
    if(rear == -1){
        printf("Queue is Empty.");
        return;
    }
    for(int i = front; i <= rear; i++){
        printf("%d ",Queue[i]);
    }

}

void main(){
    int x,choise;
    do{
    printf("Enter a choise\n1.Enqueue\n2.Dequeue.\n3.display.\n4.exits.\n");
    scanf("%d",&choise);

    
   switch (choise){
    case 1:
    printf("Enter a Number to Enque.");
    scanf("%d",&x);
    queue(x);
    break;

    case 2:
     x = deqeue();
    printf("The Element DeQueue is %d\n",x);
    break;


    case 3:
    display();
    break;

    case 4:
        printf("................................Exiting...............................");
        break;
   }
}
   while(choise != 4);

}
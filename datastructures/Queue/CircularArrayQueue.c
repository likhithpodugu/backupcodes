#include <stdio.h>
int queue[10] ;
int front = -1 ;
int rear = -1 ;

void enqueue(int x){
    if(front == -1 && rear == -1){
        rear = front = 0     ;
        queue[rear] = x ;
    }
    else if(front == 0 && rear == 9){
        printf("OVERFLOW");
    }
    else{
        rear = (rear+1)%10 ;
        queue[rear] = x ;
    }
}
void dequeue(){
    if(front == -1 && rear == -1){
        printf("UNDERFLOW");
    }
    else{
    front = (front+1)%10 ;
    }
}
void peek(){
    printf("\n%d",queue[front]);
}
void display(){
    int i = front;
    while(i!=rear){
        printf("%d",queue[i]);
        i = (i+1)%10 ;
    }
}

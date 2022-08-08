#include <stdio.h>
int queue[10] ;
int front = -1 ;
int rear = -1 ;

void enqueue(int a){
    if(front == -1 && rear == -1){
        rear++;
        front++ ;
        queue[rear] = a ;
    }
    else{
        rear++ ;
        queue[rear] = a ;
    }
}
void dequeue(){
    front++ ;
}
void peek(){
    printf("\n%d",queue[front]);
}
void display(){
    for(int i = front;i<=rear;i++){
        printf("%d\t",queue[i]);
    }
}

int main(){
    enqueue(28);
    enqueue(25);
    enqueue(24);
    enqueue(23);
    display();
    dequeue();
    peek();
    enqueue(22);
    enqueue(21);
    printf("\n");
    display();
    dequeue();
    printf("\n");
    display();
}
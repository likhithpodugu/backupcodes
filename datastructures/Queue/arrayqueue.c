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
     if(front == -1 && rear == -1){
        printf("UNDERFLOW") ;
    }                                               //removes top most element
    else{
        printf("Deleted : %d\n",queue[front]) ;
        front++ ;
    }
}
void peek(){
    printf("\n%d\n",queue[front]);
}
void traversal(){
    for(int i = front;i<=rear;i++){
        printf("%d\t",queue[i]);
    }
}

int main(){
    int value,choice ;
    int na = 1 ;
    while(na){
        printf("1. Enqueue\t2. Dequeue\t3. traversal\t4. Exit") ;
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Enter inserted value: \n");
            scanf("%d",&value);
            enqueue(value) ;
            break ;

            case 2: dequeue() ;
            break;

            case 3: traversal();
            break;

            case 4: na = 0 ;

            default: printf("\nWRONG SELECTION!!! TRY AGAIN");
        }
        }

}

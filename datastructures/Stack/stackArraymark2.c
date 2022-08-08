#include <stdio.h>
#define n 10      //size of the stack

int stack[n];
int top = -1 ;
void push();
void pop();
void peek();
void traversal();
void isFull() ;
void isEmpty() ;

int main(){
    int value,choice ;
    int na = 1 ;
    while(na){
        printf("1. Push\t2. pop\t3. traversal\t4. Exit") ;
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Enter inserted value: \n");
            scanf("%d",&value);
            push(value) ;
            break ;

            case 2: pop() ;
            break;

            case 3: traversal();
            break;

            case 4: na = 0 ;

            default: printf("\nWRONG SELECTION!!! TRY AGAIN");
        }
        }

}

void push(int num1){
    if(top >= n ){
        printf("Stack overflow") ;
    }                                                  //adding an element in stack
    else{
    top++ ;
    stack[top] = num1 ;
    }
}

void pop(){
    if(top == -1){
        printf("UNDERFLOW") ;
    }                                               //removes top most element
    else{
        printf("Deleted : %d",stack[top]) ;
        top-- ;
    }
}

void peek(){
    printf("%d\n",stack[top]);      //returns top most element
}

void traversal(){
    for(int i = top;i>=0;i--){                             //print all elements in stack
        printf("\n%d\t",stack[i]);
    }
}

void isFull(){
    if(top >= n){
        printf("Overflow or Stack is Full") ;                  //checking stack is full or not
    }
}

void isEmpty(){
    if(top == -1){
        printf("Underflow or Stack is Empty") ;                    //checking stack is empty or not
    }
}
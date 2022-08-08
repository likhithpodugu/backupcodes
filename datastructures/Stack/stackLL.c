#include <stdio.h>
#include <stdlib.h>

struct node{
    int a;
    struct node *next;
};
struct node *head,*top;
head = 0 ;


void push(){
    struct node *newnode;
    newnode = (struct  node*)malloc(sizeof(struct node));
    printf("Enter your Number: \t");
    scanf("%d",newnode->a);
    if(head == 0){
        head = newnode ;
        newnode->next = 0 ;
    }
    else{
        newnode->next = head;
        head = newnode ;
    }
};

void pop(){
    head->next->next = 0;
    head = head->next;
};

void peek(){
    printf("%d",head->next->a);
};

void display(){
    struct node *temp;
    temp = head;
    while(temp!=0){
        printf("%d",temp->a);
        temp = temp->next ;
    }
}

int main(){
    for(int i = 0;i<5;i++){
    push();
    }
    display();
    pop();
    peek();
    display();
}
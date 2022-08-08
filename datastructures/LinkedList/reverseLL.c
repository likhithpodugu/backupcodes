#include <stdio.h>
#include <stdlib.h>

struct node{
    int a;
    struct node *next;
};

int main(){
    struct node *head , *newnode ,*temp ;
    head = 0 ;
    int n = 1;
    while(n){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("ENTER DATA:\t");
    scanf("%d",&(newnode->a));
    newnode->next = NULL;
    if(head==0){
        head = newnode ;
        temp = newnode ;
    }
    else{
        temp->next = newnode ;
        temp = newnode ;
    }
    printf("CHOOSE 0/1\n") ;
    scanf("%d",&n);
    };


// ........................................................
    temp = head ;

    printf("[%p]\t",head);
    while(temp!=0){
        printf("[%d %p]\t",temp->a,temp->next);
        temp = temp->next ;
    }

//...........................................................
struct node *prev,*next,*current ;
prev = 0;
current = head;
next = head ;
while(next!=0){
    next = next->next ;
    current->next = prev ;
    prev = current;
    current = next;
}
head = prev;

//............................................................
 temp = head ;
  printf("\n");
    printf("[%p]\t",head);
    while(temp!=0){
        printf("[%d %p]\t",temp->a,temp->next);
        temp = temp->next ;
    }

}
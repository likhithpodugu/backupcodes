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

    temp = head ;

    printf("[%p]\t",head);
    while(temp!=0){
        printf("[%d %p]\t",temp->a,temp->next);
        temp = temp->next ;
    }

    // ..................................................................................

    struct node *newelem ;
    newelem =  (struct node *)malloc(sizeof(struct node));
    int pos ,i;
    i = 1 ;
    temp = head;
    printf("\n...................................\n");
    printf("Element :\n");
    scanf("%d",&(newelem->a));
    printf("Position of element :\n");
    scanf("%d",&pos);
    while(i<pos){
        temp = temp->next ;
        i++ ;
    };
    newelem->next = temp->next ;
    temp->next = newelem ;

    //....................................................
    temp = head ;

    printf("[%p]\t",head);
    while(temp!=0){
        printf("[%d %p]\t",temp->a,temp->next);
        temp = temp->next ;
    }

}
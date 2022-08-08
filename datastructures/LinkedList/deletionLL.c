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
//.......................................................
    int delpos;
    struct node *temp2;
    scanf("%d",&delpos);
    temp = head ;
    int i = 1 ;
    while(i<delpos){
        temp = temp->next ;
        i++ ;
    };
    temp2 = head ;
    int j = 1 ;
    while(j<delpos-1){
        temp = temp->next ;
        j++ ;
    };
    temp2->next = temp->next ;
    free(temp);

    temp2 = head ;

    printf("[%p]\t",head);
    while(temp2!=0){
        printf("[%d %p]\t",temp2->a,temp2->next);
        temp2 = temp2->next ;
    }
};
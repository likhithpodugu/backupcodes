#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node *next;
    struct node *prev;
};

int main(){
    struct node *head, *newnode ,*temp;
    int n = 1;
    head = NULL;
    while(n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next = NULL ;
    newnode -> prev = NULL ;
    printf("Enter your data: \t");
    scanf("%d",&(newnode->a)) ;
    if(head == 0){
        head = newnode;
        temp = newnode;
    }
    else{
        temp->next = newnode;
        newnode->prev = temp;
        temp = temp->next ;
    }
    printf("Choose 0/1\n");
    scanf("%d",&n);
    }


    //........................TRAVERSAL................................................
    temp = head;

    while(temp!=0){
        printf("[%p\t%d\t%p]",temp->prev,temp->a,temp->next);
        temp = temp->next ;
    }

    //.....................INSERTING...................................................
    int pos,i;
    struct node *insert;
    printf("\nEnter your position of new data: \t");
    scanf("%d",&pos);
    temp = head ;
    i = 1 ;
    while(i<pos){
        temp = temp->next ;
        i++;
    };
    insert = (struct node *)malloc(sizeof(struct node));
    printf("Enter your inserted data:\t") ;
    scanf("%d",&(insert->a)) ;
    insert->prev = temp;
    insert->next = temp->next ;
    temp->next = insert ;
    temp = temp->next ;
    temp = temp->next;
    temp->prev = insert ;

    //.......................TRAVERSAL AGAIN................................................
    temp = head;
    printf("\n");
    while(temp!=0){
        printf("[%p\t%d\t%p]",temp->prev,temp->a,temp->next);
        temp = temp->next ;
    }

    //.....................DELETING..................................................
    printf("\nEnter your deleting position");
    int delpos;
    scanf("%d",&delpos);
    temp = head ;
    int j = 1;
    while(j<delpos){
        temp = temp->next ;
        j++;
    }
    temp->next->prev = temp->prev ;
    temp->prev->next = temp->next ;

       temp = head;
    printf("\n");
    while(temp!=0){
        printf("[%p\t%d\t%p]",temp->prev,temp->a,temp->next);
        temp = temp->next ;
    }
    //.......................TRAVERSAL AGAIN................................................
    temp = head;
    printf("\n");
    while(temp!=0){
        printf("[%p\t%d\t%p]",temp->prev,temp->a,temp->next);
        temp = temp->next ;
    }
    
}
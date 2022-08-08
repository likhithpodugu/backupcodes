#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node *next ;
};
struct node *head,*newnode,*temp;

void display(){
    temp = head;
        printf("\n");
       printf("[%d\t%p]",temp->a,temp->next);
       temp = temp->next ;

    while(temp!=head){
        printf("[%d\t%p]",temp->a,temp->next);
        temp = temp->next ;
        };
} 

int main(){
    head = 0;
    int n ;
    n = 1 ;
    while(n){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter your data:\t");
    scanf("%d",&(newnode->a));
    newnode->next = 0 ;
    if (head == 0){
        head = newnode;
        temp = head;
    }
    else{
        temp->next = newnode;
        temp = temp->next ;
    }
    temp->next = head ;
    printf("Choose 0/1\n");
    scanf("%d",&n);
    }   

    display();

    //..............INSERTING...................................
    int pos,i ;
    struct node *insert ;
    insert = (struct node *)malloc(sizeof(struct node));
    printf("Enter your position of inserting data:\n");
    scanf("%d",&pos);
    printf("Enter your inserted data: ");
    scanf("%d",&(insert->a));
    temp = head;
    while(i<pos){
        temp = temp->next ;
        i++;
    }
    insert->next = temp->next ;
    temp->next = insert ;

    display();

}


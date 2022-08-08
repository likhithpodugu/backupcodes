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
}
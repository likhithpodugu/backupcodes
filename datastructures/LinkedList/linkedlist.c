#include <stdio.h>
#include <stdlib.h>

struct node{
    int a;
    struct node *next ;
};

int main(){
    struct node *head ,*newnode ,*temp;
    int n;
    head = 0 ;
    n = 1 ;
    while(n) 
    {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:\t") ;
    scanf("%d",&(newnode->a));
    newnode->next = NULL ;
    if(head == 0){
        head = newnode = temp;
    }
    else{
        temp->next = newnode ;
        temp = newnode ;
    }
    printf("CHOICE: 0/1\n");
    scanf("%d",&n);
    }


    return 0;
}
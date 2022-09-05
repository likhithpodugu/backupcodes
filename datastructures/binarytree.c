#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left ;
    struct node *right ;
} ;

struct node *create(){
    struct node *newnode ;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter your data(type -1 for no node) : \n") ;
    int temp ;
    scanf("%d",&temp ) ;
    if(temp == -1){
        return 0 ;
    }
    else{
    newnode->data = temp ;
    }
    printf("Enter the data left child node %d",temp);
    newnode->left = create() ;
    printf("Enter the data right child node %d",temp);
    newnode->right = create() ;
    
    return newnode ;
}

int main(){
    struct node *root ;
    root = create() ;
}

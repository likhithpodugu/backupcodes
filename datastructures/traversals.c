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

void preorder(struct node *root){
    if(root == 0){
        return;
    }
    else{
        printf("%d",root->data) ;
        preorder(root->left);
        preorder(root->right) ;
    }
}

void inorder(struct node *root){
    if(root == 0){
        return ;
    }
    else{
        inorder(root->left);
        printf("%d",root->data) ;
        inorder(root->right) ;
    }
}

void postorder(struct node *root){
    if(root == 0){
        return ;
    }
    else{
        postorder(root->left) ;
        postorder(root->right) ;
        printf("%d",root->data) ;
    }
}


int main(){
    struct node *root ;
    root = create() ;
    printf("Preorder of binary tree");
    preorder(root) ;
    printf("Inorder of binary tree");
    inorder(root) ;
    printf("Postorder of binary tree");
    postorder(root) ;
}
